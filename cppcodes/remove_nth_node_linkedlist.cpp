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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp = head, *prev = NULL;
        long long count = 0, total = 0;
        if (head == NULL) return head;

        while (temp != NULL) {
            temp = temp->next;
            total++;
        }

        if  ((total-n+1) == 1) {
            head = head -> next;
            return head;
        }
        temp = head;
        cout << total << ", " << total-n+1;
        while (temp != NULL) {
            count++;
            if (count == (total-n+1)) {
                prev->next = prev->next->next;
                delete temp;
                break;
            }
            prev = temp;
            temp = temp -> next;
        }
        return head;
    }
};