#include <bits/stdc++.h>
using namespace std;

// Generated by 2.14.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can
// remove this line by using your custom template)
int main() {
  int N;
  char c1, c2;
  cin >> N >> c1 >> c2;

  string S;
  cin >> S;

  for (auto& s : S) {
    if (s != c1) {
      s = c2;
    }
  }

  cout << S << endl;

  return 0;
}
