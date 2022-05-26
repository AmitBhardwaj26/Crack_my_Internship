//link: https://leetcode.com/problems/linked-list-cycle/

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
        if(!head) return 0;
        ListNode *slow =head,*fast=head;
        while(fast->next && fast->next->next)
        {
            fast=fast->next->next;
            slow=slow->next;
            if(slow == fast) return 1;
        }
        return 0;
    }
};


// class Solution {
// public:
//     ListNode* deleteDuplicates(ListNode* head) {
//     ListNode *t=head,*p=NULL,*q=NULL;
//         if(!t) return head;
// p=t; if(t->next) t=t->next;
// while(t)
// {
//     if(t->val==p->val)
//     {
//         p->next=t->next;
//         q=t;t=t->next;
//         //free(q);
//     }
//     else { p=t;t=t->next;}
// }
// return head;
        
//     }
// };