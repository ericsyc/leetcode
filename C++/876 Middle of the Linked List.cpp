/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int l = 0;
        vector<ListNode*> nodes;
        ListNode* curr = head;
        while (curr != nullptr) {
            nodes.push_back(curr);
            curr = curr->next;
            l++;
        }
        return nodes[l/2];
    }
};