//link: https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
        
        stack<int> st; bool c=true;
        for(int i=0;i<(int)s.size();i++)
        {
            
            if( s[i]=='(' || s[i]=='[' || s[i]=='{')
             {   st.push(s[i]);}
            else 
            { 
                if(st.empty()) return false;
                char ch=st.top();
                
                if(s[i]==')') if(ch!='(') return false; else st.pop();
                else if(s[i]=='}') if(ch!='{') return false; else st.pop();
                else if(s[i]==']') if(ch!='[') return false; else st.pop();
                
            }
                
        }
        if(!st.empty()) return false;
        return true;
    }
};