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
std::string one = "1";
std::string zero = "0";
std::string one_seen = "1'";
std::string zero_seen = "0'";
std::string plus = "+";
std::string f = "f";
std::string ch = "ch";
std::string r = "r";
std::string open = "(";
std::string close = ")";
std::string open_seen = "('";
std::string close_seen = ")'";


void next_step(std::string from, std::string from_st, std::string to, std::string to_st, std::string move) {
    std::pair<std::string, std::string> step;
    step.first = from + " " + from_st;
    step.second = to + " " + to_st + " " + move;
    steps.push_back(step);
}

int main() {
    freopen("balanced.out", "w", stdout);

    std::cout << "start: s \naccept: ac \nreject: rj \nblank: _ \n";

    next_step(start, blank, accept, blank, top);
    next_step(start, close, reject, blank, top);
    next_step(start, open, f, open, right_step);
    next_step(f, open, f, open, right_step);

    next_step(f, open_seen, f, open_seen, right_step);
    next_step(f, close_seen, f, close_seen, right_step);
    next_step(f, close, r, close_seen, left_step);

    next_step(f, blank, ch, blank, left_step);

    next_step(ch, close_seen, ch, close, left_step);
    next_step(ch, open_seen, ch, open, left_step);
    next_step(ch, close, reject, blank, top);
    next_step(ch, open, reject, blank, top);
    next_step(ch, blank, accept, blank, top);

    next_step(r, open, f, open_seen, right_step);
    next_step(r, close, r, close, left_step);
    next_step(r, open_seen, r, open_seen, left_step);
    next_step(r, close_seen, r, close_seen, left_step);
    next_step(r, blank, reject, blank, top);


    for (int i = 0; i < steps.size(); i++) {
        std::cout << steps[i].first << " -> " << steps[i].second << std::endl;
    }

    return 0;
}