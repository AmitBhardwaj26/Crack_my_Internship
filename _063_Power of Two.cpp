//link: https://leetcode.com/problems/power-of-two/

class Solution {
public:
    bool isPowerOfTwo(double n) {
      /* //1:
        if(n==0) return 0;
        double x= log2(n); 
        if(ceil(x)==x) return 1;
        return 0;
        */
     /* //2:
        if(n<=0) return false;
    
        if((n & (n-1))==0) return true;
        else return false;
      
     /*
        
        /* 3
         for(int i = 0; i < 31 ; i++){
            
            int ans = pow(2,i);
            if (ans == n){
                return true;
            }
        }
        return false;
            
        
        */
    }
};