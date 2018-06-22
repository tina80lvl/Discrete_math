#include <iostream>
#include <vector>
#include <cstring>
#include <cstdio>

std::vector<std::pair<std::string, std::string>> steps;
std::string start = "s";
std::string accept = "ac";
std::string reject = "rj";
std::string blank = "_";
std::string top = "^";
std::string left_step = "<";
std::string right_step = ">";
std::string zero = "0";
std::string one = "1";
std::string two = "2";
std::string three = "3";
std::string back1 = "back1";
std::string back2 = "back2";
std::string gb = "gb";
std::string plus = "+";
std::string update = "up";
std::string d = "d";
std::string w0 = "w0";
std::string w1 = "w1";

void next_step(std::string from, std::string from_st, std::string to, std::string to_st, std::string move) {
    std::pair<std::string, std::string> step;
    step.first = from + " " + from_st;
    step.second = to + " " + to_st + " " + move;
    steps.push_back(step);
}

int main() {
    freopen("mirror.out", "w", stdout);

    std::cout << "start: s \naccept: ac \nreject: rj \nblank: _ \n";

    next_step(start, zero, start, zero, right_step);

    next_step(start, one, start, one, right_step);

    next_step(start, blank, d, blank, left_step);
    next_step(d, zero, w0, two, right_step);

    next_step(d, one, w1, three, right_step);
    next_step(w0, zero, w0, zero, right_step);
    next_step(w0, one, w0, one, right_step);
    next_step(w0, two, w0, two, right_step);
    next_step(w0, three, w0, three, right_step);
    next_step(w0, blank, back1, zero, left_step);
    next_step(w1, zero, w1, zero, right_step);

    next_step(w1, one, w1, one, right_step);
    next_step(w1, two, w1, two, right_step);
    next_step(w1, three, w1, three, right_step);
    next_step(w1, blank, back1, one, left_step);
    next_step(back1, zero, back1, zero, left_step);

    next_step(back1, one, back1, one, left_step);

    next_step(back1, two, back2, two, left_step);
    next_step(back1, three, back2, three, left_step);
    next_step(back2, two, back2, two, left_step);
    next_step(back2, three, back2, three, left_step);

    next_step(back2, zero, d, zero, top);
    next_step(back2, one, d, one, top);
    next_step(back2, blank, update, blank, right_step);
    next_step(update, two, update, zero, right_step);
    next_step(update, three, update, one, right_step);
    next_step(update, zero, gb, zero, left_step);
    next_step(update, one, gb, one, left_step);
    next_step(gb, one, gb, one, left_step);
    next_step(gb, zero, gb, zero, left_step);
    next_step(gb, blank, accept, blank, right_step);


    for (int i = 0; i < steps.size(); i++) {
        std::cout << steps[i].first << " -> " << steps[i].second << std::endl;
    }

    return 0;
}