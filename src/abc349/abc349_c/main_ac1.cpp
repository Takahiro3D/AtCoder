#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

const std::string YES = "Yes";
const std::string NO = "No";
bool solve(std::string S, std::string T) {
  int i = 0;
  int Ssize = S.size();

  int Tsize = T.size();
  for (int j = 0; j < Tsize; j++) {
    auto t = tolower(T[j]);
    bool isFound = false;
    while (true) {
      if (t == S[i]) {
        isFound = true;
        i++;
        break;
      }
      i++;
      if (i == Ssize) {
        // S loop reaches end
        break;
      }
    }

    bool isLastCode = (j == 2) && (T[j] == 'X');
    if (isFound || isLastCode) {
      continue;
    }

    return false;
  }
  return true;
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::string S, T;
  std::cin >> S >> T;
  auto ans = solve(S, T);
  std::cout << (ans ? YES : NO) << '\n';
  return 0;
}