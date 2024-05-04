#include <chrono>
#include <iostream>
#include <vector>

void process() {
  using std::vector;
  constexpr int N = 1000;
  for (int i = 0; i < 1000; i++) {
    vector<vector<int>> A(N, vector<int>(N));
  }
}

int main() {
  std::chrono::system_clock::time_point start, end;
  start = std::chrono::system_clock::now();
  process();
  end = std::chrono::system_clock::now();
  double elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
  std::cout << "Process time: " << elapsed << "[msec]" << std::endl;
}
