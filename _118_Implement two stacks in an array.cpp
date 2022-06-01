//link:https://practice.geeksforgeeks.org/problems/implement-two-stacks-in-an-array/1/

int arr[202]={0};

void twoStacks :: push1(int x)
{
    arr[++top1]=x;
}
   
//Function to push an integer into the stack2.
void twoStacks ::push2(int x)
{
    arr[--size]=x;
}
   
//Function to remove an element from top of the stack1.
int twoStacks ::pop1()
{
    if(top1==-1)
        return -1;
    return arr[top1--];
}

//Function to remove an element from top of the stack2.
int twoStacks :: pop2()
{
    if(size==100)
        return -1;
     return arr[size++];
}