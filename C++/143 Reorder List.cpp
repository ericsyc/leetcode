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
    void reorderList(ListNode* head) {
        if (head == nullptr) return;
        stack<ListNode*> s;
        ListNode* curr = head;
        while (curr != nullptr) {
            s.push(curr);
            curr = curr->next;
        }
        curr = head;
        ListNode* tmp = s.top();
        s.pop();
        while (curr->next != tmp && curr != tmp) {
            ListNode* prev = curr;
            curr = curr->next;
            prev->next = tmp;
            tmp->next = curr;
            tmp = s.top();
            s.pop();
        }
        tmp->next = nullptr;
    }
};