// link: https://leetcode.com/problems/missing-number/

/*
1: brute force sort and compare , return 
2: using xor nums=3;  ans=0^0^1^1^2^3^3 =2 i.e xor of same elements is 0;
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size(),ans=n;
        for(int i=0;i<n;i++)
        {
            ans^=i^nums[i];
        }
        return ans;
    }
};

// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<nums.size();i++)
//         {
//             if(i!=nums[i]) return i;
//         }
//         return nums.size();
//     }
// };