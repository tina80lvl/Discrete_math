#include <iostream>
#include <vector>
#include <cstdio>

#define M 998244353

int main() {
//    freopen("input.txt", "r", stdin);
    int n, m;
    std::cin >> n >> m;;
    std::vector <long long> p, q;

    for (int i = 0; i < n + 1; i++) {
        long long a;
        scanf("%lld", &a);
        p.push_back(a);
    }
    for (int i = 0; i < m + 1; i++) {
        long long a;
        scanf("%lld", &a);
        q.push_back(a);
    }
    std::cout << std::max(n, m) << std::endl;

    for (int i = 0; i < std::max(n, m) + 1; i++) {
        if (i > n) {
            printf("%lld ", q[i]);
            continue;
        }
        if (i > m) {
            printf("%lld ", p[i]);
            continue;
        }
        printf("%lld ", (p[i] + q[i]) % M);
    }
    std::cout << std::endl << n + m << std::endl;
    std::vector <long long> pq (n + m + 1);
    for (int i = 0; i < n + 1; i++) {
        for (int j = 0; j < m + 1; j++) {
            pq[i + j] += p[i] * q[j] % M;
        }
    }
    for (int i = 0; i < n + m + 1; i++) {
        printf("%lld ", pq[i]);
    }
    std::cout << std::endl;

    std::vector <long long> rev (1001);
    rev[0] = p[0];
    for (int i = 0; i < 1000; i++) {
        for (int j = 0; j < i; j++) {
            rev[i] = (rev[i] - q[j] * rev[i - j] % M) % M;
//            rev[i] -= q[j] * rev[i - j];
//            rev[i] %= M;
            while (rev[i] < 0) {
                rev[i] += M;
            }
        }
    }
    std::vector <long long> pdq (1001);
    for (int i = 1; i < 1000; i++) {
        long long loc = 0;
        for (int j = 0; j < i; j++) {
            loc = (loc - rev[j] * p[i - j] % M) % M;
        }
        while (loc < 0) {
            loc += M;
        }
        rev[i] = loc;
    }

    for (int i = 0; i < 1000; i++) {
        printf("%lld ", rev[i]);
    }
    std::cout << std::endl;

    return 0;
}