// link: https://leetcode.com/problems/add-binary/

// easy and striaght forward using sum==3, 2, 1, 0 and two pointers

class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.size()-1,j=b.size()-1;
        string ans=""; int carry=0;
        while(i>=0 && j>=0)
        {
            int x=a[i]-'0'; int y=b[j]-'0';
            if((x+y+carry)==3 ) {ans+='1'; carry=1;}
            else if((x+y+carry)==2) { ans+='0'; carry=1;}
            else if((x+y+carry)==1) { ans+='1'; carry=0;}
            else { ans+='0'; carry=0;}
            i--;j--;
        }
        while(i>=0)
        {
            int x=a[i]-'0';
             if((x+carry)==2) { ans+='0'; carry=1;}
            else if((x+carry)==1) { ans+='1'; carry=0;}
            else { ans+='0'; carry=0;}
            i--;
        }
        while(j>=0)
        {
            int y=b[j]-'0';
             if((y+carry)==2) { ans+='0'; carry=1;}
            else if((y+carry)==1) { ans+='1'; carry=0;}
            else { ans+='0'; carry=0;}
            j--;
        }
        if(carry==1) ans+='1';
         reverse(ans.begin(),ans.end());
        return ans;
    }
};