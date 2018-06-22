#include <iostream>
#include <string>

using namespace std;

string escape(string s) {
    string r = "";
    for (char c: s) {
        switch (c) {
        case '"':
            r += "\\\"";
            break;
        case '\\':
            r += "\\\\";
            break;
        case '\n':
            r += "\\n";
            break;
        default:
            r += c;
        }
    }
    return r;
}

string get_other() {
	return "#include <iostream>\n#include <string>\n\nusing namespace std;\n\nstring escape(string s) {\n    string r = \"\";\n    for (char c : s) {\n        switch (c) {\n        case '\"':\n            r += \"\\\\\\\"\";\n            break;\n        case '\\\\':\n            r += \"\\\\\\\\\";\n            break;\n        case '\\n':\n            r += \"\\\\n\";\n            break;\n        default:\n            r += c;\n        }\n    }\n    return r;\n}\n\nstring get_other() {\n	return \"$\";\n}\n\nstring get_src() {\n	string t = get_other();\n	int p = t.find(\"$\");\n	t = t.substr(0,p) + escape(t) + t.substr(p + 1);\n	return t;\n}\n\n\nint main() {\n	string s, r = \"\";\n	while (getline(cin, s)) {\n		if (s == \"===\") break;\n		r += s + \"\\n\";\n	}\n	cout << escape(r) << endl;\n\n	return 0;\n}\n";
}

string get_src() {
	string t = get_other();
	int p = t.find("$");
	t = t.substr(0,p) + escape(t) + t.substr(p + 1);
	return t;
}


int main() {
	string s, r = "";
	while (getline(cin, s)) {
		if (s == "===") break;
		r += s + "\n";
	}
	// cout << escape(r) << endl; //этот вывод вставляется в возвращаемое значение функции get_other()
	cout << get_other() << endl;

	return 0;
}