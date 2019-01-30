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
    unordered_map<int, vector<TreeNode*>> memory;
public:
    vector<TreeNode*> allPossibleFBT(int N) {
        if (memory.count(N) > 0) return memory[N];
        else {
            vector<TreeNode*> ans;
            if (N < 1) return ans;
            if (N == 1) {
                TreeNode* root = new TreeNode(0);
                ans.push_back(root);
                return ans;
            }
            else {
                for (int i = 1; i < N; i+=2) {
                    for (TreeNode* left : allPossibleFBT(i)) {
                        for (TreeNode* right : allPossibleFBT(N-i-1)) {
                            TreeNode* root = new TreeNode(0);
                            root->left = left;
                            root->right = right;
                            ans.push_back(root);
                        }
                    }
                }
            }
            memory.insert({N, ans});
        }       
        return memory[N];
    }
};