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
    std::cout << std::endl;

    //std::cout << n + m << std::endl;
    std::vector <long long> pq(n + m + 1);
    for (int i = 0; i < n + m + 1; i++) {
        long long res = 0;
        for (int j = 0; j <= i; j++) {
            if (j < n + 1 && i - j < m + 1) {
                res += p[j] * q[i - j] % M;
            }
        }
        res += M;
        res %= M;
        pq[i] = res;
    }
    long long pq_deg = pq.size() - 1;
    while (pq[pq_deg] == 0 && pq_deg > 0) {
        pq_deg--;
    }

    std::cout << pq_deg << std::endl;
    for (int i = 0; i <= pq_deg; i++) {
        printf("%lld ", pq[i]);
    }
    std::cout << std::endl;

    std::vector <long long> q1(1025);
    q1[0] = 1;
    for (int i = 1; i < 1025; i++) {
        long long res = 0;
        for (int j = 0; j < i; j++) {
            if (i - j < m + 1) {
                res += q1[j] * q[i - j] % M;
            }
        }
        res += M;
        res %= M;
        q1[i] = -res;
    }

    for (int i = 0; i < 1000; i++) {
        long long res = 0;
        for (int j = 0; j <= i; j++) {
            if (j < n + 1 && i - j < q1.size()) {
                res += p[j] * q1[i - j] % M;
            }
            res %= M;
        }
        res += M;
        res %= M;
        printf("%lld ", res);
    }
    std::cout << std::endl;
//    int n, m;
//    std::std::cin >> n >> m;;
//    std::vector <long long> p, q;
//
//    for (int i = 0; i < n + 1; i++) {
//        long long a;
//        scanf("%lld", &a);
//        p.push_back(a);
//    }
//    for (int i = 0; i < m + 1; i++) {
//        long long a;
//        scanf("%lld", &a);
//        q.push_back(a);
//    }
//    std::std::cout << std::max(n, m) << std::std::endl;
//
//    for (int i = 0; i < std::max(n, m) + 1; i++) {
//        if (i > n) {
//            printf("%lld ", q[i]);
//            continue;
//        }
//        if (i > m) {
//            printf("%lld ", p[i]);
//            continue;
//        }
//        printf("%lld ", (p[i] + q[i]) % M);
//    }
//    std::std::cout << std::std::endl << n + m << std::std::endl;
//    std::vector <long long> pq (n + m + 1);
//    for (int i = 0; i < n + 1; i++) {
//        for (int j = 0; j < m + 1; j++) {
//            pq[i + j] += p[i] * q[j] % M;
//        }
//    }
//    for (int i = 0; i < n + m + 1; i++) {
//        printf("%lld ", pq[i]);
//    }
//    std::std::cout << std::std::endl;
//
//    std::vector <long long> rev (1001);
////    rev[0] = p[0];
////    for (int i = 0; i < 1000; i++) {
////        for (int j = 0; j < i; j++) {
////            rev[i] = (rev[i] - q[j] * rev[i - j] % M) % M;
//////            rev[i] -= q[j] * rev[i - j];
//////            rev[i] %= M;
////            while (rev[i] < 0) {
////                rev[i] += M;
////            }
////        }
////    }
//
//    std::vector <long long> pdq (1001);
////    for (int i = 1; i < 1000; i++) {
////        long long loc = 0;
////        for (int j = 0; j < i; j++) {
////            loc = (loc - rev[j] * p[i - j] % M) % M;
////        }
////        while (loc < 0) {
////            loc += M;
////        }
////        rev[i] = loc;
////    }
//    for (int i = 1; i < 1000; i++) {
//        long long r = 0;
//
//        for (int j = 0; j < i; j++) {
//            r -= (rev[j] * q[i - j]) % M;
//            r %= M;
//
//            while (r < 0) {
//                r += M;
//            }
//        }
//
//        rev[i] = r;
//    }
//    for (int i = 0; i < n + 1; i++) {
//        for (int j = 0; j < m + 1; j++) {
//            pdq[i + j] += rev[i] * q[j] % M;
//        }
//    }
//
//    for (int i = 0; i < 1000; i++) {
//        printf("%lld ", rev[i]);
//    }
//    std::std::cout << std::std::endl;

    return 0;
}