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
std::string p = "p";
std::string p1 = "p1";
std::string p2 = "p2";
std::string q1 = "q1";
std::string q2 = "q2";
std::string q3 = "q3";
std::string q4 = "q4";
std::string q5 = "q5";
std::string q6 = "q6";

void next_step(std::string from, std::string from_st, std::string to, std::string to_st, std::string move) {
    std::pair<std::string, std::string> step;
    step.first = from + " " + from_st;
    step.second = to + " " + to_st + " " + move;
    steps.push_back(step);
}

int main() {
    freopen("aplusb.out", "w", stdout);

    std::cout << "start: s \naccept: ac \nreject: rj \nblank: _ \n";

    next_step(start, zero, start, zero, right_step);
    next_step(start, one, start, one, right_step);
    next_step(start, plus, start, plus, right_step);
    next_step(start, blank, q1, blank, left_step);

    next_step(q1, zero, q1, zero, left_step);
    next_step(q1, one, q2, zero, right_step);
    next_step(q1, plus, p, plus, top);

    next_step(q2, zero, q2, one, right_step);
    next_step(q2, one, q2, zero, right_step);
    next_step(q2, blank, q3, blank, left_step);

    next_step(q3, zero, q3, zero, left_step);
    next_step(q3, one, q3, one, left_step);
    next_step(q3, plus, q4, plus, left_step);

    next_step(p, zero, p, blank, right_step);
    next_step(p, one, p, blank, right_step);
    next_step(p, plus, p, blank, right_step);
    next_step(p, blank, p1, blank, top);

    next_step(p1, zero, p2, zero, top);
    next_step(p1, one, p2, one, top);
    next_step(p1, blank, p1, blank, left_step);

    next_step(p2, zero, p2, zero, left_step);
    next_step(p2, one, p2, one, left_step);
    next_step(p2, blank, accept, blank, right_step);

    next_step(q4, zero, q5, one, right_step);
    next_step(q4, one, q4, one, left_step);
    next_step(q4, blank, q5, one, right_step);

    next_step(q5, one, q5, zero, right_step);
    next_step(q5, plus, q6, plus, left_step);

    next_step(q6, zero, q6, zero, left_step);
    next_step(q6, one, q6, one, left_step);
    next_step(q6, blank, start, blank, right_step);


    for (int i = 0; i < steps.size(); i++) {
        std::cout << steps[i].first << " -> " << steps[i].second << std::endl;
    }

    return 0;
}