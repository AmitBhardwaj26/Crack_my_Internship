// link: https://leetcode.com/problems/maximum-product-of-three-numbers/

// answer is either a[n-1]*an[n-2]*a[n-3] or a[n-1]* a[0]* a[1]

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        long i=nums[n-1]*nums[n-2]*nums[n-3];
        long j=nums[0]* nums[1]*nums[n-1];
        return max(i,j);
    }
};