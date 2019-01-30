class Solution:
    def isHappy(self, n):
        """
        :type n: int
        :rtype: bool
        """
        visited = set()     
        while True:
            res = 0
            while n:
                res += (n % 10) ** 2
                n //= 10
            if res == 1:
                return True
            elif res in visited:
                return False
            else:
                visited.add(res)
                n = res
        res=0