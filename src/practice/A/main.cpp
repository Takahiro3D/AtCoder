#include <bits/stdc++.h>
using namespace std;

void solve(long long a, long long b, long long c, std::string s) {
  auto [f, g] = make_pair(a + b + c, s);
  std::cout << f << ' ' << g << '\n';
}

// Generated by 2.14.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can
// remove this line by using your custom template)
int main() {
  long long a;
  std::scanf("%lld", &a);
  long long b;
  std::scanf("%lld", &b);
  long long c;
  std::scanf("%lld", &c);
  std::string s;
  std::cin >> s;
  solve(a, b, c, s);
  return 0;
}
