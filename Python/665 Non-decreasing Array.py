# Non-decreasing Array
class Solution:
    def checkPossibility(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        l = len(nums)
        if l <= 1:
            return True
        i = 0
        while i <= l - 2 and nums[i] <= nums[i + 1]:
            i += 1
        if i > l - 2:
            return True
        if i == 0:
            i += 1
            while i <= l -2 and nums[i] <= nums[i+1]:
                i += 1
            retrun i > l - 2
        else:
            if nums[i + 1] < nums[i - 1]:
                nums[i + 1] = nums[i]
            else:
                nums[i] = nums[i - 1]
            while i <= l - 2 and nums[i] <= nums[i+1]:
                i += 1
            return i > l - 2
