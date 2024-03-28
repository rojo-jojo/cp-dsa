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
    bool hasCycle(ListNode *head) {
        if (head == NULL || head->next == NULL) return false;

        ListNode *slow = head, *fast = head;
        bool possibleCycle = false;
        while (fast->next != NULL && fast->next->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
            if (slow == fast) {
                possibleCycle = true;
                break;
            }

        }

        cout << "possible cycle?" << possibleCycle << endl;

        fast = head;
        while (possibleCycle) {
            if (slow == fast) return true;
            slow = slow->next;
            fast = fast->next;
        }
        return false;
    }
};