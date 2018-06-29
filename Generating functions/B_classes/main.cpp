#include <iostream>
#include <vector>
#include <numeric>
#include <cstdio>

#define M 1000000007

int gcd(int a, int b) {
//    if (b == 1)
//        return gcd(b, a % b);
//    return a;
    return b ? gcd(b, a % b) : a;
}

std::string s;
int it = 0;
std::vector<long long> vec_from_str() {
    std::vector<long long> a, a1, loc(7);
    if (s[it] == 'B') {
        loc[1] = 1;
        it++;
    } else {
        if (s[it] == 'L') {
            it += 2;
            a = vec_from_str();
            loc[0] = 1;
            it++;
            for (int i = 1; i < 7; i++) {
                loc[i] = 0;
                for (int j = 1; j < i + 1; j++) {
                    loc[i] += a[j] * loc[i - j];
                }
            }
        } else {
            if (s[it] == 'S') {
                it += 2;
                a = vec_from_str();
                it++;
                long long m[7][7];

                m[0][0] = 1;
                for (int i = 1; i < 7; i++) {
                    m[0][i] = 1;
                    m[i][0] = 0;
                }

                loc[0] = 1;
                for (int n = 1; n < 7; n++) {
                    for (int k = 1; k < 7; k++) {
                        long long sum = 0;
                        for (int i = 0; i < n / k + 1; i++) {
                            long long x1 = a[k] + i - 1, x2 = i;
                            long long loc2 = 1;
                            if (x1 < 0) x1 = 0;
                            for (int h = x1 - x2 + 1; h < x1 + 1; h++) {
                                loc2 *= h;
                            }
                            for (int h = 2; h < x2 + 1; h++) {
                                loc2 /= h;
                            }
                            sum += loc2 * m[n - i * k][k - 1];
                        }
                        m[n][k] = sum;
                    }
                    loc[n] = m[n][n];
                }
            } else {
                if (s[it] == 'C') {
                    it += 2;
                    a = vec_from_str();
                    it++;

                    long long b[7][7];
                    for (int n = 0; n < 7; n++) {
                        b[n][1] = a[n];
                        b[n][0] = b[0][n] = 0;
                    }

                    for (int n = 1; n < 7; n++) {
                        for (int k = 2; k < 7; k++) {
                            long long sum = 0;
                            for (int i = 1; i < n; i++) {
                                sum += a[i] * b[n - i][k - 1];
                            }
                            b[n][k] = sum;
                        }
                    }
                    loc[0] = 0;
                    for (int n = 1; n < 7; n++) {
                        long long sum = 0;
                        for (int s = 1; s < n + 1; s++) {
                            long long up = 0;
                            for (int i = 0; i < s; i++) {
                                int g = gcd(s, i);
                                long long sti;
                                if (n % (s / g) != 0) {
                                    sti = 0;
                                } else {
                                    int ind = (n * g) / s;
                                    sti = b[ind][g];
                                }
                                up += sti;
                            }
                            sum += up / s;
                        }
                        loc[n] = sum;
                    }
                } else {
                    if (s[it] == 'P') {
                        it += 2;
                        a = vec_from_str();
                        it++;
                        a1 = vec_from_str();
                        it++;
                        for (int i = 0; i < 7; i++) {
                            long long sum = 0;
                            for (int j = 0; j < i + 1; j++) {
                                sum += a[j] * a1[i - j];
                            }
                            loc[i] = sum;
                        }
                    }
                }
            }
        }
    }
    return loc;
}

std::vector<long long> ans;
int main() {
//    freopen("input.txt", "r", stdin);

    std::getline(std::cin, s);
    ans = vec_from_str();
    for (int i = 0; i < 7; i++) {
        std::cout << ans[i] << " ";
    }

    return 0;
}