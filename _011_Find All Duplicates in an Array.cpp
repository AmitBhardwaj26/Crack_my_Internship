//link : https://leetcode.com/problems/find-all-duplicates-in-an-array/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int> v;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
          
            if(nums[abs(nums[i])-1]<0) v.push_back(abs(nums[i]));
            else 
            {
                nums[abs(nums[i])-1]*=(-1);
            }
        }
        return v;
    }
};
