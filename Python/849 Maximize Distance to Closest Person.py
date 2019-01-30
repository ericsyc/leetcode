# Maximize Distance to Closest Person
class Solution:
    def maxDistToClosest(self, seats):
        """
        :type seats: List[int]
        :rtype: int
        """
        i = 0
        while i < len(seats) and seats[i] == 0:
            i += 1
        res = max(i, 1)
        # while seats[i] == 1:
        #     i += 1
        # closest = i - 1
        # res = 1
        while i < len(seats):
            while i < len(seats) and seats[i] == 1:
                i += 1
            temp = 0
            j = i
            while j < len(seats) and seats[j] == 0:
                temp += 1
                j += 1
            if j == len(seats):
                res = max(res, j - i)
            else:
                res = max(res, (j - i + 1) // 2)
            i = j
        return res