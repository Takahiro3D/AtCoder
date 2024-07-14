#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <utility>
#include <bitset>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <cassert>
using namespace std;

const string YES = "Yes";
const string NO = "No";

struct Coord
{
  int x;
  int y;
};

// Generated by 2.14.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
  Coord A, B, C;
  cin >> A.x >> A.y;
  cin >> B.x >> B.y;
  cin >> C.x >> C.y;

  int ABx = A.x - B.x;
  int ABy = A.y - B.y;
  int AB2 = ABx * ABx + ABy * ABy;

  int BCx = B.x - C.x;
  int BCy = B.y - C.y;
  int BC2 = BCx * BCx + BCy * BCy;

  int CAx = C.x - A.x;
  int CAy = C.y - A.y;
  int CA2 = CAx * CAx + CAy * CAy;
  
  bool right = (((AB2+BC2)==CA2) || ((BC2+CA2)==AB2) || ((CA2+AB2)==BC2));
  string ans = right ? "Yes" : "No";
  cout << ans << endl;

  return 0;
}
