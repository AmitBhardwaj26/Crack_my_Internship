//link: https://leetcode.com/problems/remove-duplicates-from-sorted-list/

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
    ListNode* deleteDuplicates(ListNode* head) {
    ListNode *t=head,*p=NULL,*q=NULL;
        if(!t) return head;
p=t; if(t->next) t=t->next;
while(t)
{
    if(t->val==p->val)
    {
        p->next=t->next;
        q=t;t=t->next;
        //free(q);
    }
    else { p=t;t=t->next;}
}
return head;
        
    }
};