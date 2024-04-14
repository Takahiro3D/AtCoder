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
  S.push_back('x');
  string re;

  int size = T.size();
  for (int i = 0; i < size; i++) {
    re += tolower(T[i]);
    if (i != (size - 1)) {
      re += ".*";
    }
  }
  return regex_search(S, regex(re));
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
