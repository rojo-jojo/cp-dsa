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
        ListNode *temp = head, *slow = head, *fast = head;
        int count = 0;
        if (head == NULL) return head;
        slow = temp;
        while (count < n) {
            fast = fast -> next;
            count++;
        }

        if (fast == NULL) return head -> next;

        
        // cout << total << ", " << total-n+1;
        while (fast->next != NULL) {
            fast = fast -> next;
            slow = slow -> next;
        }
        slow -> next = slow -> next -> next;
        return head;
    }
};