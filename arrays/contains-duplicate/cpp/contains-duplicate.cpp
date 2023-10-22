#include <iostream>
#include <unordered_set>
#include <vector>

class Solution {
public:
  bool containsDuplicate(std::vector<int> &nums) {
    std::unordered_set<int> cache;

    for (const int n : nums) {
      if (cache.count(n)) {
        return true;
      }
      cache.insert(n);
    }
    return false;
  }
};

int main() {
  std::cout << std::boolalpha;

  auto solution = Solution();
  std::vector<int> nums;

  nums = {1, 2, 3, 4, 5};
  std::cout << solution.containsDuplicate(nums) << std::endl;

  nums = {1, 2, 3, 4, 4};
  std::cout << solution.containsDuplicate(nums) << std::endl;
}
