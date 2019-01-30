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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return helper(preorder, inorder, 0, preorder.size() - 1, 0, inorder.size() - 1);
    }
    
    TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int i, int j, int m, int n) {
        if (i > j) return nullptr;
        TreeNode* root = new TreeNode(preorder[i]);
        int x = m;
        while (inorder[x] != preorder[i]) x++;
        root->left = helper(preorder, inorder, i+1, x - m + i, m, x - 1);
        root->right = helper(preorder, inorder, j - n + x + 1, j, x + 1, n);
        return root;
    }
};