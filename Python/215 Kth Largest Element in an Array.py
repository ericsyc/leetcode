# Kth Largest Element in an Array
class Solution(object):
    def partition(self, nums, l, r):
        p = nums[l]
        i = l + 1
        for j in range(l+1, r+1):
            if nums[j] < p:
                nums[j], nums[i] = nums[i], nums[j]
                i+=1
        nums[l], nums[i-1] = nums[i-1], nums[l]
        return i - 1
    
    def findKthLargest(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        if nums:
            d = self.partition(nums, 0, len(nums) - 1)
            if k == len(nums) - d:
                return nums[d]
            elif k < len(nums) - d:
                return self.findKthLargest(nums[d+1:], k)
            else:
                return self.findKthLargest(nums[:d], k-len(nums) + d)