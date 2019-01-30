# Maximum Binary Tree
class TreeNode:
    def __init__(self, val = None, left = None, right = None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def constructMaximumBinaryTree(self, nums):
        """
        :type nums: List[int]
        :rtype: TreeNode
        """
        if len(nums) == 0:
            return None
        if len(nums) == 1:
            return TreeNode(nums[0])
        maxnum = nums[0]
        index = 0
        for i, num in enumerate(nums):
            if num > maxnum:
                maxnum = num
                index = i
        root = TreeNode(maxnum)
        root.left = self.constructMaximumBinaryTree(nums[:index])
        root.right = self.constructMaximumBinaryTree(nums[index+1:])
        return root