# Buddy Strings
class Solution(object):
    def buddyStrings(self, A, B):
        """
        :type A: str
        :type B: str
        :rtype: bool
        """
        if len(A) != len(B):
            return False
        pairs = []
        for a, b in zip(A, B):
            if a != b:
                pairs.append((a, b))
            if len(pairs) > 2:
                return False
        if len(pairs) == 0:
            return len(set(A)) < len(A)
        return len(pairs) == 2 and pairs[0] == pairs[1][::-1]