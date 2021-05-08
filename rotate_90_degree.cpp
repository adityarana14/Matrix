void rotate(vector<vector<int> >& matrix)
{
    // Your code goes here
    for(int i=0;i<matrix.size();i++)
    {
        int k=0;
        int j=matrix[0].size()-1;
        while(k<j)
        {
            swap(matrix[i][k],matrix[i][j]);
            k++;
            j--;
    
        }
        
    }
    
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=i+1;j<matrix[0].size();j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        
        }
        
    }

    
}