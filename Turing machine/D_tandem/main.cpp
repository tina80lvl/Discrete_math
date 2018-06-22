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
std::string four = "4";
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

std::string ch_l = "ch_l";
std::string ch_r = "ch_r";
std::string f_l = "f_l";
std::string f_l2 = "f_l2";
std::string f_r = "f_r";
std::string ch_l2 = "ch_l2";
std::string ch_l3 = "ch_l3";
std::string f_r4 = "f_r4";
std::string f_rp4 = "f_rp4";
std::string f_l3 = "f_l3";

void next_step(std::string from, std::string from_st, std::string to, std::string to_st, std::string move) {
    std::pair<std::string, std::string> step;
    step.first = from + " " + from_st;
    step.second = to + " " + to_st + " " + move;
    steps.push_back(step);
}

int main() {
	freopen("tandem.out", "w", stdout);

    std::cout << "start: s \naccept: ac \nreject: rj \nblank: _ \n";

    next_step(start, zero, f_r, two, right_step);
    next_step(start, one, f_r, three, right_step);

    next_step(f_r, zero, f_r, zero, right_step);
    next_step(f_r, one, f_r, one, right_step);
    next_step(f_r, blank, ch_r, blank, left_step);
    next_step(f_r, two, ch_r, two, left_step);
    next_step(f_r, three, ch_r, three, left_step);

    next_step(ch_r, zero, f_l, two, left_step);
    next_step(ch_r, one, f_l, three, left_step);
    next_step(ch_r, two, reject, two, top);
    next_step(ch_r, three, reject, three, top);

    next_step(f_l, zero, f_l, zero, left_step);
    next_step(f_l, one, f_l, one, left_step);
    next_step(f_l, two, ch_l, two, right_step);
    next_step(f_l, three, ch_l, three, right_step);

    next_step(ch_l, zero, f_r, two, right_step);
    next_step(ch_l, one, f_r, three, right_step);
    next_step(ch_l, two, f_l2, four, left_step);
    next_step(ch_l, three, f_l3, four, left_step);

    next_step(f_l2, three, f_l2, three, left_step);
    next_step(f_l2, two, f_l2, two, left_step);
    next_step(f_l2, blank, ch_l2, blank, right_step);
    next_step(f_l2, four, f_l2, four, left_step);

    next_step(ch_l2, two, f_rp4, blank, right_step);
    next_step(ch_l2, three, reject, three, top); //reject

    next_step(f_l3, three, f_l3, three, left_step);
    next_step(f_l3, two, f_l3, two, left_step);
    next_step(f_l3, four, f_l3, four, left_step);
    next_step(f_l3, blank, ch_l3, blank, right_step);

    next_step(ch_l3, three, f_rp4, blank, right_step);
    next_step(ch_l3, two, reject, two, top);

    next_step(f_rp4, three, f_rp4, three, right_step);
    next_step(f_rp4, two, f_rp4, two, right_step);
    next_step(f_rp4, four, f_r4, four, right_step);

    next_step(f_r4, four, f_r4, four, right_step);
    next_step(f_r4, blank, accept, blank, top);
    next_step(f_r4, three, f_l3, four, left_step);
    next_step(f_r4, two, f_l2, four, left_step);

    for (int i = 0; i < steps.size(); i++) {
        std::cout << steps[i].first << " -> " << steps[i].second << std::endl;
    }

    return 0;
}