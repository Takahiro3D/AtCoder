#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

using Pi = pair<int64_t, int64_t>;
using Vp = vector<Pi>;

int64_t pow2(int64_t e) { return (int64_t)1 << e; }

Vp solve(int64_t L, int64_t R) {
  Vp ans_l;
  Vp ans_r;
  int64_t i = 0;
  while (L < R) {
    if ((L >> i) & 1) {
      auto a = pow2(i);
      ans_l.emplace_back(L, L + a);
      L += a;
    }
    if ((R >> i) & 1) {
      auto a = pow2(i);
      ans_r.emplace_back(R - a, R);
      R -= a;
    }
    i += 1;
  }
  reverse(ans_r.begin(), ans_r.end());
  ans_l.insert(ans_l.end(), ans_r.begin(), ans_r.end());
  return ans_l;
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int64_t L, R;
  std::cin >> L >> R;
  Vp ans = solve(L, R);
  std::cout << ans.size() << '\n';
  for (auto p : ans) {
    std::cout << p.first << ' ' << p.second << '\n';
  }
  return 0;
}