//link:https://leetcode.com/problems/remove-duplicates-from-sorted-array/

/* 1:- naive approch is using hashset as it only stores unique elements
2: best approch is o(n) two pointer approch \
3: shortcut  nums.erase(unique(nums.begin(),nums.end()),nums.end());
        return nums.size();
        {
        Another interesting feature of this unique is that it does not changes the size of the container after deleting the elements, it just returns a pointer pointing to the new end of the container, and based upon that we have to erase the extra values
        
        }
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     int i=0;
        for(int j=0;j<nums.size();j++)
        {
            if(nums[i]!=nums[j]) 
            {
                i++;
                nums[i]=nums[j]; 
            }
        }
        return i+1;
    }
};

