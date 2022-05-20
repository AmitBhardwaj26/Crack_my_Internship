//link: https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/

// basic idea of this problem is remove the n-k elments from the array as they make continious substring using prefix sum

class Solution {
public:
    int maxScore(vector<int>& cp, int k) {
        
        int n=cp.size();
        long a[n]; a[0]=cp[0];
        for(int i=1;i<n;i++)    a[i]=a[i-1]+ cp[i];// prefix sum
        if(n==k) return a[n-1]; 
        
        int diff= n-k;
        
        long sum=a[z-1];
        for(int i=0,j=z;j<n;i++,j++)
            sum=min(sum,(a[j]-a[i]));
       
        return a[n-1]-sum;
        
    }
};