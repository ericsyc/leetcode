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
    TreeNode* searchBST(TreeNode* root, int val) {
        queue<TreeNode*> q;
        if (root != nullptr) q.push(root);
        else return root;
        while (!q.empty()) {
            TreeNode* tmp = q.front();
            q.pop();
            if (tmp->val == val) return tmp;
            else if (tmp->val > val && tmp->left != nullptr) q.push(tmp->left);
            else if (tmp->right!=nullptr) q.push(tmp->right);
        }
        return nullptr;
        // while (root!=nullptr) {
        //     if (root->val == val) return root;
        //     else if (val < root->val) root = root->left;
        //     else root = root->right;
        // }
        // return root;
    }
};