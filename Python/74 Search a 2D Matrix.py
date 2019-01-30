class Solution(object):
    def searchMatrix(self, matrix, target):
        """
        :type matrix: List[List[int]]
        :type target: int
        :rtype: bool
        """
        if not matrix:
            return False
        m = len(matrix)
        n = len(matrix[0])
        if m <= 0 or n <= 0:
            return False
        low, high = 0, m - 1
        while low <= high:
            mid = (low + high) // 2
            if matrix[mid][0] == target:
                return True
            elif matrix[mid][0] < target:
                low = mid + 1
            else:
                high = mid - 1
        left, right = 0, n - 1
        while left <= right:
            mid = (left + right) // 2
            if matrix[high][mid] == target:
                return True
            elif matrix[high][mid] < target:
                left = mid + 1
            else:
                right = mid - 1
        return False