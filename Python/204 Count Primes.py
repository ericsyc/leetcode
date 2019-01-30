# Count Primes
class Solution:
    def countPrimes(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n < 2:
            return 0
        temp = [True] * n
        temp[0], temp[1] = False, False
        for i in range(2, int(n ** 0.5) + 1):
            if temp[i]:
                temp[i * i : n : i] = [False] * len(temp[i * i : n : i])
        return sum(temp)