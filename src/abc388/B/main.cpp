#include <bits/stdc++.h>
using namespace std;

// Generated by 2.14.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can
// remove this line by using your custom template)
int main() {
  int N, D;
  cin >> N >> D;

  vector<int> T(N);
  vector<int> L(N);
  for (int i = 0; i < N; i++) {
    cin >> T[i] >> L[i];
  }

  vector<int> W(N);
  for (int i = 1; i <= D; i++) {
    for (int j = 0; j < N; j++) {
      W[j] = T[j] * (L[j] + i);
    }
    sort(W.begin(), W.end());
    cout << W.back() << endl;
  }

  return 0;
}
