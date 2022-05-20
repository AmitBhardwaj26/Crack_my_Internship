//link:-https://leetcode.com/problems/4sum/

/*
naive approch = use three pointer + binary search to get time complaexity of O(N^3 logN)
use two pointer + two pointer first last 2sum to get time complexity of O(N^3)
*/

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, long target) {
        int n=nums.size();
        if(n<4) return {};// if size less than 4 return null;
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int i=0; //1st pointer
        while(i<n-3) 
        {
            int j=i+1; // 2nd ponter
            while(j<n-1)
            {
                int k=j+1,l=n-1; // internal pointer first and last
                while(k<l)
                {
                     long sum=nums[i]; sum+=nums[j]; sum+= nums[k]; sum+=nums[l]; // sum of 4 numbers overflow condition
                    if(sum==target) ans.push_back({nums[i],nums[j],nums[k++],nums[l--]});
                    else if(sum<target) k++;
                    else l--;
                    while(l<n-1 && l>=0 && nums[l]==nums[l+1]) l--;  // eliminate duplicates
                }
                j++;
                 while(j>i+1 && j<n && nums[j]==nums[j-1]) j++; // eliminate duplicates
            }
            i++;
            while(i>0 && i<n && nums[i]==nums[i-1]) i++; // eliminate duplicates
            
        }
        return ans;
    }
};
