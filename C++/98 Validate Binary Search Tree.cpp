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
    bool isValidBST(TreeNode* root) {
        vector<int> tree;
        inorder(root, tree);
        int n = tree.size() - 1;
        for (int i = 0; i < n; i++) {
            if (tree[i] >= tree[i+1]) return false;
        }
        return true;
        // if (root == nullptr) return true;
        // if (root->left == nullptr && root->right == nullptr) return true;
        // if (root->left == nullptr) {
        //     if (root->val >= min(root->right)) return false;
        //     return isValidBST(root->right);
        // }
        // if (root->right == nullptr) {
        //     if (root->val <= max(root->left)) return false;
        //     return isValidBST(root->left);
        // }
        // if (root->val >= min(root->right) || root->val <= max(root->left)) return false;
        // bool left = isValidBST(root->left);
        // bool right = isValidBST(root->right);
        // return left && right;      
    }
    
    void inorder(TreeNode* root, vector<int>& t) {
        if (root == nullptr) return;
        inorder(root->left, t);
        t.push_back(root->val);
        inorder(root->right, t);
    }
    
    int min(TreeNode* root) {
        int ans = root->val;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            TreeNode* curr = q.front();
            q.pop();
            if (curr->val < ans) ans = curr->val;
            if (curr->left) q.push(curr->left);
            if (curr->right) q.push(curr->right);
        }
        return ans;
    }
    int max(TreeNode* root) {
        int ans = root->val;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            TreeNode* curr = q.front();
            q.pop();
            if (curr->val > ans) ans = curr->val;
            if (curr->left) q.push(curr->left);
            if (curr->right) q.push(curr->right);
        }
        return ans;
    }
};