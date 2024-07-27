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

bool isPalindrome(const string& S) {
  int size = S.size();
  int half = size / 2;
  for (int i = 0; i < half; i++) {
    if (S[i] != S[size - 1 - i]) {
      return false;
    }
  }
  return true;
}

// Generated by 2.14.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can
// remove this line by using your custom template)
int main() {
  int N, K;
  cin >> N >> K;

  string S;
  cin >> S;

  sort(S.begin(), S.end());

  int ans = 0;

  do {
    int end = S.size() - K;
    bool palindorome = false;
    for (int i = 0; i <= end; i++) {
      if (isPalindrome(S.substr(i, K))) {
        palindorome = true;
        break;
      }
    }
    if (!palindorome) {
      ans++;
    }
  } while (next_permutation(S.begin(), S.end()));

  cout << ans << endl;

  return 0;
}
