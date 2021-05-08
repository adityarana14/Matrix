// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends


class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        //use of 4 pointer is the best approach in solving this problem 
        
        int top=0;
        int bottom = r-1;
        int left = 0;
        int right = c-1;
        
        int direction =0;  
        vector<int> answer;
        //0 for right, 1 for down, 2 for left, 3 for upward.
        
        while(left<=right && top<=bottom)
        {
            if(direction==0)
            {
                for(int i=left;i<=right;i++)
                {
                    answer.push_back(matrix[top][i]);
                }
                top++;
            }
            
            if(direction==1)
            {
                for(int i=top;i<=bottom;i++)
                {
                    answer.push_back(matrix[i][right]);
                }
                right--;
            }
            
            if(direction==2)
            {
                for(int i=right;i>=left;i--)
                {
                    answer.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            
            if(direction==3)
            {
                
                for(int i=bottom;i>=top;i--)
                {
                    //cout<<"matrix value is "<<matrix[i][left]<<endl;
                    answer.push_back(matrix[i][left]);
                    
                }
                left++;
            }
            
            direction=(direction+1)%4;
        }
        
        return answer;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends