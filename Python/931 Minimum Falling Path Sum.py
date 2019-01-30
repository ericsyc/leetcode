# Minimum Falling Path Sum
class Solution(object):
    def minFallingPathSum(self, A):
        """
        :type A: List[List[int]]
        :rtype: int
        """
        n = len(A)
        if n == 1:
            return A[0][0]
        old_ans = [0] * n
        new_ans = [0] * n
        for i in range(0, n):
            for j in range(n):
                if j == 0:
                    new_ans[j] = min(old_ans[j], old_ans[j+1]) + A[i][j]
                elif j == n-1:
                    new_ans[j] = min(old_ans[j-1], old_ans[j]) + A[i][j]
                else:
                    new_ans[j] = min(old_ans[j-1], old_ans[j], old_ans[j+1]) + A[i][j]
            old_ans[:] = new_ans[:]
        return min(new_ans)