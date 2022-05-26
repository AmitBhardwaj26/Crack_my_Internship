//link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/

/*
find length then  l-n-1 then move that distance and delete that node 
*/

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* t=head; int l=0;
    
        while(t) { l++;t=t->next;} 
        if(l==1 && n==1) return NULL;
        else if(l==n) return head->next;
        t=head; l=l-n-1; 
        while(l--) {t=t->next;} t->next=t->next->next;
        return head;
    }
};