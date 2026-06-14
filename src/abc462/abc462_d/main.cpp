#include <bits/stdc++.h>

#include <atcoder/all>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n) - 1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n) - 1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;
using namespace atcoder;

int MAX = 1000001;

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int N, D;
  cin >> N >> D;

  vector<int> di(MAX);
  int max_T = 0;
  REP(i, N) {
    int S, T;
    cin >> S >> T;
    if (T - S >= D) {
      di[S]++;
      di[T - D + 1]--;
    }
    max_T = max(max_T, T);
  }

  int64_t ans = 0;
  int64_t cnt = 0;
  REP(i, MAX) {
    cnt += di[i];
    // nC2
    ans += (cnt * (cnt - 1L) / 2L);
  }
  cout << ans << endl;
  return 0;
}
