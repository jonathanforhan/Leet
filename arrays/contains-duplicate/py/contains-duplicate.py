from typing import List, Set


class Solution:
    def contains_duplicate(self, nums: List[int]) -> bool:
        cache: Set[int] = set()

        for n in nums:
            if n in cache:
                return True
            cache.add(n)

        return False


solution = Solution()

nums = [1, 2, 3, 4, 5]
print(solution.contains_duplicate(nums))

nums = [1, 2, 3, 4, 4]
print(solution.contains_duplicate(nums))
