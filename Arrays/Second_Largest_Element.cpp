/*
You have been given an array/list 'ARR' of integers. Your task is to find the second largest element 
present in the 'ARR'.

Note:
a) Duplicate elements may be present.

b) If no such element is present return -1.

1 <= T <= 100
1 <= N <= 5000
-10 ^ 9 <= 'SIZE' <= 10 ^ 9 

Where ‘T’ is the total number of test cases, ‘N’ denotes the number of elements in the array 
and ‘SIZE’ denotes the range of the elements in the array.

*/
            // **************** Code ******************** 
 /*

#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
    int i=0;
    sort(arr.begin(),arr.end(),greater<int>()); // Time complexity for sorting is O((N * log(N)))
    if(arr[i]==arr[n-1])
    {
        return -1; // agar sorted array me first aur last element same hai matlab
                   //  saare elements same hai to -1 return kar do
    }

// Space complexity O(1)- No extra space used

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            return arr[i+1]; // check karo consecutive elements same nhi hai to  
                             //  next element 2nd largest hoga
        }
    }
}

*/