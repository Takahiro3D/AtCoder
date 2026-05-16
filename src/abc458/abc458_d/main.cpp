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
  multiset<int> nums;
  nums.insert(X);
  auto it = nums.begin();
  REP(_, Q) {
    int A, B;
    cin >> A >> B;
    nums.insert(A);
    nums.insert(B);
    int offset = 0;
    offset += A > *it ? -1 : 1;
    offset += B > *it ? -1 : 1;
    if (offset == 0) {
      // no change
    } else if (offset == 2) {
      // move to left
      it--;
    } else if (offset == -2) {
      // move to right
      it++;
    }
    cout << *it << endl;
  }
  return 0;
}
