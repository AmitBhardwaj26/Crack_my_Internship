// link: https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        int i=0,j=s.size()-1;
        while(i<j)
        {
            if(s[i++]!=s[j--]) return 0;
        }
        return 1;
    }
};

// class Solution {
// public:
//     bool isPalindrome(int x) {
//      string s=to_string(x),s1;
//         s1=s;
//         reverse(s.begin(),s.end());
//         if(s==s1) return true; else return false;
//     }
// };