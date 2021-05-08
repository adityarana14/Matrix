class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int min_zero=0;
	    int index=-1;
	    for(int i=0;i<arr.size();i++)
	    {
	        if(arr[i][0]==1)
	        return i;
	        
	        int counts= count(arr[i].begin(),arr[i].end(),1);
	        if(counts>min_zero && counts!=0)
	        {
	            index=i;
	            min_zero=counts;
	        }

	    }
	    
	    return index;
	}

};