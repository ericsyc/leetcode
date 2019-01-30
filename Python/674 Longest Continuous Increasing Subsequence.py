# Longest Continuous Increasing Subsequence
class Solution:
    def findLengthOfLCIS(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if not nums:
            return 0
        maxlen = 1
        i = 0
        while i < len(nums) - 1:
            l = 1
            while i < len(nums) - 1 and nums[i] < nums[i+1]:
                i += 1
                l += 1
            maxlen = max(maxlen, l)
            i += 1
        return maxlen
