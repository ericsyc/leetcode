class Solution(object):
    def findContentChildren(self, g, s):
        """
        :type g: List[int]
        :type s: List[int]
        :rtype: int
        """
        g.sort()
        s.sort()
        ans = 0
        i, j = 0, 0
        while i < len(g) and j < len(s):
            if s[j] < g[i]:
                j += 1
            else:
                i += 1
                j += 1
                ans += 1
        return ans