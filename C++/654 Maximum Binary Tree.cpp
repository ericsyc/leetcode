/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) { 
        return helper(nums, 0, nums.size() - 1);
    }
    TreeNode* helper(vector<int>& nums, int l, int r) {
        if (l > r) return nullptr;
        int max_index = l;
        for (int i = l; i <= r; i++) {
            if (nums[i] > nums[max_index]) max_index = i;
        }
        TreeNode* root = new TreeNode(nums[max_index]);
        root->left = helper(nums, l, max_index-1);
        root->right = helper(nums, max_index+1, r);
        return root;
    }
};