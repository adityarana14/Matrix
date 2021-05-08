class Solution
{
    public:
    //Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        // code here 
        for(int i=0;i<matrix.size();i++)
        {
            if(matrix[i][0]<=x && matrix[i][matrix[i].size()-1]>=x)
            {
                auto itr= find(matrix[i].begin(),matrix[i].end(),x);
                if(itr != matrix[i].end())
                return true;
                else return false;
            }
        }
        
        return false;
    }
};