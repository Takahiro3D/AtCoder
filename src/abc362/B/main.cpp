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

const string YES = "Yes";
const string NO = "No";

struct Coord {
  int x;
  int y;
};

// Generated by 2.14.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can
// remove this line by using your custom template)
int main() {
  Coord A, B, C;
  cin >> A.x >> A.y;
  cin >> B.x >> B.y;
  cin >> C.x >> C.y;

  // Calculate inner product
  // A.B = Ax*Bx + Ay*By
  int Adot = (B.x - A.x) * (C.x - A.x) + (B.y - A.y) * (C.y - A.y);
  int Bdot = (A.x - B.x) * (C.x - B.x) + (A.y - B.y) * (C.y - B.y);
  int Cdot = (A.x - C.x) * (B.x - C.x) + (A.y - C.y) * (B.y - C.y);

  bool right = ((Adot == 0) || (Bdot == 0) || (Cdot == 0));
  string ans = right ? YES : NO;
  cout << ans << endl;

  return 0;
}
