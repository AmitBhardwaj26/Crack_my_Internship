//link: https://leetcode.com/problems/valid-palindrome-ii/

class Solution {
public:
    
    bool validPalindrome(string s) {
        int i=0,j=s.size()-1;
        int x=0;
        if(s.size()==1) return true;
        bool c1=true,c2=true;
        while(i<j)
        {
            if(s[i]==s[j]) {i++,j--;}
            else 
            {
                if(s[i]==s[j-1]) j--,x++;
                else {
                    //cout<<s[i]<<"\n"<<i<<"\n"; 
                     c1=false; break;}
                    if(x>1) {c1=0; break;}
            }
        }
        i=0,j=s.size()-1,x=0;
         while(i<j)
        {
            if(s[i]==s[j]) {i++,j--;}
            else 
            {
                if(s[i+1]==s[j]) i++,x++;
                else {
                    //cout<<s[i]<<"\n"<<i<<"\n";
                    c2=false; break;}
                    if(x>1) {c2=0; break;}
            }
        }
        if(c1==0 && c2==0) return 0;
        return true;
    }
};