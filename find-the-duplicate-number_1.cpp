//link: https://leetcode.com/problems/find-the-duplicate-number/


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            int val = nums[i];
            if(val < 0) val *= -1;
            if(nums[val] < 0){
                ans = val;
            }else
            nums[val] = -1*nums[val];
        }
        return ans;
    }
};
