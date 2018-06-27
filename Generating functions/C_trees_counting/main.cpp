#include <iostream>
#include <vector>
#include <cstdio>

#define M 1000000007

int main() {
//    freopen("input.txt", "r", stdin);

    int k, m;
    std::cin >> k >> m;

    std::vector<int> c(k);
    for (int i = 0; i < k; i++) {
        int a;
        std::cin >> a;
        c[i] = a;
    }
    // n!/k!(n - k)!
    std::vector<long long> ans(m + 1);
    ans[0] = ans[1] = 1;
    for (int i = 2; i < m + 1; i++) {
        for (int j = 0; j < i; j++) {
            ans[i] = (ans[i] + ans[j] * ans[i - j - 1] % M) % M;
        }
    }
    for (int i = 1; i < m + 1; i++) {
        std::cout << ans[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}