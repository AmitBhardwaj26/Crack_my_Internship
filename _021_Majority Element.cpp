link: https://leetcode.com/problems/majority-element/
// naive approach is to use hash map and check count>n/2
//moore voting algorithm

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0,count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(count==0) c=nums[i];
            if(c==nums[i]) count++;
            else count--;
        }
        return c;
    }
};