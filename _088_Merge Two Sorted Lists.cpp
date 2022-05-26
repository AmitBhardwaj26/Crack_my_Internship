// link: https://leetcode.com/problems/merge-two-sorted-lists/

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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
            
    ListNode *t1=l1,*t2=l2,*head=NULL;
 ListNode *t=NULL; 

        if(t1 && t2)
        {
if( t1->val<=t2->val) { head=t1 ; t1=t1->next;} else {head=t2; t2=t2->next; }
        }
        
            t=head;
 while(t1&&t2)
 {
    if(t1->val<=t2->val) { t->next=t1; t=t1; t1=t1->next; }
    else { t->next=t2; t=t2; t2=t2->next; }
 }
 if(t1) { if(head==NULL) head=t1; else t->next=t1;}
 if(t2) { if(head==NULL) head=t2; else t->next=t2;}
 
return head;
    }
};