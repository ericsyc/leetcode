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
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        bool flag = false;
        while (!q.empty()) {
            TreeNode* curr = q.front();
            q.pop();
            if (curr == nullptr) {
                flag = true;
            }
            else {
                if (flag) return false;
                q.push(curr->left);
                q.push(curr->right);
            }
        }
        return true;
    }
};