/*

Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:
=> Each row must contain the digits 1-9 without repetition.
=> Each column must contain the digits 1-9 without repetition.
=> Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.

A Sudoku board (partially filled) could be valid but is not necessarily solvable.
Only the filled cells need to be validated according to the mentioned rules.

Input: board = 
[["5","3",".",".","7",".",".",".","."]
,["6",".",".","1","9","5",".",".","."]
,[".","9","8",".",".",".",".","6","."]
,["8",".",".",".","6",".",".",".","3"]
,["4",".",".","8",".","3",".",".","1"]
,["7",".",".",".","2",".",".",".","6"]
,[".","6",".",".",".",".","2","8","."]
,[".",".",".","4","1","9",".",".","5"]
,[".",".",".",".","8",".",".","7","9"]]
Output: true

Input: board = 
[["8","3",".",".","7",".",".",".","."]
,["6",".",".","1","9","5",".",".","."]
,[".","9","8",".",".",".",".","6","."]
,["8",".",".",".","6",".",".",".","3"]
,["4",".",".","8",".","3",".",".","1"]
,["7",".",".",".","2",".",".",".","6"]
,[".","6",".",".",".",".","2","8","."]
,[".",".",".","4","1","9",".",".","5"]
,[".",".",".",".","8",".",".","7","9"]]

Output: false
Explanation: Same as Example 1, except with the 5 in the top left corner being modified to 8. Since there are two 8's in the top left 3x3 sub-box, it is invalid.

*/

// ************************************** CODE *************************************

/*

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        set<string>s;

        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                    string row= "row"+ to_string(i)+board[i][j];
                    string col= "col"+ to_string(j)+board[i][j];
                    string box= "box"+ to_string((i/3)*3 +(j/3))+board[i][j];

                    if(s.find(row)==s.end() and s.find(col)==s.end() and s.find(box)==s.end())
                    {
                        s.insert(row);
                        s.insert(col);
                        s.insert(box);
                    }

                    else
                    {
                        return false;
                    }

                }
            }
        }

        return true;
        
    }
};

// Youtube : https://youtu.be/29qxITNeycU?feature=shared

*/