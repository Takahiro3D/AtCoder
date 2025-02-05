#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n) - 1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n) - 1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  // failed to analyze input format
  // TODO: edit here
  int n, q;
  std::cin >> n >> q;

  std::vector<int> a(n);
  REP(i, n) { a[i] = i; }
  std::vector<int> nest(n);
  REP(i, n) { nest[a[i]]++; }

  int ans = 0;
  REP(i, q) {
    int query;
    cin >> query;
    switch (query) {
      case 1: {
        int P, H;
        cin >> P >> H;

        P--;
        H--;

        nest[a[P]]--;
        if (nest[a[P]] == 1) {
          ans--;
        }

        a[P] = H;
        nest[a[P]]++;
        if (nest[a[P]] == 2) {
          ans++;
        }
      } break;

      default: {
        std::cout << ans << std::endl;
      } break;
    }
  }
  return 0;
}
