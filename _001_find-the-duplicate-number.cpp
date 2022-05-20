//link: https://leetcode.com/problems/find-the-duplicate-number/


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      // fast move by 2 step where slow move by one step 
       // floyd's tortoise and hare
        int fast=nums[0]; //intialise 
        int slow=nums[0];
        do
        {
            slow=nums[slow];  // move by 1
            fast=nums[nums[fast]];  // move by 2
        }
        while(slow!=fast);
        
        fast=nums[0];   
        while(slow!=fast)
        {
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
};


// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int ans = 0;
//         for(int i=0;i<nums.size();i++){
//             int val = nums[i];
//             if(val < 0) val *= -1;
//             if(nums[val] < 0){
//                 ans = val;
//             }else
//             nums[val] = -1*nums[val];
//         }
//         return ans;
//     }
// };



