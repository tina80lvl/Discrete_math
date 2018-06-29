#include <iostream>
#include <vector>
#include <cstdio>

#define M 104857601

long long inc(long long x) {
    while (x < 0)
        x += M;
    return x;
}

int main() {
//    freopen("input.txt", "r", stdin);

    int k;
    long long n;
    std::cin >> k >> n;
    n = n - 1;

    std::vector<long long> a(2 * k), c(k + 1), r(k + 1), cn(k + 1);
    for (int i = 0; i < k; i++) {
        std::cin >> a[i];
    }

    c[0] = 1;
    for (int i = 1; i < k + 1; i++) {
        int loc;
        std::cin >> loc;
        c[i] = (M - loc ) % M;
    }

    while (n >= k) {
        for (int i = k; i < 2 * k; i++) {
            a[i] = 0;
            for (int j = 1; j < k + 1; j++) {
                a[i] = (a[i] - c[j] * a[i - j]) % M;
                a[i] = inc(a[i]);
            }
        }

        for (int i = 0; i < k + 1; i++) {
            if (i % 2 == 0) {
                cn[i] = c[i];
            } else {
                cn[i] = (M - c[i] ) % M;
//                cn[i] %= M;
            }
        }

        for (int i = 0; i < 2 * k + 2; i += 2) { //here +1 or +2
            long long cf = 0;
            for (int j = 0; j < i + 1; j++) {
                long long aj, bij;
                if (j > k) {
                    aj = 0;
                }
                else {
                    aj = c[j];
                }

                if (i - j > k) {
                    bij = 0;
                }
                else {
                    bij = cn[i - j];
                }

                cf = (cf + aj * bij + M) % M;
//                cf %= M;
            }
            int ind = i / 2;
            r[ind] = cf;
        }

//        c = repl(c, r, k + 1);
        std::copy(r.begin(), r.begin() + k + 1, c.begin());

        int ind2 = 0;
        for (int i = 0; i < 2 * k; i++) {
            if ((n % 2 == 0 && i % 2 == 0) || (n % 2 == 1 && i % 2 == 1)) {
                a[ind2] = a[i];
                ind2 += 1;
            }
        }
        n /= 2;
    }

    std::cout << a[n] << std::endl;
}