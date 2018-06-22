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
std::string op_and = "a";
std::string op_or = "o";
std::string aa = "aa";
std::string aa0 = "aa0";
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

//    std::cout << "start: s \naccept: ac \nreject: rj \nblank: _ \n";
    std::cout << "\n";

    next_step(start, zero, blank, rd, zero, top, blank, top);
    next_step(start, one, blank, rd, one, top, blank, top);

    next_step(rd, zero, blank, rd, blank, right_step, zero, right_step);
    next_step(rd, one, blank, rd, blank, right_step, one, right_step);

    next_step(rd, op_and, blank, aa, blank, top, blank, left_step);
    next_step(rd, op_or, blank, oo, blank, top, blank, left_step);

    next_step(rd, blank, blank, ac1, blank, top, blank, left_step);
    next_step(ac1, blank, zero, ac1, zero, left_step, blank, left_step);
    next_step(ac1, blank, one, ac1, one, left_step, blank, left_step);
    next_step(ac1, blank, blank, accept, blank, right_step, blank, top);

    next_step(aa, blank, zero, aa0, blank, top, blank, left_step);
    next_step(aa, blank, one, aa1, blank, top, blank, left_step);

    next_step(aa0, blank, zero, rd, blank, right_step, zero, right_step);
    next_step(aa0, blank, one, rd, blank, right_step, zero, right_step);

    next_step(aa1, blank, zero, rd, blank, right_step, zero, right_step);
    next_step(aa1, blank, one, rd, blank, right_step, one, right_step);

    next_step(oo, blank, zero, oo0, blank, top, blank, left_step);
    next_step(oo, blank, one, oo1, blank, top, blank, left_step);

    next_step(oo0, blank, zero, rd, blank, right_step, zero, right_step);
    next_step(oo0, blank, one, rd, blank, right_step, one, right_step);

    next_step(oo1, blank, zero, rd, blank, right_step, one, right_step);
    next_step(oo1, blank, one, rd, blank, right_step, one, right_step);

    for (int i = 0; i < steps.size(); i++) {
        std::cout << steps[i].first << " -> " << steps[i].second << std::endl;
    }

    return 0;
}