#include <algorithm>
#include <bitset>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <deque>
#include <fstream>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;

int calc_dist(int a, int b) { return abs(a - b); }

// Generated by 2.14.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can
// remove this line by using your custom template)
int main() {
  int N, Q;
  cin >> N >> Q;

  vector<int> A(N);
  for (auto& a : A) {
    cin >> a;
  }
  sort(A.begin(), A.end());

  for (int i = 0; i < Q; i++) {
    int b, k;
    cin >> b >> k;

    auto f = [&](int j) -> bool {
      int l = b - j;
      int r = b + j;
      int lIndex = lower_bound(A.begin(), A.end(), l) - A.begin();
      int rIndex = lower_bound(A.begin(), A.end(), r + 1) - A.begin();
      return (rIndex - lIndex) >= k;
    };

    // binary search for dist the condition is fulfilled

    // Accepted dist
    int ac = 2e8;
    // Wrong answer dist
    int wa = -1;

    while (wa + 1 < ac) {
      int j = (wa + ac) / 2;
      if (f(j)) {
        ac = j;
      } else {
        wa = j;
      }
    }

    cout << ac << "\n";
  }

  return 0;
}
