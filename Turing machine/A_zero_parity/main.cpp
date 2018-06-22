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

void next_step(std::string from, std::string from_st, std::string to, std::string to_st, std::string move) {
    std::pair<std::string, std::string> step;
    step.first = from + " " + from_st;
    step.second = to + " " + to_st + " " + move;
    steps.push_back(step);
}

int main() {
    freopen("zero.out", "w", stdout);

    std::cout << "start: s \naccept: ac \nreject: rj \nblank: _ \n";

    next_step(start, blank, accept, blank, top);
    next_step(start, "0", "n", blank, right_step);
    next_step("n", "0", start, blank, right_step);
    next_step("n", blank, reject, blank, right_step);

    for (int i = 0; i < steps.size(); i++) {
        std::cout << steps[i].first << " -> " << steps[i].second << std::endl;
    }
}