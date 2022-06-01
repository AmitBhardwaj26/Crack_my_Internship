//link:https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/

/*
using vector stack
use vector<char,int> use the count and increment it if count==k pop_back k elements 
*/



class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char,int>> v;
        // push char and count in stack if count==k pop() k elements 
        int count=0,y=0;
        for(int i=0;i<s.size();i++)
        {
            if( v.size()>0 )
            {
                char tp=v.back().first;
                count=v.back().second;
                
                if( s[i]==tp ) count++;
                else count=1;
             }
            else count=1;
            v.push_back({s[i],count});
       
            if(count==k)
            {
                int z=k;
                while(z--)  v.pop_back(); //pop top k elements
            }
        }
        string ans="";
        for(int i=0;i<v.size();i++)  ans+=v[i].first;
        return ans;
    }
};


// class Solution {
// public:
//     string removeDuplicates(string s, int k) {
//         stack<pair<char,int>> st;
//         // push char and count in stack if count==k pop() k elements 
//         int count=0,y=0;
//         for(int i=0;i<s.size();i++)
//         {
//             if( st.size()>0 )
//             {
//                 char tp=st.top().first;
//                 count=st.top().second;
                
//                 if( s[i]==tp ) x++;
//                 else count=1;
//              }
//             else count=1;
//             st.push({s[i],count});
       
//             if(x==k)
//             {
//                 int z=k;
//                 while(z--)   st.pop(); //pop top k elements
//             }
//         }
//         string ans="";
//         while(st.size() >0) { ans+=st.top().first; st.pop(); }
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
// };
