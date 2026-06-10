#include <bits/stdc++.h>

#include <atcoder/all>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n) - 1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n) - 1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;
using namespace atcoder;

// move 8 directions with clockwise order
int dx[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
int dy[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
int INF = 1000000001;

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int H, W;
  cin >> H >> W;
  vector<string> S(H);
  REP(i, H) cin >> S[i];

  auto inRange = [&](int x, int y) -> bool { return 0 <= x && x < H && 0 <= y && y < W; };

  // BFS with same time
  vector D(H, vector<int>(W, INF));
  queue<pair<int, int>> q;
  REP(i, H) {
    REP(j, W) {
      if (S[i][j] == '#') {
        REP(k, 8) {
          int nx = i + dx[k];
          int ny = j + dy[k];
          if (inRange(nx, ny) && S[nx][ny] == '.') {
            D[nx][ny] = 1;
            q.push({nx, ny});
          }
        }
      }
    }
  }

  while (!q.empty()) {
    auto [i, j] = q.front();
    q.pop();
    REP(k, 8) {
      int nx = i + dx[k];
      int ny = j + dy[k];
      if (inRange(nx, ny) && D[nx][ny] == INF) {
        D[nx][ny] = D[i][j] + 1;
        q.push({nx, ny});
      }
    }
  }

  REP(i, H) {
    string B(W, '.');
    REP(j, W) {
      // even operations: black, odd operations: white
      B[j] = D[i][j] % 2 == 0 ? '#' : '.';
    }
    cout << B << endl;
  }

  return 0;
}
