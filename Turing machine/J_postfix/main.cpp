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
std::string plus = "+";
std::string rd = "rd";
std::string nx = "nx";
std::string cmp = "cmp";
std::string vala = "vala";
std::string valo = "valo";
std::string nxa = "nxa";
std::string ac1 = "ac1";
std::string a = "a";
std::string o = "o";
std::string or_one = "o1";
std::string or_zero = "o0";
std::string and_one = "a1";
std::string and_zero = "a0";
std::string aa1 = "aa1";
std::string oo = "oo";
std::string oo0 = "oo0";
std::string oo1 = "oo1";
std::string ch = "ch";

void next_step(std::string from, std::string from_st, std::string to_st, std::string to, std::string n_st1, std::string move1, std::string n_st2, std::string move2) {
    std::pair<std::string, std::string> step;
    step.first = from + " " + from_st + " " + to_st;
    step.second = to + " " + n_st1 + " " + move1 + " " + n_st2 + " " + move2;
    steps.push_back(step);
}

int main() {
    freopen("postfixlogic.out", "w", stdout);

    std::cout << "2\n";
    std::cout << "start: s \naccept: ac \nreject: rj \nblank: _ \n";

    next_step(start, zero, blank, start, blank, right_step, zero, right_step);
    next_step(start, one, blank, start, blank, right_step, one, right_step);
    next_step(start, o, blank, start, o, top, blank, left_step);
    next_step(start, a, blank, start, a, top, blank, left_step);
    next_step(start, o, zero, or_zero, o, top, blank, left_step);
    next_step(start, o, one, or_one, o, top, blank, left_step);

    next_step(or_zero, o, zero, start, blank, right_step, zero, right_step);
    next_step(or_zero, o, one, start, blank, right_step, one, right_step);
    next_step(or_one, o, zero, start, blank, right_step, one, right_step);
    next_step(or_one, o, one, start, blank, right_step, one, right_step);
    next_step(start, a, zero, and_zero, a, top, blank, left_step);
    next_step(start, a, one, and_one, a, top, blank, left_step);

    next_step(and_zero, a, zero, start, blank, right_step, zero, right_step);
    next_step(and_zero, a, one, start, blank, right_step, zero, right_step);
    next_step(and_one, a, zero, start, blank, right_step, zero, right_step);
    next_step(and_one, a, one, start, blank, right_step, one, right_step);
    next_step(start, blank, blank, start, blank, top, blank, left_step);
    next_step(start, blank, blank, start, blank, top, blank, left_step);
    next_step(start, blank, zero, accept, zero, top, blank, top);
    next_step(start, blank, one, accept, one, top, blank, top);

    for (int i = 0; i < steps.size(); i++) {
        std::cout << steps[i].first << " -> " << steps[i].second << std::endl;
    }

    return 0;
}