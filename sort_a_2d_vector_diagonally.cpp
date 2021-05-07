class Solution {
  public:
    void diagonalSort(vector<vector<int> >& matrix, int row, int column) {
        // code here 
        // going to use map of vector 
        map<int,vector<int>> m;
        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                m[(i-j)].push_back(matrix[i][j]);
            }
        }
        for(auto itr = m.begin();itr!=m.end();itr++)
        {
            int key = (*itr).first;
            if(key>0)
            {
                vector<int> temp1 = (*itr).second;
                sort(temp1.begin(),temp1.end());
                (*itr).second=temp1;
            }
            if(key<0)
            {
                vector<int> temp2 = (*itr).second;
                sort(temp2.rbegin(),temp2.rend());
                (*itr).second=temp2;
            }
            
        }
        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                if(i!=j)
                {
                    int key=i-j;
                    matrix[i][j]=m[key].front();
                    auto itr=m[key].begin();
                    m[key].erase(itr);
                    
                }
                
            }
        }
        
    }
};