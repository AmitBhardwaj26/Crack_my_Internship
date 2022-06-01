//link:https://leetcode.com/problems/next-greater-element-i/

// using map and stack

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
     
        map<int,int> m; // for hashing
        stack<int> st;  // to find next greater element
        for(int i=nums2.size()-1;i>=0;i--) 
        {
            if(st.empty()) { m[nums2[i]]=-1; st.push(i); }
            else 
            {
                while(!st.empty() and nums2[i]>=nums2[st.top()])  st.pop();
                if(!st.empty()) { m[nums2[i]]=nums2[st.top()];  }
                else m[nums2[i]]=-1;
                st.push(i);
            }
        }
        vector<int> ans;
        for(int i=0;i<nums1.size();i++)    ans.push_back(m[nums1[i]]);
        
        return ans;
    }
};