#include <iostream>
#include <unordered_map>
#include <vector>

int main() {
  // 入力データ
  std::vector<int> nums = {748, 169, 586, 329, 972, 529, 432, 519, 408, 587,
                           138, 249, 656, 114, 632, 299, 984, 755, 404, 772};
  int target = 300;

  // 累積和を管理する
  std::unordered_map<int, int> prefixMap;  // 累積和 → インデックス
  prefixMap[0] = -1;                       // 初期値: 部分数列の開始点を考慮
  int prefixSum = 0;

  // 条件を満たす部分数列を探索
  for (size_t i = 0; i < nums.size(); ++i) {
    prefixSum += nums[i];

    // 差が存在すれば条件を満たす部分数列が見つかったことを意味する
    if (prefixMap.find(prefixSum - target) != prefixMap.end()) {
      int start = prefixMap[prefixSum - target] + 1;
      int end = i;
      std::cout << "部分数列が見つかりました: ";
      for (int k = start; k <= end; ++k) {
        std::cout << nums[k] << " ";
      }
      std::cout << "(インデックス: " << start << " ～ " << end << ")\n";
    }

    // 現在の累積和をマップに登録
    prefixMap[prefixSum] = i;
  }

  return 0;
}
