// link: https://practice.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1#

class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
      Node *zero=NULL,*one=NULL,*sone=NULL,*two=NULL,*stwo=NULL,*t=head;
      while(t!=NULL)
      {
          if(t->data==0)
          {
              if(!zero) { head=t; zero=t; } 
              else { zero->next=t; zero=t; }
          }
          
          else if(t->data==1 )  
          {
              if(!one) {sone=t; one=t;} 
              else { one->next=t; one=t; }
          }
          else if(t->data==2)
          {
              if(!two) { stwo=t; two=t; } 
              else { two->next=t; two=t; }
          }
          t=t->next;
      }
       if(zero && sone ) zero->next=sone;
       else if(zero && stwo) zero->next=stwo;
       else if(sone) head=sone;
       else if(stwo)  head=stwo;
        
       if(one ) one->next=stwo;
    
       
       if(two) two->next= NULL;
        return head;
    }
};