// link: https://leetcode.com/problems/sort-colors/submissions/



class Solution {
public:
    void swap(int &a, int &b)
    {
        int temp=a; a=b; b=temp;
    }
    void sortColors(vector<int>& nums) {
        // dutch national flag algorithm
        int i=0,mid=0,j=nums.size()-1;
        while(mid<=j)
        {
            if(nums[mid]==0)
            {
                swap(nums[i],nums[mid]);
                i++; mid++;
            }
            else if(nums[mid]==1) mid++; // if 1 mid++
            else 
            {
                swap(nums[mid],nums[j]); 
                j--;
            }
        }
    
        }
};