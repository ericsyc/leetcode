class Solution(object):
    def arrangeCoins(self, n):
        """
        :type n: int
        :rtype: int
        """
        low, high = 1, n
        while low <= high:
            mid = (low + high) // 2
            if mid * (mid + 1) / 2 > n:
                high = mid - 1
            else:
                low = mid + 1
        return high