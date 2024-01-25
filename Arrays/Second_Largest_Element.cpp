/*
You have been given an array/list 'ARR' of integers. Your task is to find the second largest element 
present in the 'ARR'.

Note:
a) Duplicate elements may be present.
b) If no such element is present return -1.

Sample Input 1:
2
6
12 1 35 10 34 1
5
10 10 10 10 10
Sample Output 1:
34
-1


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