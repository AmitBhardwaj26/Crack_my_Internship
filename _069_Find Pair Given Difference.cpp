// link: https://practice.geeksforgeeks.org/problems/find-pair-given-difference1559/1/#


// sort O(nlogn + loop(n)* binary search; = O(Nlogn)
bool findPair(int arr[], int size, int n){
    sort(arr,arr+size);
    int i=0,j=size-1;
    for(int i=0;i<size;i++)
    {
       int x= n+arr[i],j=i+1,k=size-1;
       while(j<=k)
       {
           int mid=j+ (k-j)/2;
           if(arr[mid]==x) return 1;
           else if(arr[mid]>x) k=mid-1;
           else j=mid+1;
       }

    }
    return 0;
}
