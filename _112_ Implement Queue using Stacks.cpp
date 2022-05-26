//link: https://leetcode.com/problems/implement-queue-using-stacks/

/*
push take order(1) time
take two stack s1,s2;
while taking the top or while poping check in satck 2;
if empty take O(n) time 
whole take O(1) amortised  time complexity
*/

class MyQueue {
public:
    stack<int> s1,s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        if(s1.empty()&& s2.empty()) return -1;
        if(s2.empty()) 
        {
          while(!s1.empty())
          { s2.push(s1.top()); s1.pop();}
        }
         
        int t= s2.top(); s2.pop(); 
        return t;
    }
    
    int peek() {
        if(s2.empty()&& s1.empty()) return -1;
        if(s2.empty())
        {
           while(!s1.empty())
           { s2.push(s1.top()); s1.pop();}        
        }
        return s2.top();
    }
    
    bool empty() {
        if(s2.empty()&& s1.empty()) return true;
         return false;
    }
};

