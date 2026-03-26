class Solution {
public:
    bool isValidRow(int row, vector<vector<char>>& boardval)
    {
        bool flag = false;
        set<char> T;
        int n=0;
        for(int j=0;j<9;j++)
        {
            if(boardval[row][j]!='.')
            {
                n++;
                T.insert(boardval[row][j]);
            }
        }
        flag = n == T.size();
        return flag;
    }
    bool isValidCol(int col, vector<vector<char>>& boardval)
    {
        bool flag = false;
        set<char> T;
        int n=0;
        for(int j=0;j<9;j++)
        {
            if(boardval[j][col]!='.')
            {
                n++;
                T.insert(boardval[j][col]);
            }
        }
        flag = n == T.size();
        return flag;
    }
    bool isValidSubBoxes(int row,int col,  vector<vector<char>>& boardval)
    {
        bool flag = false;
        set<char> T;
        int n=0;
        for(int i=row;i<row+3;i++)
        {
            for(int j=col;j<col+3;j++)
            {
                if(boardval[i][j]!='.')
                {
                    n++;
                    T.insert(boardval[i][j]);
                }
            }
        }
        flag = n == T.size();
        return flag;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++)
        {
            if(!isValidRow(i,board))
                return false;
        }
        for(int i=0;i<9;i++)
        {
            if(!isValidCol(i,board))
                return false;
        }
        for(int i=0;i<9;i=i+3)
        {
            for(int j=0;j<9;j=j+3)
            {
                if(!isValidSubBoxes(i,j,board))
                return false;
            }
        }
        return true;
        






    }
};
