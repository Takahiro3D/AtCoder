#include <bits/stdc++.h>

#include <atcoder/all>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n) - 1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n) - 1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;
using namespace atcoder;

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int X;
  cin >> X;
  int Q;
  cin >> Q;

  // Chalkbord nums
  multiset<int> nums_L, nums_R;
  auto center = X;
  REP(_, Q) {
    int A, B;
    cin >> A >> B;

    auto insert = [&](int x) {
      if (x < center) {
        nums_L.insert(x);
      } else {
        nums_R.insert(x);
      }
    };
    insert(A);
    insert(B);

    while (nums_L.size() > nums_R.size()) {
      auto it = nums_L.end();
      --it;
      nums_R.insert(center);
      center = *it;
      nums_L.erase(it);
    }
    while (nums_R.size() > nums_L.size()) {
      auto it = nums_R.begin();
      nums_L.insert(center);
      center = *it;
      nums_R.erase(it);
    }
    cout << center << endl;
  }
  return 0;
}
