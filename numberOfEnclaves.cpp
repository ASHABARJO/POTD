//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  int count(vector<vector<int>>&grid){
      int n=grid.size();
      int m=grid[0].size();
      int ans=0;
      for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
              if(grid[i][j]==1)
              ans++;
          }
      }
      return ans;
  }
  bool isValid(int i,int j,int m,int n,vector<vector<int>>&grid){
      if(i<n && i>=0 && j<m && j>=0 && grid[i][j]==1)
      return true;
      return false;
  }
  void dfs(int i,int j,int m,int n,vector<vector<int>>&grid){
      // Mark the current cell as visited by setting its value to 0.
      grid[i][j]=0;
    // Arrays to represent possible directions to move in the 
    // grid (up, down, left, right).

      int ax[4]={1,-1,0,0};
      int ay[4]={0,0,1,-1};
    // Loop through all possible directions.
      for(int k=0;k<4;k++){
          int nx=i+ax[k]; // Calculate the next row index
          int ny=j+ay[k]; // Calculate the next column index

 // Check if the next cell is valid and not visited.
          if(isValid(nx,ny,m,n,grid))
           { // Recursively call the DFS function on the next cell.
          dfs(nx,ny,m,n,grid);}
      }
  }
    int numberOfEnclaves(vector<vector<int>> &grid) {
        // Code here
        int i=0;
        int j=0;
        int cnt=0;
        int n=grid.size();
        int m=grid[0].size();
    for(int i=0;i<n;i++){
        int j=0;
        if(grid[i][j]==1){
          dfs(i,j,m,n,grid);
        }
        j=m-1;
        if(grid[i][j]==1){
        dfs(i,j,m,n,grid);
            
        }
    }      
    for(int j=0;j<m;j++){
        int i=0;
     if(grid[i][j]==1){
         dfs(i,j,m,n,grid);
     }        
     i=n-1;
     if(grid[i][j]==1){
         dfs(i,j,m,n,grid);
     }
    }
    return count(grid);
    
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends
