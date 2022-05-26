// link: https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/

/**
using 3 pointer

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
        if(head && head->next==NULL){ return head;}
        ListNode *p=head,*q=head,*r=NULL,*t=NULL;
        if(p) p=p->next; head=NULL;
        while(p)
        {
            if(r==NULL && q->val!=p->val)
            {
                if(!t){head=q;t=q;}
             else {t->next=q;t=q;}
            }
            else if(r!=NULL && r->val!=q->val && q->val!=p->val) 
            {
                if(t==NULL){head=q;t=q;} 
                else {t->next=q; t=q;}
            }
            r=q;q=p;p=p->next;
        }
        if(q!=NULL && r!=NULL && q->val!=r->val) 
        {
            if(!t)  {head=q;t=q;} 
            else    {t->next=q;t=q;}
        }
        if(t) t->next=NULL;
        return head;
    }
};