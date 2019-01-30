# Find Largest Value in Each Tree Row
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def largestValues(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        if not root:
            return []
        queue = [root]
        queue2 = []
        ans = [root.val]
        while queue:
            curr = queue.pop(0)
            if curr.left:
                queue2.append(curr.left)           
            if curr.right:
                queue2.append(curr.right)
            if not queue and queue2:
                ans.append(max(ele.val for ele in queue2))
                while queue2:
                    queue.append(queue2.pop(0))
        return ans