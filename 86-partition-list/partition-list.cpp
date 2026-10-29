/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        
        ListNode* tempS = new ListNode(0);
        ListNode* tempL = new ListNode(0);

        ListNode* S = tempS;
        ListNode* L = tempL;
        ListNode* C = head;

        while (C != nullptr) {

            if (C->val < x) {
                S->next = C;
                S = S->next;
            }
            else {
                L->next = C;
                L = L->next;
            }

            C = C->next;

        }

        L->next = nullptr;
        S->next = tempL->next;

        return tempS->next;

    }
};