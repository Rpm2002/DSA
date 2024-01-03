/*
You are given an array Arr consisting of N integers. You need to find the equilibrium index of the array.

An index is considered as an equilibrium index if the sum of elements of the array to the left of that 
index is equal to the sum of elements to the right of it.

Note:

1. The array follows 0-based indexing, so you need to return the 0-based index of the element.
2. Note that the element at the equilibrium index won’t be considered for either left sum or right sum.
3. If there are multiple indices which satisfy the given condition, then return the left-most index i.e if there are indices i,j,k…. which are equilibrium indices, return the minimum among them
4. If no such index is present in the array, return -1.


1
6
1 7 3 6 5 6
Sample Output 1:
3
Explanation for Sample Input 1:
The sum of elements to the left of arr[3] = 1 + 7 + 3 = 11.
The sum of elements to the right of arr[3] = 5 + 6 = 11.
Hence the answer is 3.

*****************************  Code *******************************

#include <bits/stdc++.h> 
int findEquilibriumIndex(vector<int> &arr) 
{
    //    ********** Brute force approach ************

//    for(int i=0;i<arr.size();i++)
//    {
//       long int leftsum=0;
//       long int rightsum=0;

//       for(int j=0;j<i;j++)
//       {
//           leftsum+=arr[j];
//       }

//       for(int j=i+1;j<arr.size();j++)
//       {
//           rightsum+=arr[j];
//       }

//       if(leftsum==rightsum)
//       {
//           return i;
//       }
//    }

//    return -1;

// *********** Optimised approach ******************

//  Firstly we will calculate the total sum

    long int totalsum=0;
       for(int i=0;i<arr.size();i++)
       {
           totalsum+=arr[i];
       }

       long int leftsum=0;
       for(int i=0;i<arr.size();i++)
       {
        totalsum-=arr[i]; // rightsum

           if(leftsum==totalsum)
           {
               return i;
           }

           leftsum+=arr[i];
       }

       return -1;

    //    Time complexity : O(n)
    //    Space Complexity : O(1)
   
}

*/