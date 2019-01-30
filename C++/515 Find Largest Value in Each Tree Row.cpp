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
private:
    vector<int> ans;
public:
    vector<int> largestValues(TreeNode* root) {
        return dfs(root, 0);
    }

    void dfs(TreeNode* node, int level) {
        if (node == nullptr) return;
        if (level ==  ans.size()) ans.push_back(node->val);
        else {
            ans[level] = max(ans[level], node->val);
        }
        dfs(node->left, level+1);
        dfs(node->right, level+1);
    }
    // vector<int> largestValues(TreeNode* root) {
    //     vector<int> ans;
    //     if (!root) return ans;
    //     queue<TreeNode*> q;
    //     q.push(root);
    //     while (!q.empty()) {
    //         queue<TreeNode*> level;
    //         int tmp = INT_MIN;
    //         while (!q.empty()) {
    //             TreeNode* curr = q.front();
    //             q.pop();
    //             tmp = max(tmp, curr->val);
    //             if (curr->left) level.push(curr->left);
    //             if (curr->right) level.push(curr->right);
    //         }
    //         ans.push_back(tmp);
    //         q = level;
    //     }
    //     return ans;
    // }
};