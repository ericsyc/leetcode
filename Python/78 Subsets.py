# Subsets
class Solution(object):
    def subsets(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        ans = [[]]
        for num in nums:
            ans += [ele + [num] for ele in ans]
        return ans