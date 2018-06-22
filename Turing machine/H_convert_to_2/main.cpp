#include <iostream>
#include <vector>
#include <cstring>
#include <cstdio>

std::vector<std::pair<std::string, std::string>> steps;
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


void next_step(std::string from, std::string from_st, std::string to, std::string to_st, std::string move) {
    std::pair<std::string, std::string> step;
    step.first = from + " " + from_st;
    step.second = to + " " + to_st + " " + move;
    steps.push_back(step);
}

int main() {
    freopen("convertto2.out", "w", stdout);

    std::cout << "start: s2 \naccept: ac \nreject: rj \nblank: _ \n";


    next_step(s2, zero, s2, blank, right_step);
    next_step(s2, blank, accept, zero, top);
    next_step(s2, one, s1, one, top);
    next_step(s2, two, s1, two, top);

    next_step(s1, one, t4, one, left_step);
    next_step(s1, two, t4, two, left_step);
    next_step(t4, blank, start, four, right_step);

    next_step(start, one, o, one, right_step); // o, = odd number
    next_step(start, two, e, two, right_step); // e, = even number
    next_step(e, zero, e, zero, right_step);
    next_step(e, one, o, one, right_step);
    next_step(e, two, e, two, right_step);
    next_step(o, zero, o, zero, right_step);
    next_step(o, one, e, one, right_step);
    next_step(o, two, o, two, right_step);

    next_step(o, blank, w1, blank, left_step); // w1, = write, 1
    next_step(e, blank, w0, blank, left_step); // w0, = write, 0

    next_step(w0, zero, w0, zero, left_step);
    next_step(w0, one, w0, one, left_step);
    next_step(w0, two, w0, two, left_step);
    next_step(w0, blank, w0, blank, left_step);
    next_step(w1, zero, w1, zero, left_step);
    next_step(w1, one, w1, one, left_step);
    next_step(w1, two, w1, two, left_step);
    next_step(w1, blank, w1, blank, left_step);

    next_step(w0, four, glw0, four, left_step); // glw0, = go, left and write, 0
    next_step(w1, four, glw1, four, left_step); // glw1, = go, left and write, 1

    next_step(glw0, zero, glw0, zero, left_step); // go, on our binary number
    next_step(glw0, one, glw0, one, left_step);
    next_step(glw1, zero, glw1, zero, left_step);
    next_step(glw1, one, glw1, one, left_step);
    next_step(glw0, blank, gtst, zero, right_step); // gtst, = go, to, start ternary
    next_step(glw1, blank, gtst, one, right_step);

    next_step(gtst, zero, gtst, zero, right_step);
    next_step(gtst, one, gtst, one, right_step);
    next_step(gtst, four, sb, four, right_step); // sb, = skip blanks

    next_step(sb, blank, sb, blank, right_step);
    next_step(sb, zero, dtr0, zero, top); // dtr0, = divide, ternary on 2, remainder = 0, struct of, tape, = binary + four, + current ternary
    next_step(sb, one, dtr0, one, top);
    next_step(sb, two, dtr0, two, top);

    next_step(dtr0, zero, w0r0, blank, right_step); // w0r0, = write, 0, remainder 0
    next_step(dtr0, one, w0r1, blank, right_step); // w0r1, = write, 0, remainder 1
    next_step(dtr0, two, w1r0, blank, right_step); // w1r0, = write, 1, remainder 0
    next_step(dtr0, blank, start, blank, right_step);

    next_step(dtrone, zero, w1r1, blank, right_step); // w1r1, = write, 1, remainder 1
    next_step(dtrone, one, w2r0, blank, right_step); // w2r0, = write, 2, remainder 0
    next_step(dtrone, two, w2r1, blank, right_step); // w2r1, = write, 2, remainder 1
    next_step(dtrone, blank, start, blank, right_step);

    next_step(w0r0, zero, w0r0, zero, right_step);
    next_step(w0r0, one, w0r0, one, right_step);
    next_step(w0r0, two, w0r0, two, right_step);
    next_step(w0r1, zero, w0r1, zero, right_step);
    next_step(w0r1, one, w0r1, one, right_step);
    next_step(w0r1, two, w0r1, two, right_step);
    next_step(w1r0, zero, w1r0, zero, right_step);
    next_step(w1r0, one, w1r0, one, right_step);
    next_step(w1r0, two, w1r0, two, right_step);
    next_step(w1r1, zero, w1r1, zero, right_step);
    next_step(w1r1, one, w1r1, one, right_step);
    next_step(w1r1, two, w1r1, two, right_step);
    next_step(w2r0, zero, w2r0, zero, right_step);
    next_step(w2r0, one, w2r0, one, right_step);
    next_step(w2r0, two, w2r0, two, right_step);
    next_step(w2r1, zero, w2r1, zero, right_step);
    next_step(w2r1, one, w2r1, one, right_step);
    next_step(w2r1, two, w2r1, two, right_step);

    next_step(w0r0, blank, w0r0h, blank, right_step); // w0r0h, = write, 0, remainder 0, here
    next_step(w0r1, blank, w0r1h, blank, right_step); // w0r1h, = write, 0, remainder 1, here
    next_step(w1r0, blank, w1r0h, blank, right_step); // w1r0h, = write, 1, remainder 0, here
    next_step(w1r1, blank, w1r1h, blank, right_step); // w1r1h, = write, 1, remainder 1, here
    next_step(w2r0, blank, w2r0h, blank, right_step); // w2r0h, = write, 2, remainder 0, here
    next_step(w2r1, blank, w2r1h, blank, right_step); // w2r1h, = write, 2, remainder 1, here

    next_step(w0r0h, zero, w0r0h, zero, right_step);
    next_step(w0r0h, one, w0r0h, one, right_step);
    next_step(w0r0h, two, w0r0h, two, right_step);
    next_step(w0r1h, zero, w0r1h, zero, right_step);
    next_step(w0r1h, one, w0r1h, one, right_step);
    next_step(w0r1h, two, w0r1h, two, right_step);
    next_step(w1r0h, zero, w1r0h, zero, right_step);
    next_step(w1r0h, one, w1r0h, one, right_step);
    next_step(w1r0h, two, w1r0h, two, right_step);
    next_step(w1r1h, zero, w1r1h, zero, right_step);
    next_step(w1r1h, one, w1r1h, one, right_step);
    next_step(w1r1h, two, w1r1h, two, right_step);
    next_step(w2r0h, zero, w2r0h, zero, right_step);
    next_step(w2r0h, one, w2r0h, one, right_step);
    next_step(w2r0h, two, w2r0h, two, right_step);
    next_step(w2r1h, zero, w2r1h, zero, right_step);
    next_step(w2r1h, one, w2r1h, one, right_step);
    next_step(w2r1h, two, w2r1h, two, right_step);

    next_step(w0r0h, blank, r0rtstart, zero, left_step); // r0rtstart, = remainder 0, return to, start
    next_step(w0r1h, blank, r1rtstart, zero, left_step); // r1rtstart, = remainder 1, return to, start
    next_step(w1r0h, blank, r0rtstart, one, left_step);
    next_step(w1r1h, blank, r1rtstart, one, left_step);
    next_step(w2r0h, blank, r0rtstart, two, left_step);
    next_step(w2r1h, blank, r1rtstart, two, left_step);

    next_step(r0rtstart, zero, r0rtstart, zero, left_step);
    next_step(r0rtstart, one, r0rtstart, one, left_step);
    next_step(r0rtstart, two, r0rtstart, two, left_step);
    next_step(r1rtstart, zero, r1rtstart, zero, left_step);
    next_step(r1rtstart, one, r1rtstart, one, left_step);
    next_step(r1rtstart, two, r1rtstart, two, left_step);

    next_step(r0rtstart, blank, r0rtsf, blank, left_step); // r0rtsf, = remainder 0, return to, start finally (stop on blank)
    next_step(r1rtstart, blank, r1rtsf, blank, left_step);

    next_step(r0rtsf, zero, r0rtsf, zero, left_step);
    next_step(r0rtsf, one, r0rtsf, one, left_step);
    next_step(r0rtsf, two, r0rtsf, two, left_step);
    next_step(r1rtsf, zero, r1rtsf, zero, left_step);
    next_step(r1rtsf, one, r1rtsf, one, left_step);
    next_step(r1rtsf, two, r1rtsf, two, left_step);

    next_step(r0rtsf, blank, dtr0, blank, right_step);
    next_step(r1rtsf, blank, dtrone, blank, right_step);
    next_step(r0rtsf, four, rtcw, four, right_step); // rtcw, = return to, current word, last word istart, finished
    next_step(r1rtsf, four, rtcw, four, right_step);

    next_step(rtcw, blank, rtcw, blank, right_step);
    next_step(rtcw, zero, start, zero, top);
    next_step(rtcw, one, start, one, top);
    next_step(rtcw, two, start, two, top);

    next_step(start, zero, mf, blank, right_step); // mf, = maybe, finished
    next_step(mf, one, start, one, top);
    next_step(mf, two, start, two, top);
    next_step(mf, zero, mf, blank, right_step);
    next_step(mf, blank, f, blank, left_step); // f, = finished

    next_step(f, blank, f, blank, left_step);
    next_step(f, four, tsbw, blank, left_step); // tsbw, = to, start binary word
    next_step(tsbw, zero, tsbw, zero, left_step);
    next_step(tsbw, one, tsbw, one, left_step);
    next_step(tsbw, blank, accept, blank, right_step);

    for (int i = 0; i < steps.size(); i++) {
        std::cout << steps[i].first << " -> " << steps[i].second << std::endl;
    }

    return 0;
}