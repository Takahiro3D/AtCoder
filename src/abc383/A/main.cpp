#include <bits/stdc++.h>
using namespace std;

// Generated by 2.14.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can
// remove this line by using your custom template)
int main() {
  int N;
  cin >> N;

  int ans = 0;
  int T_prev = 0;
  for (int i = 0; i < N; i++) {
    int T, V;
    cin >> T >> V;
    ans = max(0, ans - (T - T_prev));
    ans += V;
    T_prev = T;
  }

  cout << ans << endl;

  return 0;
}
