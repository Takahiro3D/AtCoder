#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

int64_t solve(int H, int64_t W, const std::vector<std::string> &S) {
  vector<vector<bool>> A_movable(H, vector<bool>(W, true));
  vector<vector<bool>> A_searched(H, vector<bool>(W, false));

  REP(i, H) {
    REP(j, W) {
      if (S[i][j] == '#') {
        A_movable[i][j] = false;
        if (i - 1 >= 0) A_movable[i - 1][j] = false;
        if (i + 1 < H) A_movable[i + 1][j] = false;
        if (j - 1 >= 0) A_movable[i][j - 1] = false;
        if (j + 1 < W) A_movable[i][j + 1] = false;
      }
    }
  }

  vector<vector<int>> A_searched_tmp(H, vector<int>(W));
  int tmp = 0;

  int ans = 1;
  REP(i, H) {
    REP(j, W) {
      if (A_movable[i][j] && !A_searched[i][j]) {
        stack<pair<int, int>> s;
        s.push({i, j});
        tmp++;
        A_searched_tmp[i][j] = tmp;
        A_searched[i][j] = true;
        int numfree = 1;
        while (s.size() != 0) {
          auto p = s.top();
          int h = p.first;
          int w = p.second;
          s.pop();

          auto check = [&](int h, int w) {
            if (A_searched_tmp[h][w] != tmp) {
              A_searched_tmp[h][w] = tmp;
              numfree++;
              if (A_movable[h][w]) {
                A_searched[h][w] = true;
                s.emplace(h, w);
              }
            }
          };

          int up = h - 1;
          if (up >= 0) {
            check(up, w);
          }

          int down = h + 1;
          if (down < H) {
            check(down, w);
          }

          const int left = w - 1;
          if (left >= 0) {
            check(h, left);
          }

          const int right = w + 1;
          if (right < W) {
            check(h, right);
          }
        }
        ans = max(ans, numfree);
      }
    }
  }
  return ans;
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int H;
  int64_t W;
  std::cin >> H;
  std::vector<std::string> S(H);
  std::cin >> W;
  REP(i, H) { std::cin >> S[i]; }
  auto ans = solve(H, W, S);
  std::cout << ans << '\n';
  return 0;
}