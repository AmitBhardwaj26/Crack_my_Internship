// link:https://leetcode.com/problems/reverse-nodes-in-k-group/

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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        ListNode *temp=head,*prev=head; int length=0;
        while(temp) {length++; temp=temp->next; } 
        int iteration =length/k;
        
        int loop=k;
        ListNode *p=NULL,*q=head, *r=head; 
            while(r && loop--)
            {
              p=q; q=r; r=r->next; q->next=p;
            }
        prev=head;
        head->next=r;
        head=q; iteration--;
        
        
      while(iteration--)
      {
          ListNode *t=r; loop=k;
          
         p=NULL;q=t; r=t; 
            while(r && loop--)
            {
              p=q; q=r; r=r->next; q->next=p;
            }
            prev->next=q; prev=t;
          
        }
        prev->next=r;
    
        return head;
        
    }
};