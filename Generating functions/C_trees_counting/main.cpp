#include <iostream>
#include <vector>
#include <cstdio>

#define M 1000000007

int main() {
//    freopen("input.txt", "r", stdin);

    int k, m;
    std::cin >> k >> m;

    std::vector<long long> c(m + 1);
    for (int i = 0; i < k; i++) {
        int a;
        std::cin >> a;
        c[a] = 1;
    }
    // n!/k!(n - k)!

    std::vector<long long> ans(m + 1), pref(m + 1);
    ans[0] = pref[0] = 1;
//    for (int i = 2; i < m + 1; i++) {
//        for (int j = 0; j < i; j++) {
//            ans[i] = (ans[i] + ans[j] * ans[i - j - 1] % M) % M;
//        }
//    }
    for (int i = 1; i < m + 1; i++) {
        for (int j = 1; j < i + 1; j++) {
            if (c[j] == 0)
                continue;
            ans[i] += pref[i - j] % M;
            ans[i] %= M;
        }
        for (int j = 0; j < i + 1; j++)
            pref[i] = (pref[i] + ans[j] * ans[i - j]) % M;
    }

    for (int i = 1; i < m + 1; i++) {
        std::cout << ans[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}