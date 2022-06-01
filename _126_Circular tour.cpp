//link: https://practice.geeksforgeeks.org/problems/circular-tour/1#

struct petrolPump
{
    int petrol;
    int distance;
};


 // } Driver Code Ends
/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
      int i=0,j=0,ans=0,sum=0,sump=0,sumd=0;
       for(int i=0;i<n;i++)
       {
           petrolPump t=p[i];
           sump+=t.petrol;
           sumd+=t.distance;
           sum+=t.petrol-t.distance;
           if(sum<0) {sum=0; ans=i+1; }
       }
       if(sump>=sumd) return ans;
       return -1;
    }
};