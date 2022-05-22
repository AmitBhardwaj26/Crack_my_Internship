//link: https://leetcode.com/problems/excel-sheet-column-title/

// check for the case when cn % 26 ==0 i.e 26,52 substract 1 solve "y" comes +1 while inserting; 

class Solution {
public:
    string convertToTitle(int cn) {
       string ans="";
        int check=0;
        while(cn)
        {
             if(cn%26==0) {check=1;cn--;}
            int x=cn%26;
            ans=char('A'+x-1+check)+ans;
            cn=cn/26;
           check=0;
        }
        
        return ans;
    }
};