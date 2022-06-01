//link: https://leetcode.com/problems/evaluate-reverse-polish-notation/https://leetcode.com/problems/evaluate-reverse-polish-notation/

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st; 
        
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]=="+" || //check token[i]== +, - ,/ ,*
               tokens[i]=="-" || 
               tokens[i]=="*" || 
               tokens[i]=="/")  
            { 
                char c=tokens[i][0];
                int a=st.top(); st.pop();
                int b=st.top(); st.pop();
                switch(c)
                {
                    case '+': st.push(b+a); break;
                    case '-': st.push(b-a); break;
                    case '*': st.push(b*a); break;
                    case '/': st.push(b/a); break;
                }
            }
            else  st.push(stoi(tokens[i]));  
            
        }
        return st.top();
    }
};
