// Output all palindromic cubic number

#include <iostream>
#include <string>
#include <vector>

using namespace std;

uint64_t pow(uint64_t n, uint64_t p) {
  uint64_t ret = 1;
  if (p == 0) {
    return ret;
  }

  for (uint64_t i = 0; i < p; i++) {
    ret *= n;
  }

  return ret;
}

int main() {
  uint64_t K = 0;
  for (uint64_t i = 0; i < 1000000; i++) {
    uint64_t tempNum = pow(i, 3);

    bool isParidrome = true;
    string tempStr = to_string(tempNum);
    const auto len = tempStr.size();
    for (size_t j = 0; j < (len / 2); j++) {
      if (tempStr[j] != tempStr[len - j - 1]) {
        isParidrome = false;
        break;
      }
    }

    if (isParidrome) {
      cout << tempNum << "\n";
    }
  }

  cout << K << endl;

  return 0;
}
