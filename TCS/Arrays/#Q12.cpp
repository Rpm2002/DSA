/*
Write a program to find the transpose of a square matrix of size N*N. Transpose of a matrix is obtained by changing rows to columns and columns to rows.

Example 1:

Input:
N = 4
mat[][] = {{1, 1, 1, 1},
           {2, 2, 2, 2}
           {3, 3, 3, 3}
           {4, 4, 4, 4}}
Output:
{{1, 2, 3, 4},
 {1, 2, 3, 4}
 {1, 2, 3, 4}
 {1, 2, 3, 4}}

 */

// class solution
// {   
//     public:  
//     //Function to find transpose of a matrix.
//     void transpose(vector<vector<int> >& matrix, int n)
//     { 
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<i;j++)
//             {
//                 swap(matrix[i][j],matrix[j][i]);
//             }
//         }
//     }
// };