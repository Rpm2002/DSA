/*

You have been given a matrix ‘MAT’ of size 'N' * 'M' (where 'N' and 'M' denote the number of rows and columns respectively) and a positive integer ‘K’. Your task is to rotate the matrix to the right 'K' times.

Note:
Right rotation on a matrix is shifting each column to the right side (the last column moves to the first column) and 'K' times means performing this rotation 'K' times.
Example:
For 'K' = 1 and the given 'MAT':

1 2 3
4 5 6
7 8 9

Output after rotating 'MAT' one time is:

3 1 2 
6 4 5
9 7 8

Output will be in the form of vector<int>

*/

// ******************************************* CODE *******************************************

/*

#include <bits/stdc++.h> 
vector<int> rotateMatRight(vector<vector<int>> mat, int n, int m, int k) 
{
	int K=k%m;
	vector<int>ans;

	for(int i=0;i<n;i++)
	{
		for(int j=m-K;j<m;j++) ans.push_back(mat[i][j]);
		// Iterate over the rightmost 'K' elements in the row and push them 
		// to the result vector

		for(int j=0;j<m-K;j++) ans.push_back(mat[i][j]);
		// Iterate over the remaining elements (not included in the rightmost 'k') 
		// in the row and push them to the result vector
	}

	return ans;

}

*/