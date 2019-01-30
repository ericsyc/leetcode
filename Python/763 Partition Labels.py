class Solution(object):
    def partitionLabels(self, S):
        """
        :type S: str
        :rtype: List[int]
        """
        def helper(S, ans):
            l = len(S) - 1
            i, j = 0, l
            while i < len(S) - 1 and S[i] == S[i+1]:
                i += 1
            while j > i and S[j] != S[i]:
                j -= 1  
            maxl = j
            m = i+1
            while m < maxl:
                while j < len(S) and S[j] != S[m]:
                    j += 1
                if j != len(S):
                    maxl = max(j, maxl)
                m += 1
            ans.append(maxl)
            return (S[maxl+1:], ans)
        ans = []
        tmp = S
        while tmp:
            tmp, ans = helper(tmp, ans)
            print(tmp)
        return ans