//link:https://leetcode.com/problems/daily-temperatures/

/*
using stack
using O(1) space
*/

// class Solution {
// public:
//     vector<int> dailyTemperatures(vector<int>& temp) {
//         int n=temp.size();
//         stack<int> st;
//         vector<int> ans(n,0);
//         for(int i=n-1;i>=0;i--)
//         {
//             if(st.empty()) { st.push(i);  }
//             else 
//             {
//                 while(!st.empty() and temp[st.top()]<=temp[i] ) st.pop();
//                 if(!st.empty())  ans[i]=st.top()-i;
//                 st.push(i);
//             }
//         }
//             return ans;
//     }
// };


//
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n=temp.size();
        vector<int> ans(n,0);
        for(int i=n-1;i>=0;i--)
        {
            int j=i+1; bool check=1;
            while(j<n and temp[i]>=temp[j] ) 
            {
                if(ans[j]==0) {ans[i]=0; check=0; break;}
                j=ans[j]+j;  
            }
            if(j<n and check) ans[i]=j-i; 
        }
        return ans;
    }
};
