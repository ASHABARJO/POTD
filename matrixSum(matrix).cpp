//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> queries[])
    {
        // code here
         vector<int> ans;
        
        for(int k=0;k<q;k++){
                vector<int> q = queries[k];
                int sum=0;
             
                    
                for(int i=-q[0];i<=q[0];i++){
                    for(int j=-q[0];j<=q[0];j++){
                        if(abs(i)==q[0]||abs(j)==q[0]) 
                           {

                        int ni = q[1]+i;
                        int nj = q[2]+j;
                        
                        if(ni>=0&&nj>=0&&ni<n&&nj<m)
                          sum+=mat[ni][nj];}
                    }
                }
                
                ans.push_back(sum);
                    
                
            
        }
        return ans;
    
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, q, ty, i, j;
        cin>>n>>m;
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++)
            for(int j = 0;j < m;j++)
                cin>>mat[i][j];
        cin>>q;
        vector<int> queries[q];
        for(int k = 0;k < q;k++){
            cin>>ty>>i>>j;
            queries[k].push_back(ty);
            queries[k].push_back(i);
            queries[k].push_back(j);
        }
        
        Solution ob;
        vector<int> ans = ob.matrixSum(n, m, mat, q, queries);
        for(int u: ans)
            cout<<u<<"\n";
    }
    return 0;
}
// } Driver Code Ends
