// link: https://leetcode.com/problems/reverse-integer/

class Solution {
public:
    int reverse(int x) {
        bool pos=false;
        if(x<0) {pos=true;}
        long p=x,q=0;
        while(p)
        {
            q=q*10 +p%10;
            p=p/10;
            
        }
        if(pos) p=-1*q;
        if(q>INT_MAX || q<INT_MIN){ return 0;}
        else return q;
        
    }
};

// class Solution {
// public:
//     int reverse(int x) {
//         bool pos=0;
//         if(x<0) { pos=1; x*=(-1); }
//         string s=to_string(x);
//         reverse(s.begin(), s.end());
//         long ans=ltoi(s);
//         if(pos) ans*=-1;
//         if(ans>INT_MAX || ans<INT_MIN) return 0;
//         return ans;
        
//     }
// };