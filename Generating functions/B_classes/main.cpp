#include <iostream>
#include <vector>
#include <cstdio>

#define M 1000000007
int it = 0;

int gcd(int a, int b) {
    if (b == 1)
        return gcd(b, a % b);
    return a;
}

long long con(long long n, long long k) {
    long long loc = 1;
    for (int i = n - k + 1; i < n + 1; i++) {
        loc *= i;
    }
    for (int i = 2; i < k + 1; i++) {
        loc /= i;
    }

    return loc;
}

std::vector<long long> vec_from_str(std::string s) {
    std::vector<long long> a, a1;
    std::vector<long long> loc(7);
    if (s[it] == 'B') {
        loc[1] = 1;
        it++;
    } else {
        if (s[it] == 'L') {
            it += 2;
            a = vec_from_str(s);
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
                a = vec_from_str(s);
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
                            sum += con(std::max(a[k] + i - 1, (long long) 0), i) * m[n - i * k][k - 1];
                        }
                        m[n][k] = sum;
                    }
                    loc[n] = m[n][n];
                }
            } else {
                if (s[it] == 'C') {
                    it += 2;
                    a = vec_from_str(s);
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
                                    sti = b[(n * g) / s][g];
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
                        a = vec_from_str(s);
                        it++;
                        a1 = vec_from_str(s);
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
void pr() {
    for (int i = 0; i < 7; i++) {
        std::cout << ans[i] << " ";
    }
}

int main() {
//    freopen("input.txt", "r", stdin);

    std::string s;
    std::getline(std::cin, s);
    ans = vec_from_str(s);
    pr();

    return 0;
}