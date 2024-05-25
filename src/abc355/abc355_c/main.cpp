#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n) - 1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n) - 1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

int64_t solve(int64_t N, int T, const std::vector<int64_t> &A) {
  vector<vector<bool>> sheet(N, vector<bool>(N, false));
  for (int i = 0; i < T; i++) {
    auto d = div(A[i] - 1, N);
    const auto row = d.quot;
    const auto column = d.rem;

    sheet[row][column] = true;

    bool bingo = true;
    // row check
    for (int c = 0; c < N; c++) {
      if (!sheet[row][c]) {
        bingo = false;
        break;
      }
    }
    if (bingo) {
      return i + 1;
    }

    // column check
    bingo = true;
    for (int r = 0; r < N; r++) {
      if (!sheet[r][column]) {
        bingo = false;
        break;
      }
    }
    if (bingo) {
      return i + 1;
    }

    // diagonal check
    if (row == column) {
      bingo = true;
      for (int n = 0; n < N; n++) {
        if (!sheet[n][n]) {
          bingo = false;
          break;
        }
      }
      if (bingo) {
        return i + 1;
      }
    }

    if ((N - row - 1) == column) {
      bingo = true;
      for (int n = 0; n < N; n++) {
        if (!sheet[n][N - n - 1]) {
          bingo = false;
          break;
        }
      }
      if (bingo) {
        return i + 1;
      }
    }
  }
  return -1;
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int64_t N;
  int T;
  std::cin >> N >> T;
  std::vector<int64_t> A(T);
  REP(i, T) { std::cin >> A[i]; }
  auto ans = solve(N, T, A);
  std::cout << ans << '\n';
  return 0;
}
