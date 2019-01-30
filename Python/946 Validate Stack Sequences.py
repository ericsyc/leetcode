class Solution(object):
    def validateStackSequences(self, pushed, popped):
        """
        :type pushed: List[int]
        :type popped: List[int]
        :rtype: bool
        """
        if not pushed:
            return True
        stack = [pushed.pop(0)]
        while pushed:
            if stack and stack[-1] != popped[0]:
                stack.append(pushed.pop(0))
            elif stack and popped:
                stack.pop()
                popped.pop(0)
            else:
                stack.append(pushed.pop(0))
        while stack and popped and stack[-1] == popped[0]:
            stack.pop()
            popped.pop(0)
        return popped == []