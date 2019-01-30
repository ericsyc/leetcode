# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def leafSimilar(self, root1, root2):
        """
        :type root1: TreeNode
        :type root2: TreeNode
        :rtype: bool
        """
        stack1 = [root1]
        stack2 = [root2]
        value1 = []
        value2 = []
        while stack1:
            curr = stack1.pop()
            if curr.left:
                stack1.append(curr.left)
            if curr.right:
                stack1.append(curr.right)
            if not curr.left and not curr.right:
                value1.append(curr.val)
        while stack2:
            curr = stack2.pop()
            if curr.left:
                stack2.append(curr.left)
            if curr.right:
                stack2.append(curr.right)
            if not curr.left and not curr.right:
                value2.append(curr.val)
        return value1 == value2