// link : https://www.geeksforgeeks.org/check-reversing-sub-array-make-array-sorted/

Method 1 (Simple : O(n2) 
A simple solution is to consider every subarray one by one. Try reversing every subarray and check if reversing the subarray makes the whole array sorted. If yes, return true. If reversing any subarray doesn’t make the array sorted, then return false.
  

  Method 2 (Sorting : O(nlogn)): 
The idea is to compare the given array with the sorted array. Make a copy of the given array and sort it. Now, find the first index and last index which do not match with sorted array. If no such indices are found, print “Yes”. Else check if the elements between the indices are in decreasing order.


Method 3 (Linear : O(n)): 
Observe, answer will be “Yes” when the array is sorted or when the array consist of three parts. First part is increasing subarray, then decreasing subarray and then again increasing subarray. So, we need to check that array contain increasing elements then some decreasing elements and then increasing elements. In all other case, answer will be “No”