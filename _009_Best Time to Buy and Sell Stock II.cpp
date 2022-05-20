//link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/


// solution using stack
// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         stack<int> s;
//         int ans=0;
//         int z=0;
       
//         for(int i=0;i<prices.size();i++)
//         {
//             if(s.empty() )  s.push(prices[i]);
//             else 
//             {
//                  if(s.top()<prices[i] )
//                  {
//                      s.push(prices[i]);
//                   }
//               else 
//               {
//                   int x=s.top(),y;
//                   while(!s.empty()) { y=s.top(); s.pop();}
//                   ans+=x-y;
//                   s.push(prices[i]);
//                }
//             }
//         }
//         if(!s.empty())
//         {       
//                   int x=s.top(),y;
//                    while(!s.empty()) { y=s.top(); s.pop();}
//                   ans+=x-y;
//         }
//         return ans;
//     }
// };
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, n = prices.size();
        
        for (int i=1; i<n; ++i) {
            if(prices[i] > prices[i-1])
                profit += prices[i]-prices[i-1];
        }
        
        return profit;
    }
};