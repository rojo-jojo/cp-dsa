/*
Bruteforce approach
1. Start with head of first linkedlist and check it against 
every node of other linkedlist
2. If there is match return the pointer to the second list
3. Else increment the pointer of the second list
4. After we reach end of second LL set tempB to headB and headA = headA->next
*/

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *tempB = headB;
        while (headA != NULL) {
            while (tempB != NULL) {
                if (headA == tempB) {return tempB;}
                tempB = tempB-> next;
            }
            tempB = headB;
            headA = headA->next;
        }
        return NULL;
    }
};


/*
Optimal Approach
1. Point dummy1 and dummy2 to headA and headB respectively
2. Increment dummy1 and dummy2 by 1 step at a time together
3. If dummy1 == NULL then dummy1 = headB
4. Keep incrementing dummy1 and dummy2 till dummy2 == NULL, then dummy2 = headA
5. Now both pointers are equidistant from the intersection point.
6. Increment both by 1 at a time together and check if they are equal
5. If dummy2 == NULL, then do step 3 and 4 accordingly

*/

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *dummyA = headA, *dummyB = headB;
        if (headA == NULL || headB == NULL) return NULL;
        while (dummyA != dummyB) {
            dummyA = (dummyA == NULL) ? headB : dummyA->next;
            dummyB = (dummyB == NULL) ? headA : dummyB->next;
        }
        return dummyA;
    }
};

