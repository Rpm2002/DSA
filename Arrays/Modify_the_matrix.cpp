/*

Given a 0-indexed m x n integer matrix matrix, create a new 0-indexed matrix called answer. Make answer equal to matrix, then replace each element with the value -1 with the maximum element in its respective column.

Return the matrix answer.

Input: matrix = [[1,2,-1],[4,-1,6],[7,8,9]]
Output: [[1,2,9],[4,8,6],[7,8,9]]
Explanation: The diagram above shows the elements that are changed (in blue).
- We replace the value in the cell [1][1] with the maximum value in the column 1, that is 8.
- We replace the value in the cell [0][2] with the maximum value in the column 2, that is 9.

*/

// ************************************* CODE ****************************************

/*

class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) 
    {
        vector<vector<int>>ans=matrix;
        
        int n=matrix[0].size(); // cols
        int m=matrix.size(); //rows
        vector<int>maximum;
        
        
        for(int k=0;k<n;k++)
        {
            int i=0;
            int maxi=INT_MIN;
            while(i<m)
            {
                maxi=max(maxi,matrix[i++][k]);
            }
            
            maximum.push_back(maxi);
        }
        
        int maximum_index_counter=0;
        
        for(int k=0;k<n;k++)
        {
            int i=0;
            
            while(i<m)
            {
                if(matrix[i][k]==-1)
                {
                    ans[i][k]=maximum[maximum_index_counter];
                }
                
                i++;
            }
            
            maximum_index_counter++;
            
        }
        
        return ans;
        
    }
};


vector<vector<int>> modifiedMatrix(vector<vector<int>>& m) {
    for (int j = 0; j < m[0].size(); ++j) {
        int mx = -1;
        for (int i = 0; i < m.size(); ++i)
            mx = max(mx, m[i][j]);
        for (int i = 0; i < m.size(); ++i)
            m[i][j] = m[i][j] == -1 ? mx : m[i][j];
    }
    return m;
}


*/