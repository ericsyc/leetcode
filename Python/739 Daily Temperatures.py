class Solution(object):
    def dailyTemperatures(self, T):
        """
        :type T: List[int]
        :rtype: List[int]
        """
        stack = []
        ans = [0] * len(T)
        i = 0
        while i < len(T):
            if not stack:
                stack.append((T[i], i))
                i += 1
            elif T[i] > stack[-1][0]:
                while stack and T[i] > stack[-1][0]:
                    _, j = stack.pop()
                    ans[j] += (i - j)
                stack.append((T[i], i))
                i += 1
            else:
                stack.append((T[i], i))
                i += 1
        return ans