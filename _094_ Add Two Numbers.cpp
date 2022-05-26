// link:https://leetcode.com/problems/add-two-numbers/

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
    
       ListNode *p=NULL,*first=NULL;; 
          ListNode *a=l1 , *b=l2;
        int x,y,rem=0,ne=0; int z=0;
        while(a||b)
        {
            if(a){ x=a->val; a=a->next;} else x=0;
            if(b){ y=b->val; b=b->next;} else y=0;
            z=x+y+ne;
            
            rem=(z%10);
            ne=(z/10);            
           cout<<rem<<" ";
           ListNode *t;
           t=new ListNode(1);
            t->val=rem ; t->next=NULL;
            
          if(first==NULL) {p=t; first=t;}
          else   {p->next=t; p=t;}
            
             
        }
        if(ne>0){ListNode *t;
           t=new ListNode(1);
            t->val=ne ; t->next=NULL;
            
          if(first==NULL) {p=t; first=t;}
          else   {p->next=t; p=t;}
           } 
        return first;
    }
};
