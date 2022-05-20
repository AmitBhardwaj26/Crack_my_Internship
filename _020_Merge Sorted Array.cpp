// link:-https://leetcode.com/problems/merge-sorted-array/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=n-1;
        int j=m-1;
        int k=m+n-1;
        while(i>=0 and j>=0)
        {
            if(nums2[i]>=nums1[j]){
                nums1[k--]=nums2[i--];
            }
            else
            {
                nums1[k--]=nums1[j--];
            }
        }
        while(i>=0)
        {
            nums1[k--]=nums2[i--];

        }
        while(j>=0)
        {
            nums1[k--]=nums1[j--];

        }
        
    }
};

// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         vector<int> v(m+n);
//         int i=0,j=0,k=0;
//         while(i<m && j<n)
//         {
//             if(nums1[i]<nums2[j]) v[k++]=nums1[i++];
//             else  v[k++] = nums2[j++];
//         }
//         while(i<m)  v[k++]=nums1[i++];
//         while(j<n)  v[k++]=nums2[j++];
//         nums1.clear();
//         nums1=v;
//     }
// };

