//link: https://leetcode.com/problems/reverse-linked-list-ii/

/*
case 1 left == right return head;
case 2 left ==1 head pointer will be changed
case 3 lest and right both is in middle
*/


class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *p=NULL,*q=head,*r=head;
        if(left==right) return head;
        if(left==1)
        {
                while(r && right--)
            {
              p=q; q=r; r=r->next; q->next=p;
            }
            
            head->next= r;
             return q;
        
        }
        else 
        {
            right=right-left+1;
            ListNode *first=NULL,*t=head;
            left--;
            while(t && left--)
            {
                first=t; t=t->next;
            }
            p=NULL;q=t;r=t; 
            while(r && right--)
            {
              p=q; q=r; r=r->next; q->next=p;
            }
            
             if(first) first->next= q;
             if(t) t->next=r;
             return head;
        
        }
        return NULL;
         }
    
};


//  ListNode *p=NULL,*q=NULL, *r=head;
//         do
//         {p=q; q=head; head=head->next; q->next=p;}
//         while(head->val!=right);
//         return q;
//     }
    
//     ListNode* reverseBetween(ListNode* head, int left, int right) {
//         ListNode *t=head,*p=NULL,*q=NULL;
//         if(left==1) 
//         {
//           while(t)
//            {
//             right--;
//             if(t->val==right) q=t;
//             t=t->next;
//            }
            
//         }
//         while(t)
//         {
//             left--; right--;
//             if(left==0 ) p=t;
//             if(t->val==right) q=t;
            
//             t=t->next;
//         }