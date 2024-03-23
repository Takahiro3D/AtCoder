#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

int64_t solve(std::string S) {
  int ans = 0;
  bool isDuplicated = false;
  const int size = S.size();
  unordered_map<char, int> um;
  for (int i = 0; i < size; i++) {
    um[S[i]]++;
  }

  int len = S.size();
  for (auto [_, value] : um) {
    if ((value > 1) && (!isDuplicated)) {
      // increment only once
      isDuplicated = true;
      ans++;
    }

    len -= value;
    ans = ans + (len * value);
  }

  return ans;
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::string S;
  std::cin >> S;
  auto ans = solve(S);
  std::cout << ans << '\n';
  return 0;
}
