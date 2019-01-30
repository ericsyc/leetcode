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
    TreeNode* constructFromPrePost(vector<int>& pre, vector<int>& post) {
        if (pre.size() != post.size()) return nullptr;
        return helper(pre, post, 0, pre.size() - 1, 0, post.size() - 1);
    }
    TreeNode* helper(vector<int>& pre, vector<int>& post, int i, int j, int m, int n) {
        if (m > n) return nullptr;
        TreeNode* root = new TreeNode(pre[i]);
        int x = i;
        while (x <= j && pre[x] != post[n-1]) x++;
        root->left = helper(pre, post, i+1, x-1, m, m+x-1-i-1);
        root->right = helper(pre, post, x, j, n-1-(j-x), n-1);
        return root;
    }
};