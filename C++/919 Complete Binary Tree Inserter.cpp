/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class CBTInserter {
private:
    vector<TreeNode*> nodes;
public:
    CBTInserter(TreeNode* root) {  
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            TreeNode* curr = q.front();
            q.pop();
            nodes.push_back(curr);
            if (curr->left) q.push(curr->left);
            if (curr->right) q.push(curr->right);
        }
        // for (int i = 0; i < nodes.size(); i++) cout << nodes[i]->val << " ";
    }
    
    int insert(int v) {
        int l = nodes.size() - 1;
        TreeNode* tmp = new TreeNode(v);
        nodes.push_back(tmp);
        if (nodes[l/2]->left) nodes[l/2]->right = tmp;
        else nodes[l/2]->left = tmp;
        cout << l << " " << l/2 << " ";
        return nodes[l/2]->val;
    }
    
    TreeNode* get_root() {
        return nodes[0];
    }
};

/**
 * Your CBTInserter object will be instantiated and called as such:
 * CBTInserter* obj = new CBTInserter(root);
 * int param_1 = obj->insert(v);
 * TreeNode* param_2 = obj->get_root();
 */