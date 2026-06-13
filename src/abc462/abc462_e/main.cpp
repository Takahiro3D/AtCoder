#include <bits/stdc++.h>

#include <atcoder/all>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n) - 1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n) - 1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;
using namespace atcoder;

void solve() {
  int64_t A, B, X, Y;
  cin >> A >> B >> X >> Y;
  // calc dist
  X = abs(X);
  Y = abs(Y);

  int64_t ans = 0;
  // stair moving
  auto n = min(X, Y);
  ans += n * A + n * B;

  auto remX = X - n;
  auto remY = Y - n;
  auto shallSnake = (A > 2 * B) || (B > 2 * A);
  if (remX > remY) {
    auto d = div(remX, 2U);
    if (shallSnake) {
      // snake move
      ans += d.quot * (2 * A + 2 * B);

    } else {
      // straight move
      ans += d.quot * (A + B);
    }
    if (A > B) {
      // started X move
      ans += d.rem * A;
    } else {
      // started Y move
      ans += d.rem * B;
    }
  } else {
    auto d = div(remY, 2U);
    if (shallSnake) {
      // snake move
      ans += d.quot * (2 * A + 2 * B);

    } else {
      // straight move
      ans += d.quot * (A + B);
    }
    if (A > B) {
      // started X move
      ans += d.rem * B;
    } else {
      // started Y move
      ans += d.rem * A;
    }
  }

  cout << ans << endl;
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int T;
  cin >> T;
  REP(_, T) { solve(); }

  return 0;
}
