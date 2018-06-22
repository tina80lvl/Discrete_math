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
std::string one_seen = "1'";
std::string zero_seen = "0'";
std::string plus = "+";
std::string gb = "gb";
std::string gts = "gts";
std::string s1 = "s1";
std::string gw = "gw";
std::string gl0 = "gl0";
std::string gl1 = "gl1";
std::string gl0osb = "gl0osb";
std::string gl1osb = "gl1osb";
std::string gl0ob = "gl0ob";
std::string gsw = "gsw";
std::string gl1ob = "gl1ob";
std::string gsac = "gsac";
std::string gbac = "gbac";

void next_step(std::string from, std::string from_st, std::string to, std::string to_st, std::string move) {
    std::pair<std::string, std::string> step;
    step.first = from + " " + from_st;
    step.second = to + " " + to_st + " " + move;
    steps.push_back(step);
}

int main() {
    freopen("reverse.out", "w", stdout);

    std::cout << "start: s \naccept: ac \nreject: rj \nblank: _ \n";

    next_step(start, zero, gb, zero, right_step);
    next_step(start, one, gb, one, right_step);
    next_step(gb, zero, gb, zero, right_step);
    next_step(gb, one, gb, one, right_step);
    next_step(gb, blank, gts, two, left_step);

    next_step(gts, one, gts, one, left_step);
    next_step(gts, zero, gts, zero, left_step);
    next_step(gts, blank, s1, blank, right_step);
    next_step(s1, zero, gl0, blank, left_step);
    next_step(s1, one, gl1, blank, left_step);
    next_step(gl0, blank, gw,  zero, right_step);
    next_step(gl1, blank, gw,  one, right_step);

    next_step(gw,  blank, gw,  blank, right_step);
    next_step(gw,  zero, gl0osb, blank, left_step);
    next_step(gw,  one, gl1osb, blank, left_step);
    next_step(gl0osb, blank, gl0osb, blank, left_step);

    next_step(gl0osb, zero, gl0ob, zero, left_step);
    next_step(gl0osb, one, gl0ob, one, left_step);
    next_step(gl0ob, zero, gl0ob, zero, left_step);
    next_step(gl0ob, one, gl0ob, one, left_step);

    next_step(gl0ob, blank, gsw, zero, right_step);
    next_step(gl1osb, blank, gl1osb, blank, left_step);
    next_step(gl1osb, zero, gl1ob, zero, left_step);
    next_step(gl1osb, one, gl1ob, one, left_step);
    next_step(gl1ob, zero, gl1ob, zero, left_step);
    next_step(gl1ob, one, gl1ob, one, left_step);

    next_step(gl1ob, blank, gsw, one, right_step);
    next_step(gsw, zero, gsw, zero, right_step);
    next_step(gsw, one, gsw, one, right_step);
    next_step(gsw, blank, gw,  blank, right_step);

    next_step(gw, two, gsac, blank, left_step);
    next_step(gsac, blank, gsac, blank, left_step);
    next_step(gsac, zero, gbac, zero, left_step);
    next_step(gsac, one, gbac, one, left_step);
    next_step(gbac, zero, gbac, zero, left_step);
    next_step(gbac, one, gbac, one, left_step);
    next_step(gbac, blank, accept, blank, right_step);

    for (int i = 0; i < steps.size(); i++) {
        std::cout << steps[i].first << " -> " << steps[i].second << std::endl;
    }

    return 0;
}