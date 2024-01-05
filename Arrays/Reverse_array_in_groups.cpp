/*
Given an array arr[] of positive integers of size N. Reverse every sub-array group of size K.
Note: If at any instance, there are no more subarrays of size greater than or equal to K, then reverse 
the last subarray (irrespective of its size). You shouldn't return any array, modify the given array in-place.

N = 5, K = 3
arr[] = {1,2,3,4,5}
Output: 3 2 1 5 4
Explanation: First group consists of elements 1, 2, 3. Second group consists of 4,5.

*/

// ************************** Code **************************

//  Approach - 1
/*

class Solution
{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k)
    {
        
        
        for(int i=0;i<n;i+=k)
        {
            int start=i;
            int end=min(i+k-1,n-1);
            
            while(start<end)
            {
                swap(arr[start++],arr[end--]);
            }
        }
    }
};

*/

// Approach -2 
/*

class Solution
{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k)
    {  
        for(int i = 0; i < n; i += k)
        {
           int remaining = n - i;
           int groupSize = min(k, remaining);
           reverse(arr.begin() + i, arr.begin() + i + groupSize);
        }
    }
};

*/