//link:https://practice.geeksforgeeks.org/problems/maximum-of-minimum-for-every-window-size3453/1/#


/*
concept is at every point find left most just small element and rightmost small elements 
substract their index-1 means this length of subarray will gave the maximum element of that number
if any answer array has -1 means their must exists minimum element as answer of that length subarray
*/

class Solution
{
    public:
    //Function to find maximum of minimums of every window size.
    vector <int> maxOfMin(int arr[], int n)
    {
        int size; 
                   
       stack<int> s;
       
       vector<int> v(n,-1);
       for(int i=0;i<n;i++)
       {
               while(!s.empty() and arr[i]<arr[s.top()])
               {
                   int x=s.top(); s.pop();
                   if(!s.empty()) size= i-s.top()-2;
                   else size=i-1;
                   v[size]= max(v[size], arr[x]);
            
               }
               s.push(i);
       }
       
     while(!s.empty() )
     {
              int x=s.top(),size=0; s.pop();
              
                   if(!s.empty()) size= n-2-s.top();
                   else size=n-x-1;
                  
                   
                   v[size]= max(v[size], arr[x]);
      }
       int Min= *min_element(arr,arr+n);
       int ans=0;
       for(int i=0;i<n;i++)
       {
           if(v[i]==-1) v[i]=Min;
       }
       
       for(int i=n-2;i>=0;i--)
       v[i]=max(v[i],v[i+1]);
       
       return v;
    }
};