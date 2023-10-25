//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
int solve(int N,int W,int val[],int wt[]){
    vector<vector<int>>dp(N,vector<int>(W+1,0));
    for(int w=0;w<=W;w++){
        if(wt[0]<=w)
        dp[0][w]=val[0];
        else
        dp[0][w]=0;
    }
    
    for (int idx = 0; idx < N; idx++) {
        for (int w = 0; w <= W; w++) {
            int inc = 0;
            if (wt[idx] <= w) {
                inc = val[idx] + dp[idx][w - wt[idx]];
            }
            int exc = 0;
            if (idx > 0) {
                exc = dp[idx - 1][w];
            }
            dp[idx][w] = max(inc, exc);
        }
    }
    return dp[N-1][W];
}
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        return solve(N,W,val,wt);
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends
