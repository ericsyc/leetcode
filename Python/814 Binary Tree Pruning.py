# Binary Tree Pruning
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def pruneTree(self, root):
        """
        :type root: TreeNode
        :rtype: TreeNode
        """
        if not root:
            return None
        if not root.right and not root.left:
            if root.val == 0:
                return None
        root.left = self.pruneTree(root.left)
        root.right = self.pruneTree(root.right)
        if root.val == 0 and root.left == None and root.right == None:
            return None
        return root

        ############# BFS #############
        stack = []
        if not root:
            return None
        if not root.left:
            stack.append(root.left)
        if not root.right:
            stack.append(root.right)

