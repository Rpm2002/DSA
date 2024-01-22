/*

Given an ‘N’ x ‘M’ integer matrix, if an element is 0, set its entire row and column to 0's, and return the matrix. In particular, your task is to modify it in such a way that if a cell has a value 0 (matrix[i][j] == 0), then all the cells of the ith row and jth column should be changed to 0.
You must do it in place.

For Example:

If the given grid is this:
[7, 19, 3]
[4, 21, 0]

Then the modified grid will be:
[7, 19, 0]
[0, 0,  0]

*/

// *********************************** CODE *********************************

/*

#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// TC:O(ROW*COL + VECTOR_ROW*COL + VECTOR_COL*ROW)
	// SC:O(V_ROW + V_COL)

	// int row=matrix.size();
	// int col=matrix[0].size();

	// vector<int>v_row,v_col;

	// for(int i=0;i<row;i++)
	// {
	// 	for(int j=0;j<col;j++)
	// 	{
	// 		if(matrix[i][j]==0)
	// 		{
	// 			v_row.push_back(i);
	// 			v_col.push_back(j);
	// 		}
	// 	}
	// }

	// // Pehle row ko zero karo

	// for(int i=0;i<v_row.size();i++)
	// {
	// 	int index=v_row[i];
	// 	for(int j=0;j<col;j++)
	// 	{
	// 		matrix[index][j]=0;
	// 	}
	// }

	// // Ab col ko zero karo

	// for(int i=0;i<v_col.size();i++)
	// {
	// 	int index=v_col[i];
	// 	for(int j=0;j<row;j++)
	// 	{
	// 		matrix[j][index]=0;
	// 	}
	// }

	// Youtube : https://youtu.be/W6La6f7POk0?feature=shared

	// Better approach using constant extra space

	int n=matrix.size();
	int m=matrix[0].size();
	int col0=1;

	// int col[m]={0} => matrix[0][...]
	// int row[n]={0} => matrix[...][0]

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(matrix[i][j]==0)
			{
				// mark the i-th row
				matrix[i][0]=0;
				// mark the j-th col
				if(j!=0)
				{
					matrix[0][j]=0;
				}
				else
				{
					col0=0;
				}
			}
		}
	}

	for(int i=1;i<n;i++)
	{
		for(int j=1;j<m;j++)
		{
			if(matrix[i][j]!=0)
			{
				// check for ist row and col marking
				if(matrix[i][0]==0 or matrix[0][j]==0)
				{
					matrix[i][j]=0;
				}
			}
		}
	}

	if(matrix[0][0]==0)
	{
		for(int j=0;j<m;j++)
		{
			matrix[0][j]=0;
		}
	}

	if(col0==0)
	{
		for(int i=0;i<n;i++)
		{
			matrix[i][0]=0;
		}
	}

	// Youtube : https://youtu.be/N0MgLvceX7M?feature=shared
}

*/