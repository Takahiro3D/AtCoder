#include <bits/stdc++.h>

#include <atcoder/all>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n) - 1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n) - 1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;
using namespace atcoder;

struct Node {
  int next;
};

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int N, Q;
  cin >> N >> Q;

  // Card cain
  vector<Node> card(N);
  REP(i, N) { card[i].next = -1; }

  REP(_, Q) {
    int C, P;
    cin >> C >> P;
    C--;
    P--;
    card[C].next = P;
  }

  vector<int> A(N);
  vector<bool> visited(N);
  REP(i, N) {
    if (visited[i]) {
      continue;
    }
    int v = i;

    visited[v] = true;
    int n = card[v].next;
    int cnt = 1;
    while (n != -1) {
      v = n;
      visited[v] = true;
      n = card[v].next;
      cnt++;
    }
    A[v] = cnt;
  }

  REP(i, N) { cout << A[i] << " "; }
  cout << endl;

  return 0;
}
