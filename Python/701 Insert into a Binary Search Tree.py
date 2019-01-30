# Insert into a Binary Search Tree
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def insertIntoBST(self, root, val):
        """
        :type root: TreeNode
        :type val: int
        :rtype: TreeNode
        """
        if not root:
            return TreeNode(val)
        if val < root.val:
            root.left = self.insertIntoBST(root.left, val)
        else:
            root.right = self.insertIntoBST(root.right, val)
        return root

        #############################
        if not root:
            return TreeNode(val)
        curr = root
        while curr:
            prev = curr
            if val < curr.val:
                if not curr.left:
                    curr.left = TreeNode(val)
                    break
                curr = curr.left
            elif val > curr.val:
                if not curr.right:
                    curr.right = TreeNode(val)
                    break
                curr = curr.right
            else:
                return root
        return root
