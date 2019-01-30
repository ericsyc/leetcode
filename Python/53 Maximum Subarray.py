class Solution:
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        cumsum = ans = nums[0]
        for num in nums[1:]:
            cumsum = max(cumsum, 0) + num
            ans = max(cumsum, ans)
        return ans

def maxSubArray(self, nums):
    ans = nums[0]
    cumsum = 0
    minsum = min(0, ans)
    for num in nums[1:]:
        cumsum += num
        if cumsum - minsum > ans:
            ans = cumsum - minsum
        if cumsum < minsum:
            minsum = cumsum
    return ans