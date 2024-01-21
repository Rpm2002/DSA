/*

You are given a binary matrix (it contains only 0s and 1s) with dimensions ‘N * M’. You need to find and return the sum of coverages of all zeros of the given matrix.
Coverage for a particular 0 is defined as the total number of ‘1s’ around it (i.e., immediate left, immediate right, immediate up, and immediate bottom positions).

Sample Input 1:
1
2 2 
1 0
0 1
Sample Output 1:
4
Explanation of Input 1:
In the given matrix, there are 2 zeros. 
For the 0 at the 1st row, 2nd column position, coverage is 2(there is 1 adjacent top one and 1 adjacent right one).
For the 0 at the 2nd row, 2nd column the coverage is 2(there is 1 adjacent top one and 1 adjacent right one).

Hence the net coverage is 2 + 2 = 4.

*/

// ******************************** CODE ********************************

/*

#include <bits/stdc++.h> 
int coverageOfMatrix(vector<vector<int>> &mat) 
{
    int row = mat.size();
    int col = mat[0].size();
    int count = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (mat[i][j] == 0)
            {
                if (i + 1 < row and mat[i + 1][j] == 1) count++; // bottom
                if (i - 1 >= 0 and mat[i - 1][j] == 1) count++; // top
                if (j + 1 < col and mat[i][j + 1] == 1) count++; // right
                if (j - 1 >= 0 and mat[i][j - 1] == 1) count++; // left
            }
        }
    }

    return count;
}


*/