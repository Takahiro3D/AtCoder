#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

int64_t solve(int N, std::string S, const std::vector<int64_t>& C) {
  // inverse char of string for odd element
  // 010101... -> 000000..., 101010... -> 111111...
  REP(i, N) {
    if (i % 2 == 1) {
      S[i] ^= '1' ^ '0';
    }
  }

  int64_t ans = INT64_MAX;
  REP(bi, 2) {
    vector<int64_t> l(N + 1), r(N + 1);

    // Left side cost
    REP(i, N) {
      // cumulative sum
      l[i + 1] = l[i];
      if (S[i] == '1') {
        // need to inverse
        l[i + 1] += C[i];
      }
    }

    // Right side cost
    REP_R(i, N) {
      // commulative sum
      r[i] = r[i + 1];
      if (S[i] == '0') {
        // need to inverse
        r[i] += C[i];
      }
    }

    // set min sum cost
    REP(i, N) { ans = min(ans, l[i] + r[i]); }

    // inverse char of string
    REP(i, N) { S[i] ^= '0' ^ '1'; }
  }
  return ans;
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int N;
  std::string S;
  std::cin >> N;
  std::vector<int64_t> C(N);
  std::cin >> S;
  REP(i, N) { std::cin >> C[i]; }
  auto ans = solve(N, S, C);
  std::cout << ans << '\n';
  return 0;
}