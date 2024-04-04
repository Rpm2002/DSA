// https://youtu.be/DvG9SF2VXL4?feature=shared

/*Given two square Matrices A[][] and B[][]. Your task is to complete the function multiply which stores the multiplied matrices in a new matrix C[][].
 

Example 1:

Input: 
N = 2
A[][] = {{7, 8}, {2 , 9}}
B[][] = {{14, 5}, {5, 18}}

Output: 
C[][] = {{138, 179}, {73, 172}}  */


/*

void multiply(int A[][100], int B[][100], int C[][100], int N)
{
    
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            C[i][j] = 0;
        }
    }
    
      for(int i=0;i<N;i++)
      {
          for(int j=0;j<N;j++)
          {
              int sum=0;
              
              for(int k=0;k<N;k++)
              {
                  C[i][j]+=(A[i][k]*B[k][j]);
              }
          }
      }
}

*/