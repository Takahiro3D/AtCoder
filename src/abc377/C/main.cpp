#include <bits/stdc++.h>
using namespace std;

struct Piece {
  int64_t a;
  int64_t b;
};

// Generated by 2.14.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can
// remove this line by using your custom template)
int main() {
  int64_t N, M;
  cin >> N >> M;

  vector<Piece> pieces(M);
  for (auto& p : pieces) {
    cin >> p.a >> p.b;
    p.a--;
    p.b--;
  }

  set<pair<int, int>> ng;
  auto setNg = [&](int x, int y) {
    auto xIsMovable = (x >= 0) && (x < N);
    auto yIsMovable = (y >= 0) && (y < N);
    if (xIsMovable && yIsMovable) {
      ng.emplace(x, y);
    }
  };

  for (auto& p : pieces) {
    // Own position
    setNg(p.a, p.b);
    // Move positions
    setNg(p.a + 2, p.b + 1);
    setNg(p.a + 1, p.b + 2);
    setNg(p.a - 1, p.b + 2);
    setNg(p.a - 2, p.b + 1);
    setNg(p.a - 2, p.b - 1);
    setNg(p.a - 1, p.b - 2);
    setNg(p.a + 1, p.b - 2);
    setNg(p.a + 2, p.b - 1);
  }

  cout << N * N - ng.size() << endl;

  return 0;
}
