// link: https://leetcode.com/problems/partition-list/


/**
two pointer approch
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
    ListNode* partition(ListNode* head, int x) {
        ListNode *z=nullptr,*p=NULL,*q=NULL,*t=head;
        while(t)
        {
            if(abs(t->val) < abs(x)) 
            { 
                if(!q) {q=t; head=t;} 
                else {q->next=t; q=t;}
            }
            else if(abs(t->val) >= abs(x))
            {
                if(!p) {p=t;z=t;} 
                else {p->next=t;   p=t;}
            }
            t=t->next;
        }
        if(p ) p->next=NULL;
        if(q) q->next=z;
        return head;
    }
};