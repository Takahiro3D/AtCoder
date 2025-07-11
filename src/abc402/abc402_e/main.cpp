#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n) - 1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n) - 1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

double solve(int N, int64_t X, const std::vector<int64_t> &S, const std::vector<int64_t> &C,
             const std::vector<int64_t> &P) {
  auto N2 = 1 << N;
  // DP: cost, solved state
  vector dp(X + 1, vector<double>(N2));
  REP(i, X + 1) {
    REP(s, N2) {
      REP(n, N) {
        if ((s >> n) & 1) continue;
        if (C[n] > i) continue;
        auto cost = i - C[n];
        auto solvedState = s | (1 << n);
        auto now = dp[cost][s] * (100 - P[n]) / 100.0 + (dp[cost][solvedState] + S[n]) * P[n] / 100.0;
        dp[i][s] = max(dp[i][s], now);
      }
    }
  }
  return dp[X][0];
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int N;
  int64_t X;
  std::cin >> N;
  std::vector<int64_t> S(N), C(N), P(N);
  std::cin >> X;
  REP(i, N) { std::cin >> S[i] >> C[i] >> P[i]; }
  auto ans = solve(N, X, S, C, P);
  printf("%.10f\n", ans);
  return 0;
}
