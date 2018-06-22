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
std::string glw0 = "glw0";
std::string glw1 = "glw1";
std::string w0r0 = "w0r0";
std::string w0r1 = "w0r1";
std::string w1r0 = "w1r0";
std::string w1r1 = "w1r1";
std::string w0r2 = "w0r2";
std::string w2r0 = "w2r0";
std::string w2r1 = "w2r1";
std::string ff = "ff";
std::string ff2 = "ff2";
std::string go = "go";

std::string w0r0h = "w0r0h";
std::string w0r1h = "w0r1h";
std::string w1r0h = "w1r0h";
std::string w1r1h = "w1r1h";
std::string w0r2h = "w0r2h";
std::string w2r0h = "w2r0h";
std::string w2r1h = "w2r1h";

std::string gtst = "gtst";
std::string sb = "sb";
std::string dtrone = "dtrone";
std::string dtr0 = "dtr0";
std::string r0rtstart = "r0rtstart";
std::string r1rtstart = "r1rtstart";
std::string r0rtsf = "r0rtsf";
std::string r1rtsf = "r1rtsf";
std::string rtcw = "rtcw";
std::string tsbw = "tsbw";
std::string setv = "setv";
std::string gob = "gob";
std::string rep = "rep";
std::string go2 = "go2";
std::string go22 = "go22";
std::string setz = "setz";
std::string go2l = "go2l";
std::string setv2 = "setv2";
std::string gob2 = "gob2";
std::string cb = "cb";
std::string cb2 = "cb2";
std::string gobr0 = "gobr0";
std::string gobr1 = "gobr1", star = "star";
std::string rcb = "rcb";
std::string mul = "mul", mul1 = "mul1", mul0 = "mul0", mset0 = "mset0", mgol = "mgol", nextm = "nextm", clr = "clr";
std::string ge = "ge", sum = "sum", sl0 = "sl0", sl1 = "sl1", s0 = "s0", sr = "sr", ost = "ost", ggo = "ggo", ensum = "ensum";
std::string toe = "toe", tol = "tol", tost2 = "tost2", tost = "tost", dub = "dub",
        dub0 = "dub0", dub1 = "dub1", sd0 = "sd0", sd1 = "sd1", dubl = "dubl", dub3 = "dub3";
std::string sub = "sub", sub2 = "sub2", sub3 = "sub3", sub4 = "sub4", sub5 = "sub5", check = "check";
std::string clr2 = "clr2", clr3 = "clr3", clr4 = "clr4";


void next_step(std::string from, std::string from_st, std::string to, std::string to_st, std::string move) {
    std::pair<std::string, std::string> step;
    step.first = from + " " + from_st;
    step.second = to + " " + to_st + " " + move;
    steps.push_back(step);
}

void to_end(std::string state, std::string stop, std::string next) { //go to end while current position isn't equal to stop
    for (int i = 0; i < 10; i++) {
        if (symb[i] != stop) next_step(state, symb[i], state, symb[i], right_step);
    }
    next_step(state, stop, next, stop, top);
}

void to_begin(std::string state, std::string stop, std::string next) { //go to begin while current position isn't equal to stop
    for (int i = 0; i < 10; i++) {
        if (symb[i] != stop) next_step(state, symb[i], state, symb[i], left_step);
    }
    next_step(state, stop, next, stop, top);
}

int main() {
    freopen("factorial.out", "w", stdout);

    std::cout << "start: s \naccept: ac \nreject: rj \nblank: _ \n";

    next_step(start, one, ff, one, left_step);
    next_step(start, zero, ff, zero, left_step);
    next_step(ff, blank, ff2, "*", left_step);
    next_step(ff2, blank, go, one, top);

    to_end(go, blank, setv);
    next_step(setv, blank, gob, "!", top);
    to_begin(gob, blank, rep);

    next_step(rep, blank, rep, blank, right_step); //rep -- replace cur and go to set 0 in ans

    next_step(rep, zero, go2, two, right_step);
    next_step(rep, one, go2, three, right_step);
    next_step(rep, "*", go2, "+", right_step);

    next_step(rep, "!", go22, "!", right_step);

    to_end(go2, blank, setz);  // go2 -- go to end while not blank

    next_step(setz, blank, go2l, zero, left_step); //setz -- set 0

    next_step(go2l, one, go2l, one, left_step);
    next_step(go2l, zero, go2l, zero, left_step);
    next_step(go2l, "*", go2l, "*", left_step);
    next_step(go2l, "+", rep, "*", right_step);
    next_step(go2l, two, rep, zero, right_step);
    next_step(go2l, three, rep, one, right_step);
    next_step(go2l, "!", go2l, "!", left_step);
    next_step(go2l, blank, go2, blank, right_step);

    to_end(go22, blank, setv2);

    next_step(setv2, blank, gob2, "!", top);

    to_begin(gob2, blank, cb2);

    to_end(cb2, "*", cb);

    next_step(cb, "*", cb, "*", right_step);

    next_step(cb, zero, gobr0, two, right_step);
    next_step(cb, one, gobr1, three, right_step);
    next_step(cb, "!", star, "!", right_step);

    next_step(gobr0, zero, gobr0, zero, right_step);
    next_step(gobr0, one, gobr0, one, right_step);
    next_step(gobr0, "!", gobr0, "!", right_step);

    next_step(gobr0, blank, rcb, zero, left_step);

    next_step(gobr1, zero, gobr1, zero, right_step);
    next_step(gobr1, one, gobr1, one, right_step);
    next_step(gobr1, "!", gobr1, "!", right_step);
    next_step(gobr1, blank, rcb, one, left_step);


    next_step(rcb, one, rcb, one, left_step);
    next_step(rcb, zero, rcb, zero, left_step);
    next_step(rcb, two, cb, zero, right_step);
    next_step(rcb, three, cb, one, right_step);
    next_step(rcb, "!", rcb, "!", left_step);

    to_begin(star, "*", mul);
    next_step(mul, "*", mul, "*", left_step);
    next_step(mul, zero, mul0, "x", top);
    next_step(mul, one, mul1, "x", top);
    next_step(mul, blank, "toe", blank, right_step);

    to_end(mul0, blank, mset0);
    next_step(mset0, blank, mgol, zero, left_step);
    to_begin(mgol, "x", nextm);
    next_step(nextm, "x", nextm, "x", left_step);
    next_step(nextm, zero, mul, zero, top);
    next_step(nextm, one, mul, one, top);
    next_step(nextm, blank, mul, blank, top);

    to_end(mul1, "!", "sv3");
    next_step("sv3", "!", "sv4", "!", right_step);
    to_end("sv4", "!", "sv");
    next_step("sv", "!", "ge", "$", right_step);

    to_end(ge, blank, sum);
    next_step(sum, blank, sum, blank, left_step);
    next_step(sum, zero, sl0, two, left_step);
    next_step(sum, one, sl1, three, left_step);
    next_step(sum, "!", ensum, "!", left_step);

    next_step(sl0, zero, sl0, zero, left_step);
    next_step(sl0, one, sl0, one, left_step);
    next_step(sl0, two, s0, zero, left_step);
    next_step(sl0, three, s0, one, left_step);
    next_step(sl0, "$", s0, "!", left_step);
    next_step(sl0, "!", sl0, "!", left_step);

    next_step(s0, zero, sr, two, right_step);
    next_step(s0, one, sr, three, right_step);

    next_step(sr, zero, sr, zero, right_step);
    next_step(sr, one, sr, one, right_step);
    next_step(sr, "!", sr, "!", right_step);
    next_step(sr, two, sum, zero, left_step);
    next_step(sr, three, sum, one, left_step);

    next_step(sl1, zero, sl1, zero, left_step);
    next_step(sl1, one, sl1, one, left_step);
    next_step(sl1, two, s1, zero, left_step);
    next_step(sl1, three, s1, one, left_step);
    next_step(sl1, "$", s1, "!", left_step);
    next_step(sl1, "!", sl1, "!", left_step);

    next_step(s1, zero, sr, three, right_step);

    next_step(s1, one, ost, two, left_step);

    next_step(ost, zero, ggo, one, right_step);
    next_step(ost, one, ost, zero, left_step);

    to_end(ggo, "!", sr);

    next_step(ensum, zero, ensum, zero, left_step);
    next_step(ensum, one, ensum, one, left_step);
    next_step(ensum, two, ensum, zero, left_step);
    next_step(ensum, three, ensum, one, left_step);
    next_step(ensum, "!", mul0, "!", top);

    to_end(toe, blank, tol);
    next_step(tol, blank, tol, blank, left_step);
    next_step(tol, zero, tol, blank, left_step);
    next_step(tol, one, tol, blank, left_step);
    next_step(tol, "!", tost2, "*", left_step);
    to_begin(tost2, blank, tost);
    next_step(tost, "x", tost, blank, right_step);
    next_step(tost, blank, tost, blank, right_step);
    next_step(tost, zero, tost, blank, right_step);
    next_step(tost, one, tost, blank, right_step);
    next_step(tost, "*", dub, blank, right_step);

    next_step(dub, zero, dub0, blank, right_step);
    next_step(dub, blank, dub, blank, right_step);
    next_step(dub, one, dub1, blank, right_step);
    next_step(dub, "!", dub3, blank, right_step);

    to_begin(dubl, blank, dub);
    to_end(dub0, blank, sd0);
    to_end(dub1, blank, sd1);
    next_step(sd0, blank, dubl, zero, left_step);
    next_step(sd1, blank, dubl, one, left_step);

    next_step(dub3, zero, dub3, blank, right_step);
    next_step(dub3, one, sub, one, top);

    to_end(sub, blank, sub2);
    next_step(sub2, blank, sub2, blank, left_step);
    next_step(sub2, zero, sub2, zero, left_step);
    next_step(sub2, one, sub3, zero, right_step);
    next_step(sub3, zero, sub3, one, right_step);
    next_step(sub3, blank, check, blank, left_step);

    next_step(check, zero, check, zero, left_step);
    next_step(check, one, sub4, one, top);
    next_step(check, "*", clr, "*", top);

    to_begin(sub4, blank, sub5);
    next_step(sub5, blank, go, blank, right_step);

    to_end(clr, blank, clr2);
    next_step(clr2, zero, clr2, blank, left_step);
    next_step(clr2, one, clr2, blank, left_step);
    next_step(clr2, blank, clr2, blank, left_step);
    next_step(clr2, "*", clr3, blank, left_step);
    to_begin(clr3, blank, clr4);
    next_step(clr4, blank, accept, blank, right_step);


    for (int i = 0; i < steps.size(); i++) {
        std::cout << steps[i].first << " -> " << steps[i].second << std::endl;
    }

    return 0;
}