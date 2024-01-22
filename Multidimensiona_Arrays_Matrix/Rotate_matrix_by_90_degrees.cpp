/*

You are given a square matrix of non-negative integers of size 'N x N'. Your task is to rotate that array by 90 degrees in an anti-clockwise direction without using any extra space.

For example:

For given 2D array :

    [    [ 1,  2,  3 ],
         [ 4,  5,  6 ],
         [ 7,  8,  9 ]  ]

After 90 degree rotation in anti clockwise direction, it will become:

    [   [ 3,  6,  9 ],
        [ 2,  5,  8 ],
        [ 1,  4,  7 ]   ]

*/

// *********************************** CODE **********************************

/*

#include <bits/stdc++.h> 
void inplaceRotate(vector<vector<int>> &inputArray)
{
    int n=inputArray.size(),m=inputArray.size();

    // Transpose of matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(inputArray[i][j],inputArray[j][i]);
        }
    }

    // Reverse each row
    for (int i = 0; i < n/2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            swap(inputArray[i][j], inputArray[n - 1 - i][j]);
        }
    }
}

// Youtube : https://youtu.be/yIUryrv2I7I?feature=shared
// Youtube : https://youtu.be/n3-XWx-Inns?feature=shared

*/