#include <bits/stdc++.h>
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

  vector<int> B(N);
  for (int i = 0; i < N; i++) {
    A[i] += i - B[i];
    B[i + 1] += B[i];

    auto pass = N - i - 1;
    if (A[i] >= pass) {
      A[i] -= pass;
    } else {
      B[i + A[i] + 1]++;
      A[i] = 0;
    }
  }

  for (auto& a : A) {
    cout << a << " ";
  }
  cout << endl;

  return 0;
}
