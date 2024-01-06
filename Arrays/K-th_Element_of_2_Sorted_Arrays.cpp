/*
Given two sorted arrays arr1 and arr2 of size N and M respectively and an element K. The task is to find 
the element that would be at the kth position of the final sorted array.

Input:
arr1[] = {2, 3, 6, 7, 9}
arr2[] = {1, 4, 8, 10}
k = 5
Output:
6
Explanation:
The final sorted array would be - 1, 2, 3, 4, 6, 7, 8, 9, 10. The 5th element of this array is 6.

*/

// ********************************* CODE *************************************

/*

class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        vector<int>v;
        
        for(int i=0;i<n;i++)
        {
            v.push_back(arr1[i]);
        }
        
        for(int i=0;i<m;i++)
        {
            v.push_back(arr2[i]);
        }
        
        sort(v.begin(), v.end());
        
        int ans=v[k-1];
        
        return ans;
    }

*/