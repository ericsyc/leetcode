# First Bad Version
class Solution:
    def firstBadVersion(self, n):
        """
        :type n: int
        :rtype: int
        """
        low = 0
        high = n
        while low < high:
            mid = low + (high - low) // 2
            if isBadVersion(mid):
                high = mid
            else:
                low = mid + 1
        return low