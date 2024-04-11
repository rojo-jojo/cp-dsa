
class Solution {
public:

    ListNode* reverseList(ListNode* head, ListNode* endList) {
        ListNode *temp = head, *prev = NULL;
        while (temp->next != endList) {
            ListNode *front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;

    }

    ListNode* getKthNode(ListNode* head, int k) {
        ListNode* temp = head;
        while (k--) {
            if (temp == NULL) return temp;
            temp = temp -> next;
        }
        return temp;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *newHead = head;
        ListNode *newEnd = NULL, *finalList = head;
        while (true) {
            newEnd = getKthNode(newHead, k);
            if (newEnd == NULL) finalList->next = newHead;
            finalList = reverseList(newHead, newEnd);
            newHead = newEnd->next;
            
            
        }

        return finalList;
    }
};