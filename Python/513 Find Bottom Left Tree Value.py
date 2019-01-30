# Find Bottom Left Tree Value
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def findBottomLeftValue(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        queue = []
        queue.append(root)
        while queue:
            curr = queue.pop(0)
            if curr.right:
                queue.append(curr.right)
            if curr.left:
                queue.append(curr.left)
        return curr.val