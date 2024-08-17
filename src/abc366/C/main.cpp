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
  unordered_map<int, int> um_ball;

  int Q;
  cin >> Q;

  for (int i = 0; i < Q; i++) {
    int q;
    cin >> q;
    switch (q) {
      case 1: {
        int v;
        cin >> v;
        um_ball[v]++;
      } break;
      case 2: {
        int v;
        cin >> v;
        um_ball[v]--;
        if (um_ball[v] == 0) {
          um_ball.erase(v);
        }
      } break;
      case 3: {
        cout << um_ball.size() << "\n";
      } break;
      default:
        break;
    }
  }

  return 0;
}
