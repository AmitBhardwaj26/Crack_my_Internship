//link: https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/

/*
 1: simple comperision that we do in math
 2: using bit manipulation string s=101011 convert into integer 
 int ans=0; ans=(ans<<1)|s[i]; gives the ans;  
*/


class Solution {
public:
    int getDecimalValue(ListNode* head) {
      int ans=0;
        while(head)
        {ans=(ans<<1)| head->val; head=head->next; }
        return ans;
    }
};




// class Solution {
// public:
//     int getDecimalValue(ListNode* head) {
//        vector<int> v;
//         while(head)
//         {
//             v.push_back(head->val);
//            head= head->next;
//         }
//         reverse(v.begin(),v.end());
//         int ans=0;
//         for(int i=0;i<v.size();i++)
//         {
//             ans+=v[i]*pow(2,i);
//         }
//         return ans;
//     }
// };