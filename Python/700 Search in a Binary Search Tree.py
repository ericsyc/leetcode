# Search in a Binary Search Tree
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def searchBST(self, root, val):
        """
        :type root: TreeNode
        :type val: int
        :rtype: TreeNode
        """
        if not root:
            return []
        queue = []
        queue.append(root)
        while queue:
            curr = queue.pop(0)
            if curr.val == val:
                return curr
            if curr.left:
                queue.append(curr.left)
            if curr.right:
                queue.append(curr.right)
        return []