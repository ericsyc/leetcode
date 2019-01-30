# Find and Replace Pattern
class Solution:
    def findAndReplacePattern(self, words, pattern):
        """
        :type words: List[str]
        :type pattern: str
        :rtype: List[str]
        """
        ans = []
        for word in words:
            dic1 = {}
            dic2 = {}
            flag = True
            for i in range(len(word)):
                dic1[word[i]] = dic1.get(word[i], pattern[i])
                dic2[pattern[i]] = dic2.get(pattern[i],word[i])
                if dic1[word[i]] != pattern[i] or dic2[pattern[i]]!=word[i]:
                    flag = False
                    break
            if flag:
                ans.append(word)
                
        return ans