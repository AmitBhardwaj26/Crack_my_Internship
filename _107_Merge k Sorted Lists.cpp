// link: https://leetcode.com/problems/merge-k-sorted-lists/

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

    void insert(ListNode *head , ListNode *temp )
    {
        cout<<temp->val<<" ";
          ListNode *t=head,*p=NULL;
        if(!head || head->val>temp->val) 
        {temp->next=head; head=temp;}
        else
        {
            while(t && t->val<=temp->val)
            {
              p=t;   t=t->next;
            }
            
           if(p) p->next=temp; temp->next=t;
        }
    }
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *head=NULL;
        
        for(int  i=0;i<lists.size();i++)
        {
            ListNode *t=lists[i],*p=NULL;
            while(t)
            {
                p=t->next;
                if(head && head->val>=t->val) 
                {t->next=head; head=t;}
                else if(head==NULL) 
                {head=t; t->next=NULL; cout<<head->val<<" ";} 
                else insert(head,t);
                
                t=p;
            }
        }
        return head;
    }
};