class Solution
{   
    public:
   
    
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
         vector<int> row(matrix.size(),0);
         vector<int> column(matrix[0].size(),0);
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==1)
                {
                    row[i]=1;
                    column[j]=1;
                }
            }
        }
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(row[i]==1)
                {
                    matrix[i][j]=1;
                }
                if(column[j]==1)
                {
                    matrix[i][j]=1;
                }
                
                
            }
        }
    }
};