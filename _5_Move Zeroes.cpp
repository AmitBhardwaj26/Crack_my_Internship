// Link:- https://leetcode.com/problems/move-zeroes/


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0,n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                int temp=nums[i]; nums[i]=nums[j]; nums[j]=temp;
                j++;
            }
        }
    }
};