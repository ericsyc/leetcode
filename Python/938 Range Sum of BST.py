# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def rangeSumBST(self, root, L, R):
        """
        :type root: TreeNode
        :type L: int
        :type R: int
        :rtype: int
        """
        queue = [root]
        ans = 0
        while queue:
            curr = queue.pop(0)
            if curr.val >= L and curr.val <= R:
                ans += curr.val
            if curr.left:
                queue.append(curr.left)
            if curr.right:
                queue.append(curr.right)
        return ans