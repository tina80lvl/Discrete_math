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
std::string one_seen2 = "1''";
std::string zero_seen = "0'";
std::string zero_seen2 = "0''";
std::string plus = "+";
std::string f = "f";
std::string cl = "cl";
std::string ch = "ch";
std::string ch0 = "ch0";
std::string ch1 = "ch1";
std::string r = "r";
std::string ret = "ret";
std::string mark = "mark";


void next_step(std::string from, std::string from_st, std::string to, std::string to_st, std::string move) {
    std::pair<std::string, std::string> step;
    step.first = from + " " + from_st;
    step.second = to + " " + to_st + " " + move;
    steps.push_back(step);
}

int main() {
    freopen("less.out", "w", stdout);

    std::cout << "start: s \naccept: ac \nreject: rj \nblank: _ \n";

    next_step(start, zero, f, zero_seen, right_step);
    next_step(start, one, f, one_seen, right_step);
    next_step(start, left_step, cl, left_step, right_step);

    next_step(cl, one, accept, blank, top);
    next_step(cl, zero_seen2, ret, zero_seen2, left_step);
    next_step(cl, one_seen2, ret, one_seen2, left_step);

    next_step(ret, left_step, ret, left_step, left_step);
    next_step(ret, zero_seen, ret, zero_seen, left_step);
    next_step(ret, one_seen, ret, one_seen, left_step);
    next_step(ret, zero, ch, zero, right_step);
    next_step(ret, one, ch, one, right_step);
    next_step(ret, blank, ch, blank, right_step);

    next_step(ch, zero_seen, ch0, zero, right_step);
    next_step(ch, one_seen, ch1, one, right_step);
    next_step(ch, left_step, reject, blank, top);

    next_step(ch0, zero_seen, ch0, zero_seen, right_step);
    next_step(ch0, one_seen, ch0, one_seen, right_step);
    next_step(ch0, left_step, ch0, left_step, right_step);
    next_step(ch0, one_seen2, accept, blank, top);
    next_step(ch0, zero_seen2, ret, zero_seen, left_step);

    next_step(ch1, zero_seen, ch1, zero_seen, right_step);
    next_step(ch1, one_seen, ch1, one_seen, right_step);
    next_step(ch1, left_step, ch1, left_step, right_step);
    next_step(ch1, zero_seen2, reject, blank, top);
    next_step(ch1, one_seen2, ret, one_seen, left_step);

    next_step(f, zero, f, zero, right_step);
    next_step(f, one, f, one, right_step);
    next_step(f, left_step, f, left_step, right_step);
    next_step(f, blank, mark, blank, left_step);
    next_step(f, zero_seen2, mark, zero_seen2, left_step);
    next_step(f, one_seen2, mark, one_seen2, left_step);

    next_step(mark, left_step, reject, blank, top);
    next_step(mark, zero, r, zero_seen2, left_step);
    next_step(mark, one, r, one_seen2, left_step);

    next_step(r, zero, r, zero, left_step);
    next_step(r, one, r, one, left_step);
    next_step(r, left_step, r, left_step, left_step);
    next_step(r, zero_seen, start, zero_seen, right_step);
    next_step(r, one_seen, start, one_seen, right_step);

    for (int i = 0; i < steps.size(); i++) {
        std::cout << steps[i].first << " -> " << steps[i].second << std::endl;
    }

    return 0;
}