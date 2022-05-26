// link: https://practice.geeksforgeeks.org/problems/segregate-even-and-odd-nodes-in-a-linked-list5035/1#

class Solution{
public:
    Node* divide(int N, Node *head){
        Node *odd=NULL, *even =NULL, *t=head,*sodd=NULL;
        while(t)
        {
            if(t->data%2==0) 
            {
                if(!even) {head=t; even =t; }
                else { even->next=t; even =t;  }
            }
            else 
            {
                if(!odd) { sodd=t; odd=t; }
                else { odd->next=t; odd=t; }
            }
            t=t->next;
        }
        if(even) even->next=sodd;
        if(odd) odd->next=NULL;
        return head;
    }
};