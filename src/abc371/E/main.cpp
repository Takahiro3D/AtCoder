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
    a--;
  }

  // 値xが存在するAのindex
  vector<vector<int>> is(N);
  for (int i = 0; i < N; i++) {
    is[A[i]].push_back(i);
  }

  auto sections = [](int64_t n) {
    // nC2
    return n * (n - 1) / 2;
  };
  int64_t ans = 0;
  for (int x = 0; x < N; x++) {
    // xを含まない区間数の累計
    int64_t section_x = 0;
    // 最後尾処理用のindexを挿入
    is[x].push_back(N);
    // 先頭区間index用初期値
    int pre = -1;
    // xの区間
    for (auto i : is[x]) {
      // xを含まない区間数を計算
      section_x += sections(i - pre);
      pre = i;
    }
    // xを含む区間数 = 全体の区間数 - xを含まない区間数
    ans += sections(N + 1) - section_x;
  }

  cout << ans << endl;

  return 0;
}
