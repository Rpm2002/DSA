/*

Given a boolean 2D array, where each row is sorted. Find the row with the maximum number of 1s.

Example 1:
Input:
N = 3, M = 4
Mat[] = {{0 1 1 1},
         {0 0 1 1},
         {0 0 1 1}}
Output: 0
Explanation: Row 0 has 3 ones whereas rows 1 and 2 have just 2 ones.

*/

// ********************************** CODE *************************************

/*

class Solution
{
    public:
        int maxOnes (vector <vector <int>> &Mat, int N, int M)
        {
            int row=0,col=M-1,max_row=-1;
            
            while(row<N and col>=0)
            {
                if(Mat[row][col]==1)
                {
                    max_row=row;
                    col--;
                }
                
                else
                {
                    row++;
                }
            }
            
            return max_row;
        }
        
        
        // Youtube : https://youtu.be/LXliftOgF4k?feature=shared
};

*/