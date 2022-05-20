//link: https://leetcode.com/problems/largest-rectangle-in-histogram/ 


/*
  naive approch at each height we move left ,right to find the less guy O(N^2)
  2: tc O(n) , sc 3*O(n) using left array stores the left less height finded using stack, right array and substract (right -left +1)* a[i];
  3: best tc O(n) sc= O(n) stack at each point stack stores incresing manner when less comes then we get the bounderies 
*/

// 2nd
// class Solution {
// public:
//     int largestRectangleArea(vector<int>& heights) {
//         stack<int> st; int n=heights.size();
//         int left[n+1],right[n+1];
//         for(int i=0;i<n;i++)
//         {
//             while(!st.empty() && heights[st.top()] >= heights[i]  ) st.pop();
//             if(st.empty()) left[i]=-1;
//             else {left[i]=st.top() ;   }
//             st.push(i);
//             cout<<left[i]<<" ";
//         }
//         cout<<endl;
//        while(!st.empty()) st.pop();
//         for(int i=n-1;i>=0;i--)
//         {
//             while(!st.empty() && heights[st.top()] >= heights[i]  ) st.pop();
//             if(st.empty()) right[i]=n-1;
//             else { right[i]=st.top()-1;   }
//             st.push(i);
          
//         }
        
//           int ans=0;
//         for(int i=0;i<n;i++)
//         {
//               cout<<right[i]<<" ";
//             ans=max(ans,(right[i]-left[i])*heights[i]);
//         }
//         cout<<ans<<endl;

//         return ans;
        
//     }
// };


class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
      int n=heights.size();
       stack<int> st; // single stack
        int ans=0;
        for(int i=0;i<n;i++)
        {
          if(st.empty()) st.push(i);
          else 
            {
                while(!st.empty() && heights[i]<heights[st.top()] ) 
                {
                    int x= st.top(); st.pop(); 
                  if(!st.empty())   // pop we get the bounderies stack element , new element
                  {
                       int z=(i-st.top()-1)* heights[x];
                      ans=max(ans,z);
                  }   
                    else  ans=max(ans, (i+1-1)* heights[x]); // stack is empty use -1
                }
            }
             st.push(i);
        }
            // check the answer in remaning elements of the stack        
            while(!st.empty())
            {
                 int x= st.top(); st.pop(); 
                  if(!st.empty()) 
                  {
                       int z=(n-st.top()-1)* heights[x];
                      ans=max(ans,z);
                  }   
                    else  ans=max(ans, (n+1-1)* heights[x]);
                
            }
        
        return ans;
    }
};














// class Solution {
// public:
//     int largestRectangleArea(vector<int>& heights) {
//         int n = heights.size();
//         int max_area = 0;
//         stack<pair<int,int>> s;
//         for(int i=0; i<n; i++){
//             int start = i;
//             while(!s.empty() and s.top().second > heights[i]){
//                 int index = s.top().first;
//                 int height = s.top().second;
//                 s.pop();
//                 max_area = max(max_area, (i - index)*height);
//                 start = index;
//             }
//             s.push({start, heights[i]});
//         }
//         while(!s.empty()){
//             max_area = max(max_area, s.top().second * (n-s.top().first));
//             s.pop();
//         }
//         return max_area;
//     }
// };