#include <bits/stdc++.h>
using namespace std;

// Generated by 2.14.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can
// remove this line by using your custom template)
int main() {
  int Q;
  cin >> Q;

  vector<int64_t> v;
  v.emplace_back(0);

  int left_num = 0;
  for (int q = 0; q < Q; q++) {
    int t;
    cin >> t;
    switch (t) {
      case 1: {
        int l;
        cin >> l;
        if (v.size() <= 1) {
          v.emplace_back(l);
        } else {
          v.emplace_back(v.back() + l);
        }
      } break;
      case 2: {
        left_num++;
      } break;
      case 3: {
        int k;
        cin >> k;
        k--;
        auto ans = (left_num == 0) ? v[k] : v[k + left_num] - v[left_num];
        cout << ans << endl;
      } break;

      default:
        break;
    }
  }

  return 0;
}
