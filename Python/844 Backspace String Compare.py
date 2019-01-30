class Solution(object):
    def backspaceCompare(self, S, T):
        """
        :type S: str
        :type T: str
        :rtype: bool
        """
        stack1 = []
        stack2 = []
        for s in S:
            if s != '#':
                stack1.append(s)
            else:
                if len(stack1) == 0:
                    continue
                else:
                    stack1.pop()
        for t in T:
            if t != '#':
                stack2.append(t)
            else:
                if len(stack2) == 0:
                    continue
                else:
                    stack2.pop()
        return stack1 == stack2