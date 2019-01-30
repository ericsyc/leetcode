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
    bool isSubtree(TreeNode* s, TreeNode* t) {
        return  s!=nullptr && ( equal(s,t) || isSubtree(s->left,t) || isSubtree(s->right,t));
    }
    
    bool equal(TreeNode* node1, TreeNode* node2) {
        if (node1 == nullptr && node2 == nullptr) return true;
        if (node1 == nullptr || node2 == nullptr) return false;
        return node1->val == node2->val && equal(node1->left, node2->left) && equal(node1->right, node2->right);
    }
};