#include <algorithm>
#include <iostream>
#include <stack>
#include <unordered_set>
#include <vector>

using namespace std;

vector<vector<int>> graph;  // 隣接リスト
int start, goal;            // 開始ノードとゴールノード

// スタックを使ったDFS（すべての単純パスを列挙）
void iterativeDFS() {
  stack<pair<int, unordered_set<int>>> st;  // (現在のノード, 訪問済みノードセット)
  unordered_set<int> initialVisited;
  initialVisited.insert(start);
  st.push({start, initialVisited});  // 初期パスをスタックに追加

  while (!st.empty()) {
    auto [node, visited] = st.top();
    st.pop();

    // ゴールに到達したらパスを出力
    if (node == goal) {
      for (int v : visited) cout << v << " ";
      cout << endl;
    } else {
      // 隣接ノードを探索
      for (int next : graph[node]) {
        // 同じノードに戻らないように
        if (visited.find(next) == visited.end()) {
          unordered_set<int> newVisited = visited;
          newVisited.insert(next);
          st.push({next, newVisited});
        }
      }
    }
  }
}

int main() {
  int n, m;
  cin >> n >> m;  // 頂点数と辺数

  graph.resize(n);

  // 無向グラフの辺を入力
  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    graph[u].push_back(v);
    graph[v].push_back(u);
  }

  cin >> start >> goal;  // 開始ノードとゴールノードを入力

  iterativeDFS();  // スタックを使ったDFS

  return 0;
}
