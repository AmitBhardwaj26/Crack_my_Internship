//link: https://leetcode.com/problems/reorder-list/


class Solution {
public:
    void reorderList(ListNode* head) {
        vector<ListNode *> v; ListNode *t=head;
        
        while(t)
        {
            v.push_back(t); t=t->next;
        }
        int i=1,j=v.size()-1; t=head;
        while(i<=j)
        {
            t->next=v[j]; t=v[j]; j--;
            if(i<=j) {t->next=v[i]; t=v[i];i++;} 
        }
        t->next=NULL;
    }
};
