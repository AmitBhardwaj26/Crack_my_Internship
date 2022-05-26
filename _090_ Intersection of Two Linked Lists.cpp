//link: https://leetcode.com/problems/intersection-of-two-linked-lists/

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *l1=headA, *l2=headB;
        bool check=false; int x=0;
        while(l1)
        {
            if(check) return 0;
            if(l1==l2) return l1;
            
            l1=l1->next; if(!l1) {l1=headB; x++; if(x>1) check=true;}
            l2=l2->next; if(!l2) l2=headA;
            if(l1==l2) return l1;
            
        }
        
        
       return 0;

    }  
};