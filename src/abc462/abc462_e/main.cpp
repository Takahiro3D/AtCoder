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

  // calc even moving cost
  auto calc = [](int64_t a, int64_t b, int64_t x, int64_t y) {
    // stair moving
    auto p_max = max(x, y);
    auto p_min = min(x, y);
    auto cost_h = max(a, b);
    auto cost_l = min(a, b);

    // stair + snake move
    auto cost_snake = p_max * 2 * cost_l;

    // stair + straight move
    auto rem = p_max - p_min;
    auto d = div(rem, 2U);
    // start
    auto cost_str = p_min * 2 * cost_l + d.quot * (cost_l + cost_h);

    return min(cost_snake, cost_str);
  };

  if ((X + Y) % 2 == 1) {
    auto cost_a = calc(A, B, X - 1, Y) + A;
    auto cost_b = calc(B, A, X, Y - 1) + B;
    auto ans = min(cost_a, cost_b);
    cout << ans << endl;
  } else {
    cout << calc(A, B, X, Y) << endl;
  }
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int T;
  cin >> T;
  REP(_, T) { solve(); }

  return 0;
}
