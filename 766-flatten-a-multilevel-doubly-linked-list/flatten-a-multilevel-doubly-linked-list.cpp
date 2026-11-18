
class Solution {
public:
    Node* flatten(Node* head) {

        if (head == NULL) return head;

        Node* curr = head;

        while (curr != NULL) {

            if (curr->child != NULL) {

                Node* temp = curr->next;

                curr->next = flatten(curr->child);
                curr->child = NULL;

                curr->next->prev = curr;

                Node* tail = curr->next;

                while (tail->next != NULL) {
                    tail = tail->next;
                }

                if (temp != NULL) {
                    tail->next = temp;
                    temp->prev = tail;
                }
            }

            curr = curr->next;
        }

        return head;
    }
};
