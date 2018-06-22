#include <iostream>
#include <vector>
#include <cstring>
#include <cstdio>

std::vector<std::pair<std::string, std::string>> steps;
std::string symb[10] = {"0", "1", "*", "2", "3", "4", "!", "_", "$", "x"};
std::string start = "s";
std::string s1 = "s1";
std::string s2 = "s2";
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
std::string one_seen2 = "1''";
std::string zero_seen = "0'";
std::string zero_seen2 = "0''";
std::string plus = "+";
std::string f = "f";
std::string mf = "mf";
std::string t4 = "t4";
std::string a = "a";
std::string e = "e";
std::string o = "o";
std::string w0 = "w0";
std::string w1 = "w1";
std::string w2 = "w2";
std::string w3 = "w3";

std::string write_back_a = "write_back_a";
std::string to_right = "to_right";
std::string write_back_b = "write_back_b";
std::string clean_ab = "clean_ab";
std::string w1r0 = "w1r0";
std::string w1r1 = "w1r1";
std::string w0r2 = "w0r2";
std::string w2r0 = "w2r0";
std::string w2r1 = "w2r1";
std::string ff = "ff";
std::string ff2 = "ff2";
std::string go = "go";

std::string to_prev_arr = "to_prev_arr";
std::string ns = "ns";
std::string end_arr = "end_arr";
std::string go_begin = "go_begin";
std::string to_left_a = "to_left_a";
std::string to_left_b = "to_left_b";
std::string comp = "comp";
std::string to_left_arr = "to_left_arr";
std::string clean_ab_back = "clean_ab_back";

void next_step(std::string a1, std::string a2, std::string a3, std::string a4, std::string b1, std::string b2, std::string b3, std::string b4, std::string b5, std::string b6, std::string b7) {
    std::pair<std::string, std::string> step;
    step.first = a1 + " " + a2 + " " + a3 + " " + a4;
    step.second = b1 + " " + b2 + " " + b3 + " " + b4 + " " + b5 + " " + b6 + " " + b7;
    steps.push_back(step);
}

int main() {
    freopen("factorial.out", "w", stdout);

    std::cout << "3\n";
//    std::cout << "start: s \naccept: ac \nreject: rj \nblank: _ \n";

    next_step(start, zero, one, one, start, zero, right_step, zero, right_step, one, top);

    next_step(start, zero, one, zero, start, zero, right_step, zero, right_step, zero, top);

    next_step(start, zero, one, "|", start, zero, right_step, zero, right_step, "|", top);

    next_step(start, zero, one, blank, start, zero, right_step, zero, right_step, blank, top);

    next_step(start, zero, zero, one, start, zero, right_step, zero, right_step, one, top);

    next_step(start, zero, zero, zero, start, zero, right_step, zero, right_step, zero, top);

    next_step(start, zero, zero, "|", start, zero, right_step, zero, right_step, "|", top);

    next_step(start, zero, zero, blank, start, zero, right_step, zero, right_step, blank, top);

    next_step(start, zero, "|", one, start, zero, right_step, zero, right_step, one, top);

    next_step(start, zero, "|", zero, start, zero, right_step, zero, right_step, zero, top);

    next_step(start, zero, "|", "|", start, zero, right_step, zero, right_step, "|", top);

    next_step(start, zero, "|", blank, start, zero, right_step, zero, right_step, blank, top);

    next_step(start, zero, blank, one, start, zero, right_step, zero, right_step, one, top);

    next_step(start, zero, blank, zero, start, zero, right_step, zero, right_step, zero, top);

    next_step(start, zero, blank, "|", start, zero, right_step, zero, right_step, "|", top);

    next_step(start, zero, blank, blank, start, zero, right_step, zero, right_step, blank, top);

    next_step(start, one, one, one, start, one, right_step, one, right_step, one, top);

    next_step(start, one, one, zero, start, one, right_step, one, right_step, zero, top);

    next_step(start, one, one, "|", start, one, right_step, one, right_step, "|", top);

    next_step(start, one, one, blank, start, one, right_step, one, right_step, blank, top);

    next_step(start, one, zero, one, start, one, right_step, one, right_step, one, top);

    next_step(start, one, zero, zero, start, one, right_step, one, right_step, zero, top);

    next_step(start, one, zero, "|", start, one, right_step, one, right_step, "|", top);

    next_step(start, one, zero, blank, start, one, right_step, one, right_step, blank, top);

    next_step(start, one, "|", one, start, one, right_step, one, right_step, one, top);

    next_step(start, one, "|", zero, start, one, right_step, one, right_step, zero, top);

    next_step(start, one, "|", "|", start, one, right_step, one, right_step, "|", top);

    next_step(start, one, "|", blank, start, one, right_step, one, right_step, blank, top);

    next_step(start, one, blank, one, start, one, right_step, one, right_step, one, top);

    next_step(start, one, blank, zero, start, one, right_step, one, right_step, zero, top);

    next_step(start, one, blank, "|", start, one, right_step, one, right_step, "|", top);

    next_step(start, one, blank, blank, start, one, right_step, one, right_step, blank, top);

    next_step(start, "|", one, one, ns, "|", right_step, one, left_step, one, top);

    next_step(start, "|", one, zero, ns, "|", right_step, one, left_step, zero, top);

    next_step(start, "|", one, "|", ns, "|", right_step, one, left_step, "|", top);

    next_step(start, "|", one, blank, ns, "|", right_step, one, left_step, blank, top);

    next_step(start, "|", zero, one, ns, "|", right_step, zero, left_step, one, top);

    next_step(start, "|", zero, zero, ns, "|", right_step, zero, left_step, zero, top);

    next_step(start, "|", zero, "|", ns, "|", right_step, zero, left_step, "|", top);

    next_step(start, "|", zero, blank, ns, "|", right_step, zero, left_step, blank, top);

    next_step(start, "|", "|", one, ns, "|", right_step, "|", left_step, one, top);

    next_step(start, "|", "|", zero, ns, "|", right_step, "|", left_step, zero, top);

    next_step(start, "|", "|", "|", ns, "|", right_step, "|", left_step, "|", top);

    next_step(start, "|", "|", blank, ns, "|", right_step, "|", left_step, blank, top);

    next_step(start, "|", blank, one, ns, "|", right_step, blank, left_step, one, top);

    next_step(start, "|", blank, zero, ns, "|", right_step, blank, left_step, zero, top);

    next_step(start, "|", blank, "|", ns, "|", right_step, blank, left_step, "|", top);

    next_step(start, "|", blank, blank, ns, "|", right_step, blank, left_step, blank, top);

    next_step(start, blank, one, one, end_arr, blank, left_step, one, left_step, one, top);

    next_step(start, blank, one, zero, end_arr, blank, left_step, one, left_step, zero, top);

    next_step(start, blank, one, "|", end_arr, blank, left_step, one, left_step, "|", top);

    next_step(start, blank, one, blank, end_arr, blank, left_step, one, left_step, blank, top);

    next_step(start, blank, zero, one, end_arr, blank, left_step, zero, left_step, one, top);

    next_step(start, blank, zero, zero, end_arr, blank, left_step, zero, left_step, zero, top);

    next_step(start, blank, zero, "|", end_arr, blank, left_step, zero, left_step, "|", top);

    next_step(start, blank, zero, blank, end_arr, blank, left_step, zero, left_step, blank, top);

    next_step(start, blank, "|", one, end_arr, blank, left_step, "|", left_step, one, top);

    next_step(start, blank, "|", zero, end_arr, blank, left_step, "|", left_step, zero, top);

    next_step(start, blank, "|", "|", end_arr, blank, left_step, "|", left_step, "|", top);

    next_step(start, blank, "|", blank, end_arr, blank, left_step, "|", left_step, blank, top);

    next_step(start, blank, blank, one, end_arr, blank, left_step, blank, left_step, one, top);

    next_step(start, blank, blank, zero, end_arr, blank, left_step, blank, left_step, zero, top);

    next_step(start, blank, blank, "|", end_arr, blank, left_step, blank, left_step, "|", top);

    next_step(start, blank, blank, blank, end_arr, blank, left_step, blank, left_step, blank, top);

    next_step(end_arr, one, zero, one, end_arr, one, top, blank, left_step, one, top);

    next_step(end_arr, one, zero, zero, end_arr, one, top, blank, left_step, zero, top);

    next_step(end_arr, one, zero, "|", end_arr, one, top, blank, left_step, "|", top);

    next_step(end_arr, one, zero, blank, end_arr, one, top, blank, left_step, blank, top);

    next_step(end_arr, zero, zero, one, end_arr, zero, top, blank, left_step, one, top);

    next_step(end_arr, zero, zero, zero, end_arr, zero, top, blank, left_step, zero, top);

    next_step(end_arr, zero, zero, "|", end_arr, zero, top, blank, left_step, "|", top);

    next_step(end_arr, zero, zero, blank, end_arr, zero, top, blank, left_step, blank, top);

    next_step(end_arr, "|", zero, one, end_arr, "|", top, blank, left_step, one, top);

    next_step(end_arr, "|", zero, zero, end_arr, "|", top, blank, left_step, zero, top);

    next_step(end_arr, "|", zero, "|", end_arr, "|", top, blank, left_step, "|", top);

    next_step(end_arr, "|", zero, blank, end_arr, "|", top, blank, left_step, blank, top);

    next_step(end_arr, blank, zero, one, end_arr, blank, top, blank, left_step, one, top);

    next_step(end_arr, blank, zero, zero, end_arr, blank, top, blank, left_step, zero, top);

    next_step(end_arr, blank, zero, "|", end_arr, blank, top, blank, left_step, "|", top);

    next_step(end_arr, blank, zero, blank, end_arr, blank, top, blank, left_step, blank, top);

    next_step(end_arr, one, one, one, end_arr, one, top, blank, left_step, one, top);

    next_step(end_arr, one, one, zero, end_arr, one, top, blank, left_step, zero, top);

    next_step(end_arr, one, one, "|", end_arr, one, top, blank, left_step, "|", top);

    next_step(end_arr, one, one, blank, end_arr, one, top, blank, left_step, blank, top);

    next_step(end_arr, zero, one, one, end_arr, zero, top, blank, left_step, one, top);

    next_step(end_arr, zero, one, zero, end_arr, zero, top, blank, left_step, zero, top);

    next_step(end_arr, zero, one, "|", end_arr, zero, top, blank, left_step, "|", top);

    next_step(end_arr, zero, one, blank, end_arr, zero, top, blank, left_step, blank, top);

    next_step(end_arr, "|", one, one, end_arr, "|", top, blank, left_step, one, top);

    next_step(end_arr, "|", one, zero, end_arr, "|", top, blank, left_step, zero, top);

    next_step(end_arr, "|", one, "|", end_arr, "|", top, blank, left_step, "|", top);

    next_step(end_arr, "|", one, blank, end_arr, "|", top, blank, left_step, blank, top);

    next_step(end_arr, blank, one, one, end_arr, blank, top, blank, left_step, one, top);

    next_step(end_arr, blank, one, zero, end_arr, blank, top, blank, left_step, zero, top);

    next_step(end_arr, blank, one, "|", end_arr, blank, top, blank, left_step, "|", top);

    next_step(end_arr, blank, one, blank, end_arr, blank, top, blank, left_step, blank, top);

    next_step(end_arr, one, blank, one, go_begin, one, top, blank, top, one, top);

    next_step(end_arr, one, blank, zero, go_begin, one, top, blank, top, zero, top);

    next_step(end_arr, one, blank, "|", go_begin, one, top, blank, top, "|", top);

    next_step(end_arr, one, blank, blank, go_begin, one, top, blank, top, blank, top);

    next_step(end_arr, zero, blank, one, go_begin, zero, top, blank, top, one, top);

    next_step(end_arr, zero, blank, zero, go_begin, zero, top, blank, top, zero, top);

    next_step(end_arr, zero, blank, "|", go_begin, zero, top, blank, top, "|", top);

    next_step(end_arr, zero, blank, blank, go_begin, zero, top, blank, top, blank, top);

    next_step(end_arr, "|", blank, one, go_begin, "|", top, blank, top, one, top);

    next_step(end_arr, "|", blank, zero, go_begin, "|", top, blank, top, zero, top);

    next_step(end_arr, "|", blank, "|", go_begin, "|", top, blank, top, "|", top);

    next_step(end_arr, "|", blank, blank, go_begin, "|", top, blank, top, blank, top);

    next_step(end_arr, blank, blank, one, go_begin, blank, top, blank, top, one, top);

    next_step(end_arr, blank, blank, zero, go_begin, blank, top, blank, top, zero, top);

    next_step(end_arr, blank, blank, "|", go_begin, blank, top, blank, top, "|", top);

    next_step(end_arr, blank, blank, blank, go_begin, blank, top, blank, top, blank, top);

    next_step(go_begin, one, one, one, go_begin, one, left_step, one, top, one, top);

    next_step(go_begin, one, one, zero, go_begin, one, left_step, one, top, zero, top);

    next_step(go_begin, one, one, "|", go_begin, one, left_step, one, top, "|", top);

    next_step(go_begin, one, one, blank, go_begin, one, left_step, one, top, blank, top);

    next_step(go_begin, one, zero, one, go_begin, one, left_step, zero, top, one, top);

    next_step(go_begin, one, zero, zero, go_begin, one, left_step, zero, top, zero, top);

    next_step(go_begin, one, zero, "|", go_begin, one, left_step, zero, top, "|", top);

    next_step(go_begin, one, zero, blank, go_begin, one, left_step, zero, top, blank, top);

    next_step(go_begin, one, "|", one, go_begin, one, left_step, "|", top, one, top);

    next_step(go_begin, one, "|", zero, go_begin, one, left_step, "|", top, zero, top);

    next_step(go_begin, one, "|", "|", go_begin, one, left_step, "|", top, "|", top);

    next_step(go_begin, one, "|", blank, go_begin, one, left_step, "|", top, blank, top);

    next_step(go_begin, one, blank, one, go_begin, one, left_step, blank, top, one, top);

    next_step(go_begin, one, blank, zero, go_begin, one, left_step, blank, top, zero, top);

    next_step(go_begin, one, blank, "|", go_begin, one, left_step, blank, top, "|", top);

    next_step(go_begin, one, blank, blank, go_begin, one, left_step, blank, top, blank, top);

    next_step(go_begin, zero, one, one, go_begin, zero, left_step, one, top, one, top);

    next_step(go_begin, zero, one, zero, go_begin, zero, left_step, one, top, zero, top);

    next_step(go_begin, zero, one, "|", go_begin, zero, left_step, one, top, "|", top);

    next_step(go_begin, zero, one, blank, go_begin, zero, left_step, one, top, blank, top);

    next_step(go_begin, zero, zero, one, go_begin, zero, left_step, zero, top, one, top);

    next_step(go_begin, zero, zero, zero, go_begin, zero, left_step, zero, top, zero, top);

    next_step(go_begin, zero, zero, "|", go_begin, zero, left_step, zero, top, "|", top);

    next_step(go_begin, zero, zero, blank, go_begin, zero, left_step, zero, top, blank, top);

    next_step(go_begin, zero, "|", one, go_begin, zero, left_step, "|", top, one, top);

    next_step(go_begin, zero, "|", zero, go_begin, zero, left_step, "|", top, zero, top);

    next_step(go_begin, zero, "|", "|", go_begin, zero, left_step, "|", top, "|", top);

    next_step(go_begin, zero, "|", blank, go_begin, zero, left_step, "|", top, blank, top);

    next_step(go_begin, zero, blank, one, go_begin, zero, left_step, blank, top, one, top);

    next_step(go_begin, zero, blank, zero, go_begin, zero, left_step, blank, top, zero, top);

    next_step(go_begin, zero, blank, "|", go_begin, zero, left_step, blank, top, "|", top);

    next_step(go_begin, zero, blank, blank, go_begin, zero, left_step, blank, top, blank, top);

    next_step(go_begin, "|", one, one, go_begin, "|", left_step, one, top, one, top);

    next_step(go_begin, "|", one, zero, go_begin, "|", left_step, one, top, zero, top);

    next_step(go_begin, "|", one, "|", go_begin, "|", left_step, one, top, "|", top);

    next_step(go_begin, "|", one, blank, go_begin, "|", left_step, one, top, blank, top);

    next_step(go_begin, "|", zero, one, go_begin, "|", left_step, zero, top, one, top);

    next_step(go_begin, "|", zero, zero, go_begin, "|", left_step, zero, top, zero, top);

    next_step(go_begin, "|", zero, "|", go_begin, "|", left_step, zero, top, "|", top);

    next_step(go_begin, "|", zero, blank, go_begin, "|", left_step, zero, top, blank, top);

    next_step(go_begin, "|", "|", one, go_begin, "|", left_step, "|", top, one, top);

    next_step(go_begin, "|", "|", zero, go_begin, "|", left_step, "|", top, zero, top);

    next_step(go_begin, "|", "|", "|", go_begin, "|", left_step, "|", top, "|", top);

    next_step(go_begin, "|", "|", blank, go_begin, "|", left_step, "|", top, blank, top);

    next_step(go_begin, "|", blank, one, go_begin, "|", left_step, blank, top, one, top);

    next_step(go_begin, "|", blank, zero, go_begin, "|", left_step, blank, top, zero, top);

    next_step(go_begin, "|", blank, "|", go_begin, "|", left_step, blank, top, "|", top);

    next_step(go_begin, "|", blank, blank, go_begin, "|", left_step, blank, top, blank, top);

    next_step(go_begin, blank, one, one, accept, blank, right_step, one, top, one, top);

    next_step(go_begin, blank, one, zero, accept, blank, right_step, one, top, zero, top);

    next_step(go_begin, blank, one, "|", accept, blank, right_step, one, top, "|", top);

    next_step(go_begin, blank, one, blank, accept, blank, right_step, one, top, blank, top);

    next_step(go_begin, blank, zero, one, accept, blank, right_step, zero, top, one, top);

    next_step(go_begin, blank, zero, zero, accept, blank, right_step, zero, top, zero, top);

    next_step(go_begin, blank, zero, "|", accept, blank, right_step, zero, top, "|", top);

    next_step(go_begin, blank, zero, blank, accept, blank, right_step, zero, top, blank, top);

    next_step(go_begin, blank, "|", one, accept, blank, right_step, "|", top, one, top);

    next_step(go_begin, blank, "|", zero, accept, blank, right_step, "|", top, zero, top);

    next_step(go_begin, blank, "|", "|", accept, blank, right_step, "|", top, "|", top);

    next_step(go_begin, blank, "|", blank, accept, blank, right_step, "|", top, blank, top);

    next_step(go_begin, blank, blank, one, accept, blank, right_step, blank, top, one, top);

    next_step(go_begin, blank, blank, zero, accept, blank, right_step, blank, top, zero, top);

    next_step(go_begin, blank, blank, "|", accept, blank, right_step, blank, top, "|", top);

    next_step(go_begin, blank, blank, blank, accept, blank, right_step, blank, top, blank, top);

    next_step(ns, zero, one, one, ns, zero, right_step, one, top, zero, right_step);

    next_step(ns, zero, one, zero, ns, zero, right_step, one, top, zero, right_step);

    next_step(ns, zero, one, "|", ns, zero, right_step, one, top, zero, right_step);

    next_step(ns, zero, one, blank, ns, zero, right_step, one, top, zero, right_step);

    next_step(ns, zero, zero, one, ns, zero, right_step, zero, top, zero, right_step);

    next_step(ns, zero, zero, zero, ns, zero, right_step, zero, top, zero, right_step);

    next_step(ns, zero, zero, "|", ns, zero, right_step, zero, top, zero, right_step);

    next_step(ns, zero, zero, blank, ns, zero, right_step, zero, top, zero, right_step);

    next_step(ns, zero, "|", one, ns, zero, right_step, "|", top, zero, right_step);

    next_step(ns, zero, "|", zero, ns, zero, right_step, "|", top, zero, right_step);

    next_step(ns, zero, "|", "|", ns, zero, right_step, "|", top, zero, right_step);

    next_step(ns, zero, "|", blank, ns, zero, right_step, "|", top, zero, right_step);

    next_step(ns, zero, blank, one, ns, zero, right_step, blank, top, zero, right_step);

    next_step(ns, zero, blank, zero, ns, zero, right_step, blank, top, zero, right_step);

    next_step(ns, zero, blank, "|", ns, zero, right_step, blank, top, zero, right_step);

    next_step(ns, zero, blank, blank, ns, zero, right_step, blank, top, zero, right_step);

    next_step(ns, one, one, one, ns, one, right_step, one, top, one, right_step);

    next_step(ns, one, one, zero, ns, one, right_step, one, top, one, right_step);

    next_step(ns, one, one, "|", ns, one, right_step, one, top, one, right_step);

    next_step(ns, one, one, blank, ns, one, right_step, one, top, one, right_step);

    next_step(ns, one, zero, one, ns, one, right_step, zero, top, one, right_step);

    next_step(ns, one, zero, zero, ns, one, right_step, zero, top, one, right_step);

    next_step(ns, one, zero, "|", ns, one, right_step, zero, top, one, right_step);

    next_step(ns, one, zero, blank, ns, one, right_step, zero, top, one, right_step);

    next_step(ns, one, "|", one, ns, one, right_step, "|", top, one, right_step);

    next_step(ns, one, "|", zero, ns, one, right_step, "|", top, one, right_step);

    next_step(ns, one, "|", "|", ns, one, right_step, "|", top, one, right_step);

    next_step(ns, one, "|", blank, ns, one, right_step, "|", top, one, right_step);

    next_step(ns, one, blank, one, ns, one, right_step, blank, top, one, right_step);

    next_step(ns, one, blank, zero, ns, one, right_step, blank, top, one, right_step);

    next_step(ns, one, blank, "|", ns, one, right_step, blank, top, one, right_step);

    next_step(ns, one, blank, blank, ns, one, right_step, blank, top, one, right_step);

    next_step(ns, blank, one, one, to_left_a, blank, left_step, one, top, one, left_step);

    next_step(ns, blank, one, zero, to_left_a, blank, left_step, one, top, zero, left_step);

    next_step(ns, blank, one, "|", to_left_a, blank, left_step, one, top, "|", left_step);

    next_step(ns, blank, one, blank, to_left_a, blank, left_step, one, top, blank, left_step);

    next_step(ns, blank, zero, one, to_left_a, blank, left_step, zero, top, one, left_step);

    next_step(ns, blank, zero, zero, to_left_a, blank, left_step, zero, top, zero, left_step);

    next_step(ns, blank, zero, "|", to_left_a, blank, left_step, zero, top, "|", left_step);

    next_step(ns, blank, zero, blank, to_left_a, blank, left_step, zero, top, blank, left_step);

    next_step(ns, blank, "|", one, to_left_a, blank, left_step, "|", top, one, left_step);

    next_step(ns, blank, "|", zero, to_left_a, blank, left_step, "|", top, zero, left_step);

    next_step(ns, blank, "|", "|", to_left_a, blank, left_step, "|", top, "|", left_step);

    next_step(ns, blank, "|", blank, to_left_a, blank, left_step, "|", top, blank, left_step);

    next_step(ns, blank, blank, one, to_left_a, blank, left_step, blank, top, one, left_step);

    next_step(ns, blank, blank, zero, to_left_a, blank, left_step, blank, top, zero, left_step);

    next_step(ns, blank, blank, "|", to_left_a, blank, left_step, blank, top, "|", left_step);

    next_step(ns, blank, blank, blank, to_left_a, blank, left_step, blank, top, blank, left_step);

    next_step(ns, "|", one, one, to_left_a, "|", left_step, one, top, one, left_step);

    next_step(ns, "|", one, zero, to_left_a, "|", left_step, one, top, zero, left_step);

    next_step(ns, "|", one, "|", to_left_a, "|", left_step, one, top, "|", left_step);

    next_step(ns, "|", one, blank, to_left_a, "|", left_step, one, top, blank, left_step);

    next_step(ns, "|", zero, one, to_left_a, "|", left_step, zero, top, one, left_step);

    next_step(ns, "|", zero, zero, to_left_a, "|", left_step, zero, top, zero, left_step);

    next_step(ns, "|", zero, "|", to_left_a, "|", left_step, zero, top, "|", left_step);

    next_step(ns, "|", zero, blank, to_left_a, "|", left_step, zero, top, blank, left_step);

    next_step(ns, "|", "|", one, to_left_a, "|", left_step, "|", top, one, left_step);

    next_step(ns, "|", "|", zero, to_left_a, "|", left_step, "|", top, zero, left_step);

    next_step(ns, "|", "|", "|", to_left_a, "|", left_step, "|", top, "|", left_step);

    next_step(ns, "|", "|", blank, to_left_a, "|", left_step, "|", top, blank, left_step);

    next_step(ns, "|", blank, one, to_left_a, "|", left_step, blank, top, one, left_step);

    next_step(ns, "|", blank, zero, to_left_a, "|", left_step, blank, top, zero, left_step);

    next_step(ns, "|", blank, "|", to_left_a, "|", left_step, blank, top, "|", left_step);

    next_step(ns, "|", blank, blank, to_left_a, "|", left_step, blank, top, blank, left_step);

    next_step(to_left_a, one, one, one, to_left_a, one, top, one, left_step, one, left_step);

    next_step(to_left_a, one, one, zero, to_left_a, one, top, one, left_step, zero, left_step);

    next_step(to_left_a, one, one, "|", to_left_a, one, top, one, left_step, "|", left_step);

    next_step(to_left_a, one, one, blank, to_left_a, one, top, one, left_step, blank, left_step);

    next_step(to_left_a, one, zero, one, to_left_a, one, top, zero, left_step, one, left_step);

    next_step(to_left_a, one, zero, zero, to_left_a, one, top, zero, left_step, zero, left_step);

    next_step(to_left_a, one, zero, "|", to_left_a, one, top, zero, left_step, "|", left_step);

    next_step(to_left_a, one, zero, blank, to_left_a, one, top, zero, left_step, blank, left_step);

    next_step(to_left_a, zero, one, one, to_left_a, zero, top, one, left_step, one, left_step);

    next_step(to_left_a, zero, one, zero, to_left_a, zero, top, one, left_step, zero, left_step);

    next_step(to_left_a, zero, one, "|", to_left_a, zero, top, one, left_step, "|", left_step);

    next_step(to_left_a, zero, one, blank, to_left_a, zero, top, one, left_step, blank, left_step);

    next_step(to_left_a, zero, zero, one, to_left_a, zero, top, zero, left_step, one, left_step);

    next_step(to_left_a, zero, zero, zero, to_left_a, zero, top, zero, left_step, zero, left_step);

    next_step(to_left_a, zero, zero, "|", to_left_a, zero, top, zero, left_step, "|", left_step);

    next_step(to_left_a, zero, zero, blank, to_left_a, zero, top, zero, left_step, blank, left_step);

    next_step(to_left_a, "|", one, one, to_left_a, "|", top, one, left_step, one, left_step);

    next_step(to_left_a, "|", one, zero, to_left_a, "|", top, one, left_step, zero, left_step);

    next_step(to_left_a, "|", one, "|", to_left_a, "|", top, one, left_step, "|", left_step);

    next_step(to_left_a, "|", one, blank, to_left_a, "|", top, one, left_step, blank, left_step);

    next_step(to_left_a, "|", zero, one, to_left_a, "|", top, zero, left_step, one, left_step);

    next_step(to_left_a, "|", zero, zero, to_left_a, "|", top, zero, left_step, zero, left_step);

    next_step(to_left_a, "|", zero, "|", to_left_a, "|", top, zero, left_step, "|", left_step);

    next_step(to_left_a, "|", zero, blank, to_left_a, "|", top, zero, left_step, blank, left_step);

    next_step(to_left_a, blank, one, one, to_left_a, blank, top, one, left_step, one, left_step);

    next_step(to_left_a, blank, one, zero, to_left_a, blank, top, one, left_step, zero, left_step);

    next_step(to_left_a, blank, one, "|", to_left_a, blank, top, one, left_step, "|", left_step);

    next_step(to_left_a, blank, one, blank, to_left_a, blank, top, one, left_step, blank, left_step);

    next_step(to_left_a, blank, zero, one, to_left_a, blank, top, zero, left_step, one, left_step);

    next_step(to_left_a, blank, zero, zero, to_left_a, blank, top, zero, left_step, zero, left_step);

    next_step(to_left_a, blank, zero, "|", to_left_a, blank, top, zero, left_step, "|", left_step);

    next_step(to_left_a, blank, zero, blank, to_left_a, blank, top, zero, left_step, blank, left_step);

    next_step(to_left_a, one, blank, one, to_left_b, one, top, blank, right_step, one, right_step);

    next_step(to_left_a, one, blank, zero, to_left_b, one, top, blank, right_step, zero, right_step);

    next_step(to_left_a, one, blank, "|", to_left_b, one, top, blank, right_step, "|", right_step);

    next_step(to_left_a, one, blank, blank, to_left_b, one, top, blank, right_step, blank, right_step);

    next_step(to_left_a, zero, blank, one, to_left_b, zero, top, blank, right_step, one, right_step);

    next_step(to_left_a, zero, blank, zero, to_left_b, zero, top, blank, right_step, zero, right_step);

    next_step(to_left_a, zero, blank, "|", to_left_b, zero, top, blank, right_step, "|", right_step);

    next_step(to_left_a, zero, blank, blank, to_left_b, zero, top, blank, right_step, blank, right_step);

    next_step(to_left_a, "|", blank, one, to_left_b, "|", top, blank, right_step, one, right_step);

    next_step(to_left_a, "|", blank, zero, to_left_b, "|", top, blank, right_step, zero, right_step);

    next_step(to_left_a, "|", blank, "|", to_left_b, "|", top, blank, right_step, "|", right_step);

    next_step(to_left_a, "|", blank, blank, to_left_b, "|", top, blank, right_step, blank, right_step);

    next_step(to_left_a, blank, blank, one, to_left_b, blank, top, blank, right_step, one, right_step);

    next_step(to_left_a, blank, blank, zero, to_left_b, blank, top, blank, right_step, zero, right_step);

    next_step(to_left_a, blank, blank, "|", to_left_b, blank, top, blank, right_step, "|", right_step);

    next_step(to_left_a, blank, blank, blank, to_left_b, blank, top, blank, right_step, blank, right_step);

    next_step(to_left_b, one, one, one, to_left_b, one, top, one, left_step, one, left_step);

    next_step(to_left_b, one, one, zero, to_left_b, one, top, one, left_step, zero, left_step);

    next_step(to_left_b, one, zero, one, to_left_b, one, top, zero, left_step, one, left_step);

    next_step(to_left_b, one, zero, zero, to_left_b, one, top, zero, left_step, zero, left_step);

    next_step(to_left_b, one, "|", one, to_left_b, one, top, "|", left_step, one, left_step);

    next_step(to_left_b, one, "|", zero, to_left_b, one, top, "|", left_step, zero, left_step);

    next_step(to_left_b, one, blank, one, to_left_b, one, top, blank, left_step, one, left_step);

    next_step(to_left_b, one, blank, zero, to_left_b, one, top, blank, left_step, zero, left_step);

    next_step(to_left_b, zero, one, one, to_left_b, zero, top, one, left_step, one, left_step);

    next_step(to_left_b, zero, one, zero, to_left_b, zero, top, one, left_step, zero, left_step);

    next_step(to_left_b, zero, zero, one, to_left_b, zero, top, zero, left_step, one, left_step);

    next_step(to_left_b, zero, zero, zero, to_left_b, zero, top, zero, left_step, zero, left_step);

    next_step(to_left_b, zero, "|", one, to_left_b, zero, top, "|", left_step, one, left_step);

    next_step(to_left_b, zero, "|", zero, to_left_b, zero, top, "|", left_step, zero, left_step);

    next_step(to_left_b, zero, blank, one, to_left_b, zero, top, blank, left_step, one, left_step);

    next_step(to_left_b, zero, blank, zero, to_left_b, zero, top, blank, left_step, zero, left_step);

    next_step(to_left_b, "|", one, one, to_left_b, "|", top, one, left_step, one, left_step);

    next_step(to_left_b, "|", one, zero, to_left_b, "|", top, one, left_step, zero, left_step);

    next_step(to_left_b, "|", zero, one, to_left_b, "|", top, zero, left_step, one, left_step);

    next_step(to_left_b, "|", zero, zero, to_left_b, "|", top, zero, left_step, zero, left_step);

    next_step(to_left_b, "|", "|", one, to_left_b, "|", top, "|", left_step, one, left_step);

    next_step(to_left_b, "|", "|", zero, to_left_b, "|", top, "|", left_step, zero, left_step);

    next_step(to_left_b, "|", blank, one, to_left_b, "|", top, blank, left_step, one, left_step);

    next_step(to_left_b, "|", blank, zero, to_left_b, "|", top, blank, left_step, zero, left_step);

    next_step(to_left_b, blank, one, one, to_left_b, blank, top, one, left_step, one, left_step);

    next_step(to_left_b, blank, one, zero, to_left_b, blank, top, one, left_step, zero, left_step);

    next_step(to_left_b, blank, zero, one, to_left_b, blank, top, zero, left_step, one, left_step);

    next_step(to_left_b, blank, zero, zero, to_left_b, blank, top, zero, left_step, zero, left_step);

    next_step(to_left_b, blank, "|", one, to_left_b, blank, top, "|", left_step, one, left_step);

    next_step(to_left_b, blank, "|", zero, to_left_b, blank, top, "|", left_step, zero, left_step);

    next_step(to_left_b, blank, blank, one, to_left_b, blank, top, blank, left_step, one, left_step);

    next_step(to_left_b, blank, blank, zero, to_left_b, blank, top, blank, left_step, zero, left_step);

    next_step(to_left_b, one, blank, blank, comp, one, top, blank, right_step, blank, right_step);

    next_step(to_left_b, zero, blank, blank, comp, zero, top, blank, right_step, blank, right_step);

    next_step(to_left_b, "|", blank, blank, comp, "|", top, blank, right_step, blank, right_step);

    next_step(to_left_b, blank, blank, blank, comp, blank, top, blank, right_step, blank, right_step);

    next_step(to_left_b, one, one, blank, comp, one, top, one, top, blank, top);

    next_step(to_left_b, one, zero, blank, comp, one, top, zero, top, blank, top);

    next_step(to_left_b, zero, one, blank, comp, zero, top, one, top, blank, top);

    next_step(to_left_b, zero, zero, blank, comp, zero, top, zero, top, blank, top);

    next_step(to_left_b, "|", one, blank, comp, "|", top, one, top, blank, top);

    next_step(to_left_b, "|", zero, blank, comp, "|", top, zero, top, blank, top);

    next_step(to_left_b, blank, one, blank, comp, blank, top, one, top, blank, top);

    next_step(to_left_b, blank, zero, blank, comp, blank, top, zero, top, blank, top);

    next_step(comp, one, one, blank, to_right, one, top, one, right_step, blank, right_step);

    next_step(comp, one, one, zero, to_right, one, top, one, right_step, zero, right_step);

    next_step(comp, zero, one, blank, to_right, zero, top, one, right_step, blank, right_step);

    next_step(comp, zero, one, zero, to_right, zero, top, one, right_step, zero, right_step);

    next_step(comp, "|", one, blank, to_right, "|", top, one, right_step, blank, right_step);

    next_step(comp, "|", one, zero, to_right, "|", top, one, right_step, zero, right_step);

    next_step(comp, blank, one, blank, to_right, blank, top, one, right_step, blank, right_step);

    next_step(comp, blank, one, zero, to_right, blank, top, one, right_step, zero, right_step);

    next_step(to_right, one, one, one, to_right, one, top, one, right_step, one, right_step);

    next_step(to_right, one, one, zero, to_right, one, top, one, right_step, zero, right_step);

    next_step(to_right, one, zero, one, to_right, one, top, zero, right_step, one, right_step);

    next_step(to_right, one, zero, zero, to_right, one, top, zero, right_step, zero, right_step);

    next_step(to_right, zero, one, one, to_right, zero, top, one, right_step, one, right_step);

    next_step(to_right, zero, one, zero, to_right, zero, top, one, right_step, zero, right_step);

    next_step(to_right, zero, zero, one, to_right, zero, top, zero, right_step, one, right_step);

    next_step(to_right, zero, zero, zero, to_right, zero, top, zero, right_step, zero, right_step);

    next_step(to_right, "|", one, one, to_right, "|", top, one, right_step, one, right_step);

    next_step(to_right, "|", one, zero, to_right, "|", top, one, right_step, zero, right_step);

    next_step(to_right, "|", zero, one, to_right, "|", top, zero, right_step, one, right_step);

    next_step(to_right, "|", zero, zero, to_right, "|", top, zero, right_step, zero, right_step);

    next_step(to_right, blank, one, one, to_right, blank, top, one, right_step, one, right_step);

    next_step(to_right, blank, one, zero, to_right, blank, top, one, right_step, zero, right_step);

    next_step(to_right, blank, zero, one, to_right, blank, top, zero, right_step, one, right_step);

    next_step(to_right, blank, zero, zero, to_right, blank, top, zero, right_step, zero, right_step);

    next_step(to_right, one, one, blank, to_right, one, top, one, right_step, blank, right_step);

    next_step(to_right, one, zero, blank, to_right, one, top, zero, right_step, blank, right_step);

    next_step(to_right, zero, one, blank, to_right, zero, top, one, right_step, blank, right_step);

    next_step(to_right, zero, zero, blank, to_right, zero, top, zero, right_step, blank, right_step);

    next_step(to_right, "|", one, blank, to_right, "|", top, one, right_step, blank, right_step);

    next_step(to_right, "|", zero, blank, to_right, "|", top, zero, right_step, blank, right_step);

    next_step(to_right, blank, one, blank, to_right, blank, top, one, right_step, blank, right_step);

    next_step(to_right, blank, zero, blank, to_right, blank, top, zero, right_step, blank, right_step);

    next_step(to_right, one, blank, one, to_right, one, top, blank, right_step, one, right_step);

    next_step(to_right, one, blank, zero, to_right, one, top, blank, right_step, zero, right_step);

    next_step(to_right, zero, blank, one, to_right, zero, top, blank, right_step, one, right_step);

    next_step(to_right, zero, blank, zero, to_right, zero, top, blank, right_step, zero, right_step);

    next_step(to_right, "|", blank, one, to_right, "|", top, blank, right_step, one, right_step);

    next_step(to_right, "|", blank, zero, to_right, "|", top, blank, right_step, zero, right_step);

    next_step(to_right, blank, blank, one, to_right, blank, top, blank, right_step, one, right_step);

    next_step(to_right, blank, blank, zero, to_right, blank, top, blank, right_step, zero, right_step);

    next_step(to_right, one, blank, blank, write_back_a, one, top, blank, left_step, blank, left_step);

    next_step(to_right, zero, blank, blank, write_back_a, zero, top, blank, left_step, blank, left_step);

    next_step(to_right, "|", blank, blank, write_back_a, "|", top, blank, left_step, blank, left_step);

    next_step(to_right, blank, blank, blank, write_back_a, blank, top, blank, left_step, blank, left_step);

    next_step(write_back_a, one, zero, one, write_back_a, zero, left_step, blank, left_step, one, top);

    next_step(write_back_a, one, zero, zero, write_back_a, zero, left_step, blank, left_step, zero, top);

    next_step(write_back_a, one, zero, "|", write_back_a, zero, left_step, blank, left_step, "|", top);

    next_step(write_back_a, one, zero, blank, write_back_a, zero, left_step, blank, left_step, blank, top);

    next_step(write_back_a, zero, zero, one, write_back_a, zero, left_step, blank, left_step, one, top);

    next_step(write_back_a, zero, zero, zero, write_back_a, zero, left_step, blank, left_step, zero, top);

    next_step(write_back_a, zero, zero, "|", write_back_a, zero, left_step, blank, left_step, "|", top);

    next_step(write_back_a, zero, zero, blank, write_back_a, zero, left_step, blank, left_step, blank, top);

    next_step(write_back_a, "|", zero, one, write_back_a, zero, left_step, blank, left_step, one, top);

    next_step(write_back_a, "|", zero, zero, write_back_a, zero, left_step, blank, left_step, zero, top);

    next_step(write_back_a, "|", zero, "|", write_back_a, zero, left_step, blank, left_step, "|", top);

    next_step(write_back_a, "|", zero, blank, write_back_a, zero, left_step, blank, left_step, blank, top);

    next_step(write_back_a, blank, zero, one, write_back_a, zero, left_step, blank, left_step, one, top);

    next_step(write_back_a, blank, zero, zero, write_back_a, zero, left_step, blank, left_step, zero, top);

    next_step(write_back_a, blank, zero, "|", write_back_a, zero, left_step, blank, left_step, "|", top);

    next_step(write_back_a, blank, zero, blank, write_back_a, zero, left_step, blank, left_step, blank, top);

    next_step(write_back_a, one, one, one, write_back_a, one, left_step, blank, left_step, one, top);

    next_step(write_back_a, one, one, zero, write_back_a, one, left_step, blank, left_step, zero, top);

    next_step(write_back_a, one, one, "|", write_back_a, one, left_step, blank, left_step, "|", top);

    next_step(write_back_a, one, one, blank, write_back_a, one, left_step, blank, left_step, blank, top);

    next_step(write_back_a, zero, one, one, write_back_a, one, left_step, blank, left_step, one, top);

    next_step(write_back_a, zero, one, zero, write_back_a, one, left_step, blank, left_step, zero, top);

    next_step(write_back_a, zero, one, "|", write_back_a, one, left_step, blank, left_step, "|", top);

    next_step(write_back_a, zero, one, blank, write_back_a, one, left_step, blank, left_step, blank, top);

    next_step(write_back_a, "|", one, one, write_back_a, one, left_step, blank, left_step, one, top);

    next_step(write_back_a, "|", one, zero, write_back_a, one, left_step, blank, left_step, zero, top);

    next_step(write_back_a, "|", one, "|", write_back_a, one, left_step, blank, left_step, "|", top);

    next_step(write_back_a, "|", one, blank, write_back_a, one, left_step, blank, left_step, blank, top);

    next_step(write_back_a, blank, one, one, write_back_a, one, left_step, blank, left_step, one, top);

    next_step(write_back_a, blank, one, zero, write_back_a, one, left_step, blank, left_step, zero, top);

    next_step(write_back_a, blank, one, "|", write_back_a, one, left_step, blank, left_step, "|", top);

    next_step(write_back_a, blank, one, blank, write_back_a, one, left_step, blank, left_step, blank, top);

    next_step(write_back_a, one, blank, one, write_back_b, "|", left_step, blank, top, one, top);

    next_step(write_back_a, one, blank, zero, write_back_b, "|", left_step, blank, top, zero, top);

    next_step(write_back_a, one, blank, "|", write_back_b, "|", left_step, blank, top, "|", top);

    next_step(write_back_a, one, blank, blank, write_back_b, "|", left_step, blank, top, blank, top);

    next_step(write_back_a, zero, blank, one, write_back_b, "|", left_step, blank, top, one, top);

    next_step(write_back_a, zero, blank, zero, write_back_b, "|", left_step, blank, top, zero, top);

    next_step(write_back_a, zero, blank, "|", write_back_b, "|", left_step, blank, top, "|", top);

    next_step(write_back_a, zero, blank, blank, write_back_b, "|", left_step, blank, top, blank, top);

    next_step(write_back_a, "|", blank, one, write_back_b, "|", left_step, blank, top, one, top);

    next_step(write_back_a, "|", blank, zero, write_back_b, "|", left_step, blank, top, zero, top);

    next_step(write_back_a, "|", blank, "|", write_back_b, "|", left_step, blank, top, "|", top);

    next_step(write_back_a, "|", blank, blank, write_back_b, "|", left_step, blank, top, blank, top);

    next_step(write_back_a, blank, blank, one, write_back_b, "|", left_step, blank, top, one, top);

    next_step(write_back_a, blank, blank, zero, write_back_b, "|", left_step, blank, top, zero, top);

    next_step(write_back_a, blank, blank, "|", write_back_b, "|", left_step, blank, top, "|", top);

    next_step(write_back_a, blank, blank, blank, write_back_b, "|", left_step, blank, top, blank, top);

    next_step(write_back_b, one, one, zero, write_back_b, zero, left_step, one, top, blank, left_step);

    next_step(write_back_b, one, zero, zero, write_back_b, zero, left_step, zero, top, blank, left_step);

    next_step(write_back_b, one, "|", zero, write_back_b, zero, left_step, "|", top, blank, left_step);

    next_step(write_back_b, one, blank, zero, write_back_b, zero, left_step, blank, top, blank, left_step);

    next_step(write_back_b, zero, one, zero, write_back_b, zero, left_step, one, top, blank, left_step);

    next_step(write_back_b, zero, zero, zero, write_back_b, zero, left_step, zero, top, blank, left_step);

    next_step(write_back_b, zero, "|", zero, write_back_b, zero, left_step, "|", top, blank, left_step);

    next_step(write_back_b, zero, blank, zero, write_back_b, zero, left_step, blank, top, blank, left_step);

    next_step(write_back_b, "|", one, zero, write_back_b, zero, left_step, one, top, blank, left_step);

    next_step(write_back_b, "|", zero, zero, write_back_b, zero, left_step, zero, top, blank, left_step);

    next_step(write_back_b, "|", "|", zero, write_back_b, zero, left_step, "|", top, blank, left_step);

    next_step(write_back_b, "|", blank, zero, write_back_b, zero, left_step, blank, top, blank, left_step);

    next_step(write_back_b, blank, one, zero, write_back_b, zero, left_step, one, top, blank, left_step);

    next_step(write_back_b, blank, zero, zero, write_back_b, zero, left_step, zero, top, blank, left_step);

    next_step(write_back_b, blank, "|", zero, write_back_b, zero, left_step, "|", top, blank, left_step);

    next_step(write_back_b, blank, blank, zero, write_back_b, zero, left_step, blank, top, blank, left_step);

    next_step(write_back_b, one, one, one, write_back_b, one, left_step, one, top, blank, left_step);

    next_step(write_back_b, one, zero, one, write_back_b, one, left_step, zero, top, blank, left_step);

    next_step(write_back_b, one, "|", one, write_back_b, one, left_step, "|", top, blank, left_step);

    next_step(write_back_b, one, blank, one, write_back_b, one, left_step, blank, top, blank, left_step);

    next_step(write_back_b, zero, one, one, write_back_b, one, left_step, one, top, blank, left_step);

    next_step(write_back_b, zero, zero, one, write_back_b, one, left_step, zero, top, blank, left_step);

    next_step(write_back_b, zero, "|", one, write_back_b, one, left_step, "|", top, blank, left_step);

    next_step(write_back_b, zero, blank, one, write_back_b, one, left_step, blank, top, blank, left_step);

    next_step(write_back_b, "|", one, one, write_back_b, one, left_step, one, top, blank, left_step);

    next_step(write_back_b, "|", zero, one, write_back_b, one, left_step, zero, top, blank, left_step);

    next_step(write_back_b, "|", "|", one, write_back_b, one, left_step, "|", top, blank, left_step);

    next_step(write_back_b, "|", blank, one, write_back_b, one, left_step, blank, top, blank, left_step);

    next_step(write_back_b, blank, one, one, write_back_b, one, left_step, one, top, blank, left_step);

    next_step(write_back_b, blank, zero, one, write_back_b, one, left_step, zero, top, blank, left_step);

    next_step(write_back_b, blank, "|", one, write_back_b, one, left_step, "|", top, blank, left_step);

    next_step(write_back_b, blank, blank, one, write_back_b, one, left_step, blank, top, blank, left_step);

    next_step(write_back_b, one, one, blank, to_left_arr, one, top, one, top, blank, top);

    next_step(write_back_b, one, zero, blank, to_left_arr, one, top, zero, top, blank, top);

    next_step(write_back_b, one, "|", blank, to_left_arr, one, top, "|", top, blank, top);

    next_step(write_back_b, one, blank, blank, to_left_arr, one, top, blank, top, blank, top);

    next_step(write_back_b, zero, one, blank, to_left_arr, zero, top, one, top, blank, top);

    next_step(write_back_b, zero, zero, blank, to_left_arr, zero, top, zero, top, blank, top);

    next_step(write_back_b, zero, "|", blank, to_left_arr, zero, top, "|", top, blank, top);

    next_step(write_back_b, zero, blank, blank, to_left_arr, zero, top, blank, top, blank, top);

    next_step(write_back_b, "|", one, blank, to_left_arr, "|", top, one, top, blank, top);

    next_step(write_back_b, "|", zero, blank, to_left_arr, "|", top, zero, top, blank, top);

    next_step(write_back_b, "|", "|", blank, to_left_arr, "|", top, "|", top, blank, top);

    next_step(write_back_b, "|", blank, blank, to_left_arr, "|", top, blank, top, blank, top);

    next_step(write_back_b, blank, one, blank, to_left_arr, blank, top, one, top, blank, top);

    next_step(write_back_b, blank, zero, blank, to_left_arr, blank, top, zero, top, blank, top);

    next_step(write_back_b, blank, "|", blank, to_left_arr, blank, top, "|", top, blank, top);

    next_step(write_back_b, blank, blank, blank, to_left_arr, blank, top, blank, top, blank, top);

    next_step(to_left_arr, one, one, one, to_left_arr, one, left_step, one, top, one, top);

    next_step(to_left_arr, one, one, zero, to_left_arr, one, left_step, one, top, zero, top);

    next_step(to_left_arr, one, one, "|", to_left_arr, one, left_step, one, top, "|", top);

    next_step(to_left_arr, one, one, blank, to_left_arr, one, left_step, one, top, blank, top);

    next_step(to_left_arr, one, zero, one, to_left_arr, one, left_step, zero, top, one, top);

    next_step(to_left_arr, one, zero, zero, to_left_arr, one, left_step, zero, top, zero, top);

    next_step(to_left_arr, one, zero, "|", to_left_arr, one, left_step, zero, top, "|", top);

    next_step(to_left_arr, one, zero, blank, to_left_arr, one, left_step, zero, top, blank, top);

    next_step(to_left_arr, one, "|", one, to_left_arr, one, left_step, "|", top, one, top);

    next_step(to_left_arr, one, "|", zero, to_left_arr, one, left_step, "|", top, zero, top);

    next_step(to_left_arr, one, "|", "|", to_left_arr, one, left_step, "|", top, "|", top);

    next_step(to_left_arr, one, "|", blank, to_left_arr, one, left_step, "|", top, blank, top);

    next_step(to_left_arr, one, blank, one, to_left_arr, one, left_step, blank, top, one, top);

    next_step(to_left_arr, one, blank, zero, to_left_arr, one, left_step, blank, top, zero, top);

    next_step(to_left_arr, one, blank, "|", to_left_arr, one, left_step, blank, top, "|", top);

    next_step(to_left_arr, one, blank, blank, to_left_arr, one, left_step, blank, top, blank, top);

    next_step(to_left_arr, zero, one, one, to_left_arr, zero, left_step, one, top, one, top);

    next_step(to_left_arr, zero, one, zero, to_left_arr, zero, left_step, one, top, zero, top);

    next_step(to_left_arr, zero, one, "|", to_left_arr, zero, left_step, one, top, "|", top);

    next_step(to_left_arr, zero, one, blank, to_left_arr, zero, left_step, one, top, blank, top);

    next_step(to_left_arr, zero, zero, one, to_left_arr, zero, left_step, zero, top, one, top);

    next_step(to_left_arr, zero, zero, zero, to_left_arr, zero, left_step, zero, top, zero, top);

    next_step(to_left_arr, zero, zero, "|", to_left_arr, zero, left_step, zero, top, "|", top);

    next_step(to_left_arr, zero, zero, blank, to_left_arr, zero, left_step, zero, top, blank, top);

    next_step(to_left_arr, zero, "|", one, to_left_arr, zero, left_step, "|", top, one, top);

    next_step(to_left_arr, zero, "|", zero, to_left_arr, zero, left_step, "|", top, zero, top);

    next_step(to_left_arr, zero, "|", "|", to_left_arr, zero, left_step, "|", top, "|", top);

    next_step(to_left_arr, zero, "|", blank, to_left_arr, zero, left_step, "|", top, blank, top);

    next_step(to_left_arr, zero, blank, one, to_left_arr, zero, left_step, blank, top, one, top);

    next_step(to_left_arr, zero, blank, zero, to_left_arr, zero, left_step, blank, top, zero, top);

    next_step(to_left_arr, zero, blank, "|", to_left_arr, zero, left_step, blank, top, "|", top);

    next_step(to_left_arr, zero, blank, blank, to_left_arr, zero, left_step, blank, top, blank, top);

    next_step(to_left_arr, "|", one, one, to_left_arr, "|", left_step, one, top, one, top);

    next_step(to_left_arr, "|", one, zero, to_left_arr, "|", left_step, one, top, zero, top);

    next_step(to_left_arr, "|", one, "|", to_left_arr, "|", left_step, one, top, "|", top);

    next_step(to_left_arr, "|", one, blank, to_left_arr, "|", left_step, one, top, blank, top);

    next_step(to_left_arr, "|", zero, one, to_left_arr, "|", left_step, zero, top, one, top);

    next_step(to_left_arr, "|", zero, zero, to_left_arr, "|", left_step, zero, top, zero, top);

    next_step(to_left_arr, "|", zero, "|", to_left_arr, "|", left_step, zero, top, "|", top);

    next_step(to_left_arr, "|", zero, blank, to_left_arr, "|", left_step, zero, top, blank, top);

    next_step(to_left_arr, "|", "|", one, to_left_arr, "|", left_step, "|", top, one, top);

    next_step(to_left_arr, "|", "|", zero, to_left_arr, "|", left_step, "|", top, zero, top);

    next_step(to_left_arr, "|", "|", "|", to_left_arr, "|", left_step, "|", top, "|", top);

    next_step(to_left_arr, "|", "|", blank, to_left_arr, "|", left_step, "|", top, blank, top);

    next_step(to_left_arr, "|", blank, one, to_left_arr, "|", left_step, blank, top, one, top);

    next_step(to_left_arr, "|", blank, zero, to_left_arr, "|", left_step, blank, top, zero, top);

    next_step(to_left_arr, "|", blank, "|", to_left_arr, "|", left_step, blank, top, "|", top);

    next_step(to_left_arr, "|", blank, blank, to_left_arr, "|", left_step, blank, top, blank, top);

    next_step(to_left_arr, blank, one, one, start, blank, right_step, one, top, one, top);

    next_step(to_left_arr, blank, one, zero, start, blank, right_step, one, top, zero, top);

    next_step(to_left_arr, blank, one, "|", start, blank, right_step, one, top, "|", top);

    next_step(to_left_arr, blank, one, blank, start, blank, right_step, one, top, blank, top);

    next_step(to_left_arr, blank, zero, one, start, blank, right_step, zero, top, one, top);

    next_step(to_left_arr, blank, zero, zero, start, blank, right_step, zero, top, zero, top);

    next_step(to_left_arr, blank, zero, "|", start, blank, right_step, zero, top, "|", top);

    next_step(to_left_arr, blank, zero, blank, start, blank, right_step, zero, top, blank, top);

    next_step(to_left_arr, blank, "|", one, start, blank, right_step, "|", top, one, top);

    next_step(to_left_arr, blank, "|", zero, start, blank, right_step, "|", top, zero, top);

    next_step(to_left_arr, blank, "|", "|", start, blank, right_step, "|", top, "|", top);

    next_step(to_left_arr, blank, "|", blank, start, blank, right_step, "|", top, blank, top);

    next_step(to_left_arr, blank, blank, one, start, blank, right_step, blank, top, one, top);

    next_step(to_left_arr, blank, blank, zero, start, blank, right_step, blank, top, zero, top);

    next_step(to_left_arr, blank, blank, "|", start, blank, right_step, blank, top, "|", top);

    next_step(to_left_arr, blank, blank, blank, start, blank, right_step, blank, top, blank, top);

    next_step(comp, one, blank, one, clean_ab, one, top, blank, top, one, top);

    next_step(comp, one, zero, one, clean_ab, one, top, zero, top, one, top);

    next_step(comp, zero, blank, one, clean_ab, zero, top, blank, top, one, top);

    next_step(comp, zero, zero, one, clean_ab, zero, top, zero, top, one, top);

    next_step(comp, "|", blank, one, clean_ab, "|", top, blank, top, one, top);

    next_step(comp, "|", zero, one, clean_ab, "|", top, zero, top, one, top);

    next_step(comp, blank, blank, one, clean_ab, blank, top, blank, top, one, top);

    next_step(comp, blank, zero, one, clean_ab, blank, top, zero, top, one, top);

    next_step(clean_ab, one, one, one, clean_ab, one, top, one, right_step, one, right_step);

    next_step(clean_ab, one, one, zero, clean_ab, one, top, one, right_step, zero, right_step);

    next_step(clean_ab, one, zero, one, clean_ab, one, top, zero, right_step, one, right_step);

    next_step(clean_ab, one, zero, zero, clean_ab, one, top, zero, right_step, zero, right_step);

    next_step(clean_ab, zero, one, one, clean_ab, zero, top, one, right_step, one, right_step);

    next_step(clean_ab, zero, one, zero, clean_ab, zero, top, one, right_step, zero, right_step);

    next_step(clean_ab, zero, zero, one, clean_ab, zero, top, zero, right_step, one, right_step);

    next_step(clean_ab, zero, zero, zero, clean_ab, zero, top, zero, right_step, zero, right_step);

    next_step(clean_ab, "|", one, one, clean_ab, "|", top, one, right_step, one, right_step);

    next_step(clean_ab, "|", one, zero, clean_ab, "|", top, one, right_step, zero, right_step);

    next_step(clean_ab, "|", zero, one, clean_ab, "|", top, zero, right_step, one, right_step);

    next_step(clean_ab, "|", zero, zero, clean_ab, "|", top, zero, right_step, zero, right_step);

    next_step(clean_ab, blank, one, one, clean_ab, blank, top, one, right_step, one, right_step);

    next_step(clean_ab, blank, one, zero, clean_ab, blank, top, one, right_step, zero, right_step);

    next_step(clean_ab, blank, zero, one, clean_ab, blank, top, zero, right_step, one, right_step);

    next_step(clean_ab, blank, zero, zero, clean_ab, blank, top, zero, right_step, zero, right_step);

    next_step(clean_ab, one, one, blank, clean_ab, one, top, one, right_step, blank, right_step);

    next_step(clean_ab, one, zero, blank, clean_ab, one, top, zero, right_step, blank, right_step);

    next_step(clean_ab, zero, one, blank, clean_ab, zero, top, one, right_step, blank, right_step);

    next_step(clean_ab, zero, zero, blank, clean_ab, zero, top, zero, right_step, blank, right_step);

    next_step(clean_ab, "|", one, blank, clean_ab, "|", top, one, right_step, blank, right_step);

    next_step(clean_ab, "|", zero, blank, clean_ab, "|", top, zero, right_step, blank, right_step);

    next_step(clean_ab, blank, one, blank, clean_ab, blank, top, one, right_step, blank, right_step);

    next_step(clean_ab, blank, zero, blank, clean_ab, blank, top, zero, right_step, blank, right_step);

    next_step(clean_ab, one, blank, one, clean_ab, one, top, blank, right_step, one, right_step);

    next_step(clean_ab, one, blank, zero, clean_ab, one, top, blank, right_step, zero, right_step);

    next_step(clean_ab, zero, blank, one, clean_ab, zero, top, blank, right_step, one, right_step);

    next_step(clean_ab, zero, blank, zero, clean_ab, zero, top, blank, right_step, zero, right_step);

    next_step(clean_ab, "|", blank, one, clean_ab, "|", top, blank, right_step, one, right_step);

    next_step(clean_ab, "|", blank, zero, clean_ab, "|", top, blank, right_step, zero, right_step);

    next_step(clean_ab, blank, blank, one, clean_ab, blank, top, blank, right_step, one, right_step);

    next_step(clean_ab, blank, blank, zero, clean_ab, blank, top, blank, right_step, zero, right_step);

    next_step(clean_ab, one, blank, blank, clean_ab_back, one, top, blank, left_step, blank, left_step);

    next_step(clean_ab, zero, blank, blank, clean_ab_back, zero, top, blank, left_step, blank, left_step);

    next_step(clean_ab, "|", blank, blank, clean_ab_back, "|", top, blank, left_step, blank, left_step);

    next_step(clean_ab, blank, blank, blank, clean_ab_back, blank, top, blank, left_step, blank, left_step);

    next_step(clean_ab_back, one, one, one, clean_ab_back, one, top, blank, left_step, blank, left_step);

    next_step(clean_ab_back, one, one, zero, clean_ab_back, one, top, blank, left_step, blank, left_step);

    next_step(clean_ab_back, one, zero, one, clean_ab_back, one, top, blank, left_step, blank, left_step);

    next_step(clean_ab_back, one, zero, zero, clean_ab_back, one, top, blank, left_step, blank, left_step);

    next_step(clean_ab_back, zero, one, one, clean_ab_back, zero, top, blank, left_step, blank, left_step);

    next_step(clean_ab_back, zero, one, zero, clean_ab_back, zero, top, blank, left_step, blank, left_step);

    next_step(clean_ab_back, zero, zero, one, clean_ab_back, zero, top, blank, left_step, blank, left_step);

    next_step(clean_ab_back, zero, zero, zero, clean_ab_back, zero, top, blank, left_step, blank, left_step);

    next_step(clean_ab_back, "|", one, one, clean_ab_back, "|", top, blank, left_step, blank, left_step);

    next_step(clean_ab_back, "|", one, zero, clean_ab_back, "|", top, blank, left_step, blank, left_step);

    next_step(clean_ab_back, "|", zero, one, clean_ab_back, "|", top, blank, left_step, blank, left_step);

    next_step(clean_ab_back, "|", zero, zero, clean_ab_back, "|", top, blank, left_step, blank, left_step);

    next_step(clean_ab_back, blank, one, one, clean_ab_back, blank, top, blank, left_step, blank, left_step);

    next_step(clean_ab_back, blank, one, zero, clean_ab_back, blank, top, blank, left_step, blank, left_step);

    next_step(clean_ab_back, blank, zero, one, clean_ab_back, blank, top, blank, left_step, blank, left_step);

    next_step(clean_ab_back, blank, zero, zero, clean_ab_back, blank, top, blank, left_step, blank, left_step);

    next_step(clean_ab_back, one, one, blank, clean_ab_back, one, top, blank, left_step, blank, left_step);

    next_step(clean_ab_back, one, zero, blank, clean_ab_back, one, top, blank, left_step, blank, left_step);

    next_step(clean_ab_back, zero, one, blank, clean_ab_back, zero, top, blank, left_step, blank, left_step);

    next_step(clean_ab_back, zero, zero, blank, clean_ab_back, zero, top, blank, left_step, blank, left_step);

    next_step(clean_ab_back, "|", one, blank, clean_ab_back, "|", top, blank, left_step, blank, left_step);

    next_step(clean_ab_back, "|", zero, blank, clean_ab_back, "|", top, blank, left_step, blank, left_step);

    next_step(clean_ab_back, blank, one, blank, clean_ab_back, blank, top, blank, left_step, blank, left_step);

    next_step(clean_ab_back, blank, zero, blank, clean_ab_back, blank, top, blank, left_step, blank, left_step);

    next_step(clean_ab_back, one, blank, one, clean_ab_back, one, top, blank, left_step, blank, left_step);

    next_step(clean_ab_back, one, blank, zero, clean_ab_back, one, top, blank, left_step, blank, left_step);

    next_step(clean_ab_back, zero, blank, one, clean_ab_back, zero, top, blank, left_step, blank, left_step);

    next_step(clean_ab_back, zero, blank, zero, clean_ab_back, zero, top, blank, left_step, blank, left_step);

    next_step(clean_ab_back, "|", blank, one, clean_ab_back, "|", top, blank, left_step, blank, left_step);

    next_step(clean_ab_back, "|", blank, zero, clean_ab_back, "|", top, blank, left_step, blank, left_step);

    next_step(clean_ab_back, blank, blank, one, clean_ab_back, blank, top, blank, left_step, blank, left_step);

    next_step(clean_ab_back, blank, blank, zero, clean_ab_back, blank, top, blank, left_step, blank, left_step);

    next_step(clean_ab_back, one, blank, blank, to_prev_arr, one, top, blank, top, blank, top);

    next_step(clean_ab_back, zero, blank, blank, to_prev_arr, zero, top, blank, top, blank, top);

    next_step(clean_ab_back, "|", blank, blank, to_prev_arr, "|", top, blank, top, blank, top);

    next_step(clean_ab_back, blank, blank, blank, to_prev_arr, blank, top, blank, top, blank, top);

    next_step(comp, one, one, one, comp, one, top, one, right_step, one, right_step);

    next_step(comp, zero, one, one, comp, zero, top, one, right_step, one, right_step);

    next_step(comp, "|", one, one, comp, "|", top, one, right_step, one, right_step);

    next_step(comp, blank, one, one, comp, blank, top, one, right_step, one, right_step);

    next_step(comp, one, blank, zero, comp, one, top, blank, right_step, zero, right_step);

    next_step(comp, one, zero, zero, comp, one, top, zero, right_step, zero, right_step);

    next_step(comp, zero, blank, zero, comp, zero, top, blank, right_step, zero, right_step);

    next_step(comp, zero, zero, zero, comp, zero, top, zero, right_step, zero, right_step);

    next_step(comp, "|", blank, zero, comp, "|", top, blank, right_step, zero, right_step);

    next_step(comp, "|", zero, zero, comp, "|", top, zero, right_step, zero, right_step);

    next_step(comp, blank, blank, zero, comp, blank, top, blank, right_step, zero, right_step);

    next_step(comp, blank, zero, zero, comp, blank, top, zero, right_step, zero, right_step);

    next_step(comp, one, zero, blank, comp, one, top, zero, right_step, blank, right_step);

    next_step(comp, one, zero, zero, comp, one, top, zero, right_step, zero, right_step);

    next_step(comp, zero, zero, blank, comp, zero, top, zero, right_step, blank, right_step);

    next_step(comp, zero, zero, zero, comp, zero, top, zero, right_step, zero, right_step);

    next_step(comp, "|", zero, blank, comp, "|", top, zero, right_step, blank, right_step);

    next_step(comp, "|", zero, zero, comp, "|", top, zero, right_step, zero, right_step);

    next_step(comp, blank, zero, blank, comp, blank, top, zero, right_step, blank, right_step);

    next_step(comp, blank, zero, zero, comp, blank, top, zero, right_step, zero, right_step);

    next_step(comp, one, blank, blank, clean_ab_back, one, top, blank, left_step, blank, left_step);

    next_step(comp, zero, blank, blank, clean_ab_back, zero, top, blank, left_step, blank, left_step);

    next_step(comp, "|", blank, blank, clean_ab_back, "|", top, blank, left_step, blank, left_step);

    next_step(comp, blank, blank, blank, clean_ab_back, blank, top, blank, left_step, blank, left_step);

    next_step(to_prev_arr, one, one, one, to_prev_arr, one, left_step, one, top, one, top);

    next_step(to_prev_arr, one, one, zero, to_prev_arr, one, left_step, one, top, zero, top);

    next_step(to_prev_arr, one, one, "|", to_prev_arr, one, left_step, one, top, "|", top);

    next_step(to_prev_arr, one, one, blank, to_prev_arr, one, left_step, one, top, blank, top);

    next_step(to_prev_arr, one, zero, one, to_prev_arr, one, left_step, zero, top, one, top);

    next_step(to_prev_arr, one, zero, zero, to_prev_arr, one, left_step, zero, top, zero, top);

    next_step(to_prev_arr, one, zero, "|", to_prev_arr, one, left_step, zero, top, "|", top);

    next_step(to_prev_arr, one, zero, blank, to_prev_arr, one, left_step, zero, top, blank, top);

    next_step(to_prev_arr, one, "|", one, to_prev_arr, one, left_step, "|", top, one, top);

    next_step(to_prev_arr, one, "|", zero, to_prev_arr, one, left_step, "|", top, zero, top);

    next_step(to_prev_arr, one, "|", "|", to_prev_arr, one, left_step, "|", top, "|", top);

    next_step(to_prev_arr, one, "|", blank, to_prev_arr, one, left_step, "|", top, blank, top);

    next_step(to_prev_arr, one, blank, one, to_prev_arr, one, left_step, blank, top, one, top);

    next_step(to_prev_arr, one, blank, zero, to_prev_arr, one, left_step, blank, top, zero, top);

    next_step(to_prev_arr, one, blank, "|", to_prev_arr, one, left_step, blank, top, "|", top);

    next_step(to_prev_arr, one, blank, blank, to_prev_arr, one, left_step, blank, top, blank, top);

    next_step(to_prev_arr, zero, one, one, to_prev_arr, zero, left_step, one, top, one, top);

    next_step(to_prev_arr, zero, one, zero, to_prev_arr, zero, left_step, one, top, zero, top);

    next_step(to_prev_arr, zero, one, "|", to_prev_arr, zero, left_step, one, top, "|", top);

    next_step(to_prev_arr, zero, one, blank, to_prev_arr, zero, left_step, one, top, blank, top);

    next_step(to_prev_arr, zero, zero, one, to_prev_arr, zero, left_step, zero, top, one, top);

    next_step(to_prev_arr, zero, zero, zero, to_prev_arr, zero, left_step, zero, top, zero, top);

    next_step(to_prev_arr, zero, zero, "|", to_prev_arr, zero, left_step, zero, top, "|", top);

    next_step(to_prev_arr, zero, zero, blank, to_prev_arr, zero, left_step, zero, top, blank, top);

    next_step(to_prev_arr, zero, "|", one, to_prev_arr, zero, left_step, "|", top, one, top);

    next_step(to_prev_arr, zero, "|", zero, to_prev_arr, zero, left_step, "|", top, zero, top);

    next_step(to_prev_arr, zero, "|", "|", to_prev_arr, zero, left_step, "|", top, "|", top);

    next_step(to_prev_arr, zero, "|", blank, to_prev_arr, zero, left_step, "|", top, blank, top);

    next_step(to_prev_arr, zero, blank, one, to_prev_arr, zero, left_step, blank, top, one, top);

    next_step(to_prev_arr, zero, blank, zero, to_prev_arr, zero, left_step, blank, top, zero, top);

    next_step(to_prev_arr, zero, blank, "|", to_prev_arr, zero, left_step, blank, top, "|", top);

    next_step(to_prev_arr, zero, blank, blank, to_prev_arr, zero, left_step, blank, top, blank, top);

    next_step(to_prev_arr, blank, one, one, start, blank, right_step, one, top, one, top);

    next_step(to_prev_arr, blank, one, zero, start, blank, right_step, one, top, zero, top);

    next_step(to_prev_arr, blank, one, "|", start, blank, right_step, one, top, "|", top);

    next_step(to_prev_arr, blank, one, blank, start, blank, right_step, one, top, blank, top);

    next_step(to_prev_arr, blank, zero, one, start, blank, right_step, zero, top, one, top);

    next_step(to_prev_arr, blank, zero, zero, start, blank, right_step, zero, top, zero, top);

    next_step(to_prev_arr, blank, zero, "|", start, blank, right_step, zero, top, "|", top);

    next_step(to_prev_arr, blank, zero, blank, start, blank, right_step, zero, top, blank, top);

    next_step(to_prev_arr, blank, "|", one, start, blank, right_step, "|", top, one, top);

    next_step(to_prev_arr, blank, "|", zero, start, blank, right_step, "|", top, zero, top);

    next_step(to_prev_arr, blank, "|", "|", start, blank, right_step, "|", top, "|", top);

    next_step(to_prev_arr, blank, "|", blank, start, blank, right_step, "|", top, blank, top);

    next_step(to_prev_arr, blank, blank, one, start, blank, right_step, blank, top, one, top);

    next_step(to_prev_arr, blank, blank, zero, start, blank, right_step, blank, top, zero, top);

    next_step(to_prev_arr, blank, blank, "|", start, blank, right_step, blank, top, "|", top);

    next_step(to_prev_arr, blank, blank, blank, start, blank, right_step, blank, top, blank, top);

    next_step(to_prev_arr, "|", one, one, start, "|", right_step, one, top, one, top);

    next_step(to_prev_arr, "|", one, zero, start, "|", right_step, one, top, zero, top);

    next_step(to_prev_arr, "|", one, "|", start, "|", right_step, one, top, "|", top);

    next_step(to_prev_arr, "|", one, blank, start, "|", right_step, one, top, blank, top);

    next_step(to_prev_arr, "|", zero, one, start, "|", right_step, zero, top, one, top);

    next_step(to_prev_arr, "|", zero, zero, start, "|", right_step, zero, top, zero, top);

    next_step(to_prev_arr, "|", zero, "|", start, "|", right_step, zero, top, "|", top);

    next_step(to_prev_arr, "|", zero, blank, start, "|", right_step, zero, top, blank, top);

    next_step(to_prev_arr, "|", "|", one, start, "|", right_step, "|", top, one, top);

    next_step(to_prev_arr, "|", "|", zero, start, "|", right_step, "|", top, zero, top);

    next_step(to_prev_arr, "|", "|", "|", start, "|", right_step, "|", top, "|", top);

    next_step(to_prev_arr, "|", "|", blank, start, "|", right_step, "|", top, blank, top);

    next_step(to_prev_arr, "|", blank, one, start, "|", right_step, blank, top, one, top);

    next_step(to_prev_arr, "|", blank, zero, start, "|", right_step, blank, top, zero, top);

    next_step(to_prev_arr, "|", blank, "|", start, "|", right_step, blank, top, "|", top);

    next_step(to_prev_arr, "|", blank, blank, start, "|", right_step, blank, top, blank, top);


    for (int i = 0; i < steps.size(); i++) {
        std::cout << steps[i].first << " -> " << steps[i].second << std::endl;
    }

    return 0;
}