/*

For a given two-dimensional integer array/list of size (N x M), print it in a spiral form. That is, you need to print in the order followed for every iteration:

a. First row(left to right)
b. Last column(top to bottom)
c. Last row(right to left)
d. First column(bottom to top)
Mind that every element will be printed only once.

nput:
r = 4, c = 4
matrix[][] = {{1, 2, 3, 4},
           {5, 6, 7, 8},
           {9, 10, 11, 12},
           {13, 14, 15,16}}
Output: 
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10

*/

// ********************************* CODE *******************************

/*

void spiralPrint(int **input, int nRows, int nCols)
{
    int top=0,left=0,right=nCols-1,bottom=nRows-1,i=0,j=0;

    while(left<=right and top<=bottom)
    {
        // Left -> Right Traversal

        for(int i=left;i<=right;i++)
        {
            cout<<input[top][i]<<" ";
        }

        top++;

        // Top -> Bottom Traversal

        for(int i=top;i<=bottom;i++)
        {
            cout<<input[i][right]<<" ";
        }

        right--;

        if(top<=bottom)
        {
            // Right -> Left Traversal

            for(int i=right;i>=left;i--)
            {
                cout<<input[bottom][i]<<" ";
            }

            bottom--;
        }
        

        if(left<=right)
        {
            // Bottom -> Top Traversal

            for(int i=bottom;i>=top;i--)
            {
                cout<<input[i][left]<<" ";
            }
    
            left++;
        }
        
    }

    // Youtube : https://youtu.be/4mSTiSBk_iY?feature=shared

}

*/