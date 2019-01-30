# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def isSameTree(self, p, q):
        """
        :type p: TreeNode
        :type q: TreeNode
        :rtype: bool
        """
        queue = [(p,q)]
        while queue:
            curr1, curr2 = queue.pop(0)
            if curr1.val != curr2.val:
                return False
            if (not curr1.left and curr2.left) or (curr1.left and not curr2.left) or (curr1.right and not curr2.right) or (not curr1.right and curr2.right):
                return False
            if curr1.left and curr2.left:
                queue.append((curr1.left, curr2.left))
            if curr1.right and curr2.right:
                queue.append((curr1.right, curr2.right))          
        return True