class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        //The procedure will find if there is zero or not
        // If zero exists, then row will be false.
        bool row = true;
        for(int j=n-1;j>=0;j--)
        {
            if(matrix[0][j]==0)
            {
                row=false;
                break;
            }
        }
        //This procedure checks for zeros in the remaining matrix
        for(int i=1;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        // We will start putting the zeroes from the end.
        // Filling zeroes from end ensures that only correct places
        // are filled with zeroes. 
        for(int i=m-1;i>0;i--)
        {
            for(int j=n-1;j>=0;j--)
            {
                if(matrix[0][j]==0 ||matrix[i][0]==0)
                    matrix[i][j]=0;
            }
        }
        if(row==false)
        {
            for(int j=n-1;j>=0;j--)
                matrix[0][j]=0;
        }
    }
};
