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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0, value;

        ListNode* dummy = new ListNode(), *temp = dummy;
        while (l1 != NULL || l2 != NULL || carry) {
            value = 0;
            if (l1 != NULL) {
                value += l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL) {
                value += l2->val;
                l2 = l2->next;
            }
            value += carry;
            carry = value / 10;
            value %= 10;
            ListNode *node= new ListNode(value) ;
            temp -> next = node;
            temp = temp -> next;
        }
        return dummy->next;
    }
};

