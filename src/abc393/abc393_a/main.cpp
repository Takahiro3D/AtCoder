#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n) - 1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n) - 1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

int64_t solve(const string &S1, const string &S2) {
  const auto s1IsSick = S1 == "sick";
  const auto s2IsSick = S2 == "sick";
  if (s1IsSick && !s2IsSick) {
    return 2;
  } else if (!s1IsSick && s2IsSick) {
    return 3;
  } else if (s1IsSick && s2IsSick) {
    return 1;
  } else {
    return 4;
  }
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  // failed to analyze input format
  // TODO: edit here
  string S1;
  string S2;
  cin >> S1 >> S2;
  auto ans = solve(S1, S2);
  std::cout << ans << '\n';
  return 0;
}
