// link: https://leetcode.com/problems/minimum-moves-to-equal-array-elements/

/*  z+=nums[i]-nums[i-1]; ans+=z; because in in case we hold a number i.e just greater than than min number then next untill all number becomes equal 
2:-find minimum element and substract with each one 
*/


// class Solution {
// public:
//     int minMoves(vector<int>& nums) {
//         int ans=0,z=0;
//         sort(nums.begin(),nums.end());
//         for(int i=1;i<nums.size();i++)
//         {
//             z+=nums[i]-nums[i-1];
//             ans+=z;
//         }
//         return ans;
//     }
// };


class Solution {
public:
    int minMoves(vector<int>& nums) {
         int m=*min_element(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            ans+=abs(nums[i]-m);
        }
        return ans;
    }
};



