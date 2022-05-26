// link: https://leetcode.com/problems/remove-linked-list-elements/


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
    ListNode* removeElements(ListNode* head, int val) {
        struct ListNode *t= head,*p=t;
        
        while(t)
        {
            
            if(t->val==val) p->next=t->next; 
            else p=t;
            t=t->next;   
        }
         if(head&& head->val==val)  head=head->next; 
      
        return head;
    }
};