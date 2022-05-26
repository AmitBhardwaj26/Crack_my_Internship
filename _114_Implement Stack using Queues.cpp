// link:https://leetcode.com/problems/implement-stack-using-queues/

/*
method 1
queue<int> q1,q2;
1: push x to q1
2: q1->q2(element by element)
3: swap(q1 ,q2);

method 2
1: one q;
2: push(x)
3: if size==n; pop n-1 elements and poush again into the queue
*/

class MyStack {
public:
    queue<int> q1;
    int Top=0;
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x); Top=x;
    }
    
    int pop() {
        queue<int> q2;
        while(q1.size()!=1)
        {
            int x=q1.front(); q1.pop();
            q2.push(x);
            Top=x;
        }
        int x=q1.front(); q1.pop(); q1=q2; return x;
    }
    
    int top() {
       return Top;
    }
    
    bool empty() {
        if(q1.size()==0) return 1;
        else return 0;
    }
};
