/*

You are given a square matrix, return true if the matrix is symmetric otherwise return false.
A symmetric matrix is that matrix whose transpose is equal to the matrix itself.

Example of symmetric matrix :

1 2 3      1 2 3
2 4 5  =>  2 4 5
3 5 8      3 5 8

*/

// ************************************ CODE ********************************

/*

#include <bits/stdc++.h> 
bool isMatrixSymmetric(vector<vector<int>> mat)
{
    // Brute Force : TC: O(n*m) SC: O(n*m)

    // int n=mat.size(),m=mat[0].size();
    // int arr[n][m];

    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         arr[j][i]=mat[i][j];
    //     }
    // }

    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         if(arr[i][j]!=mat[i][j])
    //         {
    //             return false;
    //         }
    //     }
    // }

    // return true;
    
    // Better approach without using extra space

    int n=mat.size(),m=mat[0].size()
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(mat[j][i]!=mat[i][j])
            {
                return false;
            }
        }
    }

    return true;

}

*/