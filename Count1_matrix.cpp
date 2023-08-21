//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int Count(vector<vector<int> >& matrix) {
        // Code herei
        int cntz=0;
        int cnt=0;
        int r=matrix.size();
        int c=matrix[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++)
         {   cntz=0;
            if(matrix[i][j]==1)
               {
                if(j<c-1 && matrix[i][j+1]==0)
                 cntz++;
                if(i<r-1 && matrix[i+1][j]==0)
                cntz++;
                if(i>0 && matrix[i-1][j]==0)
                cntz++;
                if(j>0 && matrix[i][j-1]==0)
                cntz++;
               if(i<r-1 && j<c-1 && matrix[i+1][j+1]==0)
                cntz++;
                if(i<r-1 && j>0 && matrix[i+1][j-1]==0)
                cntz++;
                if(i>0 && j<c-1 && matrix[i-1][j+1]==0)
                cntz++;
                if(i>0 && j>0 && matrix[i-1][j-1]==0)
                cntz++;
               
        }
      if(cntz%2==0 and cntz>0)
      cnt++;
        }
         }
         return cnt;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
