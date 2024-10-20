#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

void solve(int N, std::vector<int64_t> &A) {
  auto it = A.rbegin();
  while ((it + 1) < A.rend()) {
    if (*it == *(it + 1)) {
      const auto Ai = *it;
      A.pop_back();
      A.pop_back();
      A.push_back(Ai + 1);
      it = A.rbegin();
    } else {
      break;
    }
  }
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int N;
  std::cin >> N;
  std::vector<int64_t> A;
  REP(i, N) {
    int64_t Ai;
    std::cin >> Ai;
    A.emplace_back(Ai);
    solve(i, A);
  }
  int ans = A.size();
  std::cout << ans << '\n';
  return 0;
}
