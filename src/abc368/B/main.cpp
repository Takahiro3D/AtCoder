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

// Generated by 2.14.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can
// remove this line by using your custom template)
int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (auto& a : A) {
    cin >> a;
  }

  int ans = 0;
  while (true) {
    sort(A.begin(), A.end(), [](auto a, auto b) { return a > b; });
    int positive_count = count_if(A.begin(), A.end(), [](int n) { return n > 0; });
    if (positive_count <= 1) {
      break;
    }
    A[0]--;
    A[1]--;
    ans++;
  }

  cout << ans << endl;
  return 0;
}
