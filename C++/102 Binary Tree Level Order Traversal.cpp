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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> ans;
        if (root == nullptr) return ans;
        while (!q.empty()) {
            queue<TreeNode*> level;
            vector<int> tmp;
            while (!q.empty()) {
                TreeNode* curr = q.front();
                q.pop();
                tmp.push_back(curr->val);
                if (curr->left) level.push(curr->left);
                if (curr->right) level.push(curr->right);
            }
            q = level;
            ans.push_back(tmp);
        }
        return ans;
    }
};