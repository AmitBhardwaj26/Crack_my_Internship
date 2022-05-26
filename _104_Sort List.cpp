//link: https://leetcode.com/problems/sort-list/

/**
// merge sort
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
    // Iterative merge sort
    void split(ListNode *head,ListNode **a,ListNode **b)
    {
        ListNode *slow=head, *fast=head->next;
        while(fast)
        {
            fast=fast->next;
            if(fast)
            {
                fast=fast->next;
                slow=slow->next;
            }
        }
        *a=head, *b=slow->next ; slow->next=NULL;
    }
    
    ListNode* Merge(ListNode *a,ListNode *b)
    {
        if(!a) return b;
        else if(!b) return a;
        ListNode *t=NULL,*prev=NULL,*first=NULL;
       
        while(a && b)
        {    
          if(a->val<=b->val)  {t=a; a=a->next;}  
          else  {t=b; b=b->next;}  
            if(!first) first=t;
            if(prev ) prev->next=t;
            prev=t;
        }
        if(a ) t->next=a;
        if(b) t->next=b;
        return first;
    }
    
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        // top down merge sort
      ListNode * a=NULL,*b=NULL;
        split(head,&a ,&b);
        a=sortList(a); // as order may change
        b=sortList(b);
        return Merge(a,b); 
    }
};