# Kth Largest Element in a Stream
class KthLargest:

    def __init__(self, k, nums):
        """
        :type k: int
        :type nums: List[int]
        """
        self.array = sorted(nums)[-k:]
        self.k = k

    def add(self, val):
        """
        :type val: int
        :rtype: int
        """
        if len(self.array) == self.k and val < self.array[0]:
            return self.array[0]
        low, high = 0, len(self.array)
        while low < high:
            middle = (low + high) // 2
            if self.array[middle] > val:
                high = middle
            else:
                low = middle + 1
        self.array.insert(low, val) 
        if len(self.array) > self.k:
            self.array.pop(0)
        return self.array[0]