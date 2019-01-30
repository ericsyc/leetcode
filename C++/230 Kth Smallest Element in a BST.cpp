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
    int kthSmallest(TreeNode* root, int k) {
        vector<int> tree;
        inorder(root, tree);
        for (int i = 0; i < tree.size(); i++) cout << tree[i] << " ";
        return tree[k-1];
    }
    void inorder(TreeNode* root, vector<int>& t) {
        if (root == nullptr) return;
        inorder(root->left, t);
        t.push_back(root->val);
        inorder(root->right, t);
    }
};