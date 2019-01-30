# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def averageOfLevels(self, root):
        """
        :type root: TreeNode
        :rtype: List[float]
        """
        if not root:
            return []
        queue = [root]
        while queue:
            temp = []
            num, s = 0, 0.0
            while queue:
                curr = queue.pop(0)
                s += curr.val
                num += 1
                if curr.left:
                    temp.append(left)
                if curr.right:
                    temp.append(right)
            queue = temp
            ans.append(s / num)
        return ans
