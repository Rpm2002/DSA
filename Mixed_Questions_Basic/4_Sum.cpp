/*

You are given an array/list 'ARR' of ‘N’ integers and an integer value ‘TARGET’. You need to check whether there exist four numbers (ARR[i], ARR[j], ARR[k], ARR[l]) such that (0 <= i < j < k < l < N) and ARR[i] + ARR[j] + ARR[k] + ARR[l] = 'TARGET'.

Note:
1. All four numbers should exist at different indices in the given array.
2. The answer is case-sensitive.

Sample Input 1:
2
5 9
1 3 3 10 2
6 20
2 4 6 3 1 1
Sample Output 1:
Yes
No

*/

// ********************************** CODE ******************************************


/*

#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) 
{
    // Brute Force - TC: O(N^4)

    // for(int i=0;i<n;i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {
    //        for(int k=j+1;k<n;k++)
    //         {
    //             for(int l=k+1;l<n;l++)
    //             {
    //                 if(arr[i]+arr[j]+arr[k]+arr[l]==target)
    //                 {
    //                     return "Yes";
    //                 }
    //             }
    //         } 
    //     }
    // }

    // return "No";
    sort(arr.begin(),arr.end());

    for(int i=0;i<n-3;i++)
    {
        for(int j=i+1;j<n-2;j++)
        {
            int left=j+1;
            int right=n-1;

            while(left<right)
            {
                if(arr[i]+arr[j]+arr[left]+arr[right]==target) return "Yes";

                else if(arr[i]+arr[j]+arr[left]+arr[right]<target) left++;

                else right--;
            }
        }
    }

    return "No";

}

// https://chat.openai.com/share/1c8314bf-af7d-4bec-9321-153e0836eef8

*/