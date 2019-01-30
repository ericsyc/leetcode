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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head) return head;
        ListNode* curr = head;
        int l = 1;
        while (curr->next != nullptr) {
            curr = curr->next;
            l++;
        }
        curr->next = head;
        k %= l;
        ListNode* t = head;
        for (int i = 1; i < l - k; i++) {
            t = t->next;
        }
        ListNode* tmp = t->next;
        t->next = nullptr;
        return tmp;
    }
};