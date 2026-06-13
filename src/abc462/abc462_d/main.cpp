#include <bits/stdc++.h>

#include <atcoder/all>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n) - 1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n) - 1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;
using namespace atcoder;

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int N, D;
  cin >> N >> D;

  vector<int> A(N);
  REP(i, N) { cin >> A[i]; }

  // count of submatrices with sum <= K
  auto f = [&](int k) -> int64_t {
    if (k == -1) return 0;
    int64_t res = 0;
    REP(r1, H) {
      // sum of each column between r1 and r2
      vector<int> a(W);
      for (int r2 = r1; r2 < H; r2++) {
        REP(c, W) { a[c] += S[r2][c] - '0'; }

        // Two pointers: [c1, c2]
        int c1 = 0;
        int sum = 0;
        REP(c2, W) {
          sum += a[c2];
          while (sum > k) {
            sum -= a[c1];
            c1++;
          }
          res += c2 - c1 + 1;
        }
      }
    }
    return res;
  };
  // just K numbers: K -(K-1)
  int64_t ans = f(K) - f(K - 1);
  cout << ans << endl;
  return 0;
}
