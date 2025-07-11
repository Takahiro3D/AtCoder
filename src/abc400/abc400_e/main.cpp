#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n) - 1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n) - 1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

auto solve(int n, const std::vector<int64_t> &a) {
  // max num is sqrt of 10^12
  const int MAX = 1e6;
  // Number with prime divisors
  vector<int> cnt(MAX + 1);

  for (int i = 2; i <= MAX; i++) {
    if (cnt[i]) {
      // i is not prime number
      continue;
    }
    for (int j = i; j <= MAX; j += i) {
      // Increment count for multiple of i
      cnt[j]++;
    }
  }

  vector<int64_t> ans(n);
  REP(i, n) {
    int64_t x = sqrt(a[i]);
    while (cnt[x] != 2) {
      x--;
    }
    ans[i] = x * x;
  }
  return ans;
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int n;
  std::cin >> n;
  std::vector<int64_t> a(n);
  REP(i, n) { std::cin >> a[i]; }
  auto ans = solve(n, a);
  REP(i, n) { std::cout << ans[i] << '\n'; }
  return 0;
}
