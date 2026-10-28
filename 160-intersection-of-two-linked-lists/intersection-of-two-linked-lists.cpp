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

        ListNode* tA = headA;
        ListNode* tB = headB;

        int lenA = 1;
        int lenB = 1;

        while (tA -> next != nullptr) {
            tA = tA->next;
            lenA++;
        }
        while (tB -> next != nullptr) {
            tB = tB->next;
            lenB++;
        }

        if (lenA>lenB) {
            for (int i = 0; i<(lenA-lenB); i++) {
                headA = headA->next;
            }
        }
        if (lenA<lenB) {
            for (int i = 0; i<(lenB-lenA); i++) {
                headB = headB->next;
            }
        }

        tA = headA;
        tB = headB;

        while (tA != nullptr && tB != nullptr) {
            if (tA==tB) return tA;
            tA = tA->next;
            tB = tB->next;
        }

        return NULL;

    }
};