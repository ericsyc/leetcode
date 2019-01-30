# Minimum Add to Make Parentheses Valid
class Solution(object):
    def minAddToMakeValid(self, S):
        """
        :type S: str
        :rtype: int
        """
        stack = []
        for ele in S:
            
            if ele == ')' and stack and stack[-1] == '(':
                stack.pop()
            else:
                stack.append(ele)
        return len(stack)