# Reverse Integer
class Solution:
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        temp = str(x)
        if temp[0] == '-':
            res = temp[0] + temp[1:][::-1]
        else:
            res = temp[::-1]
        res = int(res)
        if x > 2147483647 or x < -2147483648 or res > 2147483647 or res < -2147483648:
            return 0
        return res