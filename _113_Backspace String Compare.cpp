//link:https://leetcode.com/problems/backspace-string-compare/

// using stack space complexity O(n+m)
// class Solution {
// public:
//     bool backspaceCompare(string s, string t) {
//         stack<int> s1,s2;
//         for(int i=0; i<s.size(); i++)
//         {
//             if(s[i]!='#') s1.push(s[i]);
//             else if(!s1.empty()) s1.pop();
//         }
//         s=""; 
//         //while(!s1.empty()) {s+=s1.top(); s1.pop(); }
//         for(int i=0; i<t.size();i++)
//         {
//             if(t[i]!='#'  ) s2.push(t[i]);
//             else if(!s2.empty()) s2.pop();
//         }
//         t="";
//         //while(!s2.empty()) {t+=s2.top(); s2.pop(); }
//         if(s1==s2) return 1;
//         return 0;
//     }
// };

// using 2 pointer space =O(1)
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i=0;
        while(i<s.size())
        {
            if(s[i]=='#' && i>0) 
            {
                s.erase(s.begin()+i-1,s.begin()+i+1);
                i=i-1;
            }
            else if(s[i]=='#' && i==0)
            {
                s.erase(s.begin()+i,s.begin()+i+1);
            }
           else  i++;
        }
       i=0;
        while(i<t.size())
        {
            if(t[i]=='#' && i>0)
            {
                t.erase(t.begin()+i-1,t.begin()+i+1);
                i=i-1;
            }
            else if(t[i]=='#' && i==0)
            {
                t.erase(t.begin()+i,t.begin()+i+1);
            }
            else i++;
        }
        cout<<s<<" "<<t<<"\n";
        if(s==t) return true;
        return 0;
    }
};