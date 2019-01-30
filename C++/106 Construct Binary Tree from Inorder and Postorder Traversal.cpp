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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if (inorder.size() != postorder.size()) return nullptr;
        return helper(inorder, postorder, 0, inorder.size() - 1, 0, postorder.size() - 1);
    }
    TreeNode* helper(vector<int>& inorder, vector<int>& postorder, int i, int j, int m, int n) {
        if (m > n) return nullptr;
        TreeNode* root = new TreeNode(postorder[n]);
        int x = i, y = m;
        for (; x < j; x++) {
            if (inorder[x] == postorder[n]) break;
        }
        root->left = helper(inorder, postorder, i, x-1, m, m+x-1-i); // left
        root->right = helper(inorder, postorder, x+1, j, n-1-j+x+1, n-1); // right
        return root;
    }
};