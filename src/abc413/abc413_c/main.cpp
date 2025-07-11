#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n) - 1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n) - 1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

auto solve(int Q) {
  queue<pair<int, int>> A;
  REP(i, Q) {
    int q;
    cin >> q;
    switch (q) {
      case 1: {
        int c, x;
        cin >> c >> x;
        A.emplace(c, x);
      } break;
      case 2: {
        int k;
        cin >> k;
        int64_t sum = 0;
        while (true) {
          auto& [c, x] = A.front();
          if (k <= c) {
            c -= k;
            sum += static_cast<int64_t>(k) * x;
            cout << sum << endl;
            break;
          }
          sum += static_cast<int64_t>(c) * x;
          A.pop();
          k -= c;
        }
      } break;

      default:
        break;
    }
  }
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int Q;
  std::cin >> Q;
  solve(Q);
  return 0;
}
