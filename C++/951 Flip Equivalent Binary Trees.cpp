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
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        if (!root1 && !root2) return true;
        if ((root1 && !root2) || (!root1 && root2)) return false;
        if (root1->val != root2->val) return false;
        if (root1->left && root1->right) {
            if (root2->left && root2->right) {
                if (root1->left->val == root2->left->val) return flipEquiv(root1->left, root2->left) && flipEquiv(root1->right, root2->right);
                else  return flipEquiv(root1->right, root2->left) && flipEquiv(root1->left, root2->right);
            }
            else return false;
        }
        else if(root1->left){
            if (root2->left && root2->right) return false;
            else if (root2->left) {
                if (root1->left->val != root2->left->val) return false;
                else return flipEquiv(root1->left, root2->left);
            }
            else if (root2->right) return flipEquiv(root1->left, root2->right);
            else return false;
        }
        else if (root1->right) {
            if (root2->left && root2->right) return false;
            else if (root2->left) return flipEquiv(root1->right, root2->left);
            else if (root2->right) return flipEquiv(root1->right, root2->right);
            else return false;
        }
        else {
            if (root2->left || root2->right) return false;
            return true;
        }
    }
};