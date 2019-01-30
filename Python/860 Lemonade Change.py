class Solution(object):
    def lemonadeChange(self, bills):
        """
        :type bills: List[int]
        :rtype: bool
        """
        dic = {5:0, 10:0}
        for bill in bills:
            if bill == 5:
                dic[5] += 1
            elif bill == 10:
                if dic[5] <= 0:
                    return False
                dic[5] -= 1
                dic[10] += 1
            elif bill == 20:
                if dic[10] > 0:
                    dic[10] -= 1
                    if dic[5] > 0:
                        dic[5] -= 1
                    else:
                        return False
                else:
                    if dic[5] < 3:
                        return False
                    dic[5] -= 3
        return True