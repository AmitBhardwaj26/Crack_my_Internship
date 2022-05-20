//Link: https://leetcode.com/problems/3sum/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size(); //size of array
        if(n<2) return {}; // less than 3 elements return null;
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int i=0;
        while(i<n-1)
        {
            if(i>0 && nums[i]==nums[i-1]) {i++; continue;}
            int j=i+1, k=n-1;
            
            while(j<k)
            {
               
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0) ans.push_back({nums[i],nums[j++],nums[k--]}); 
                else if(sum>0) k--;
                else j++;
                while(k<n-1 && k>0 && nums[k] == nums[k+1]) k--;  //[0,0,0,0,0,0,0] test case
            }
            i++;
        }
        return ans;
    }
};