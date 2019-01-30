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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == nullptr || headB == nullptr) return nullptr;
        int la = 1, lb = 1;
        ListNode* curra = headA, *currb = headB;
        while (curra->next != nullptr) {
            curra = curra->next;
            la++;
        }
         while (currb->next != nullptr) {
            currb = currb->next;
            lb++;
        }
        curra = headA;
        currb = headB;
        if (la > lb) {
            while (la > lb) {
                curra = curra->next;
                la--;
            }
            while (curra != currb && curra->next && currb->next) {
                curra = curra->next;
                currb = currb->next;
            }
        }
        else {
            while (lb > la) {
                currb = currb->next;
                lb--;
            }
            while (curra != currb && curra->next && currb->next) {
                curra = curra->next;
                currb = currb->next;
            }
        }
        if (curra == currb) return curra;
        return nullptr;
    }
};