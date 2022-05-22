// link: https://leetcode.com/problems/middle-of-the-linked-list/

/*
1: simple length based l/2 then travesed
2: using fast and slow pointer
*/

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow, *fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};



// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         int l=0;
//         ListNode *t=head;
//         while(t) {t=t->next; l++;}
//         l=l/2;
//         while(l--){ head=head->next; }
//         return head;
//     }
// };