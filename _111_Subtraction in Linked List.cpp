//link: https://practice.geeksforgeeks.org/problems/subtraction-in-linked-list/1/#


int Length(Node *a)
{
    int l=0;
    while(a) {l++; a=a->next; }
    return l;
}

Node* Greater(Node* a ,Node * b)
{
    Node* ha=a, *hb=b;  // stores starting of a and b
    int l1=Length(a), l2=Length(b);
    if(l1==l2) // when length is not equal
    {
        Node *t1=a,*t2=b;
        while(a && b) 
        {
            if(a->data==b->data)
            { a=a->next; b=b->next; }
            else if(a->data!=b->data) return ((a->data>b->data) ? ha: hb);
        }
    }
    return l1>l2? ha:hb; //return max linked list whom which we can subtract 
}

Node* Reverse(Node* a) // reverse the linked list
{
    Node *p=a,*q=NULL,*r=NULL;
    while(p)
    {
        r=q; q=p; p=p->next; q->next=r;
    }
    return q;
}

void Print(Node *t) // for just checking
{
    while(t)
    { cout<<t->data<<" "; t=t->next; }
    cout<<endl;
}

Node* subLinkedList(Node* l1, Node* l2)
{
     while(l1 && l1->data==0) l1=l1->next; // remove 0s from starting
     while(l2 && l2->data==0) l2=l2->next; // remove 0s from starting 
     if(l1==NULL && l2) return l2;
     if(l2==NULL && l1) return l1;
    
    Node *a=Greater(l1,l2); // a stores the linked list of higher size
    Node *b= ((a==l1) ? l2: l1), *ans=NULL;
    
    // Print(a);
    // Print(b);
    
    a= Reverse(a);
    b=Reverse(b);
    
    // Print(a);
    // Print(b);
    
    int load=0;
    while(b)
    {
        int x=a->data-load, y=b->data;
        //cout<<x<< " "<<y<<endl;
        load=0;
        if(x>=0 && x==y) a->data=0;
        else if(x>=0 and x>y) a->data=x-y;
        else 
        {
            load=1;
            a->data=x+10-y;
           // cout<<a->data<<endl;
        }
        if(!ans) ans=a;
        a=a->next; b=b->next;
    }
    while(a && load==1 )
    {
        if(a->data==0) 
            a->data =9;
        else 
        {a->data-=1 ; break;}
        a=a->next;
    }
    
    //Print(ans);
    ans=Reverse(ans);
    
    while(ans and ans->data==0 and ans->next) ans=ans->next; // remove 0s
    
    return ans;
}