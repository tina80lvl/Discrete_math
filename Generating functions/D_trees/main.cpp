#include <iostream>
#include <vector>

#define M 998244353

std::vector<long long> a, b, br;

long long get_element(int v, int i) {
    switch (v) {
        case 1: {
            if (i >= a.size())
                return 0;
            return a[i];
            break;
        }
        case 2: {
            if (i >= b.size())
                return 0;
            return b[i];
            break;
        }
        default: {
            if (i >= br.size())
                return 0;
            return br[i];
            break;}
    }
}

long long inc(long long x) {
    while (x < 0)
        x += M;
    return x;
}

int main() {
//    freopen("input.txt", "r", stdin);

    int k, n;
    std::cin >> k >> n;


    std::vector<std::vector<long long>> c(k + 1, std::vector<long long>(k + 1));
    for (int i = 0; i < k + 1; i++) {
        c[i][0] = c[i][i] = 1;
        for (int j = 1; j < i; j++) {
            c[i][j] = (c[i - 1][j - 1] + c[i - 1][j]) % M;
            c[i][j] = inc(c[i][j]);
        }
    }

    int ae, be;
    if ((k - 1) % 2 != 0) {
        ae = (k - 1) / 2 + 1;
    } else {
        ae = (k - 1) / 2;
    }
    if (k % 2 != 0) {
        be = k / 2 + 1;
    } else {
        be = k / 2;
    }


    for (int i = 0; i < ae; i++) {
        if (i % 2 == 0) {
            a.push_back(c[k - 1 - i - 1][i]);
        } else {
            a.push_back(-c[k - 1 - i - 1][i]);
        }
    }
    for (int i = 0; i < be; i++) {
        if (i % 2 == 0) {
            b.push_back(c[k - i - 1][i]);
        } else {
            b.push_back(-c[k - i - 1][i]);
        }
    }

    br.push_back(1 / get_element(2, 0));

    for (int i = 1; i < n + 1; i++) {
        long long cf = 0;
        for (int j = 1; j < i + 1; j++) {
            cf = (cf + get_element(2, j) * get_element(3, i - j)) % M;
            cf = inc(cf);
        }
        br.push_back((-cf / get_element(2, 0) + M) % M);
        br[br.size() - 1] = inc(br[br.size() - 1]);
    }

    for (int i = 0; i < n; i++) {
        long long cf = 0;
        for (int j = 0; j < i + 1; j++) {
            cf = (cf + get_element(1, j) * get_element(3, i - j)) % M;
            cf = inc(cf);
        }
        std::cout << cf << std::endl;
    }
}