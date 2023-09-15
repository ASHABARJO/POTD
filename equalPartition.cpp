//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
bool solve(int arr[],int idx,int sum,vector<vector<int>>&dp){
if(sum==0)
return true;
if(idx==0)
return arr[0]==sum;

    if(dp[idx][sum]!=-1)
    return dp[idx][sum];
    bool pick=0;
     if(arr[idx]<=sum)
    pick=solve(arr,idx-1,sum-arr[idx],dp);
        bool notpick=0;
notpick=solve(arr,idx-1,sum,dp);
         
        return dp[idx][sum]=pick||notpick;
}

    int equalPartition(int N, int arr[])
    {
        int sum=0;
     for(int i=0;i<N;i++){
         sum+=arr[i];
     }
     int target=sum/2;
     vector<vector<int>>dp(N+1,vector<int>(target+1,-1));
     if(sum%2)
     return 0;
     return solve(arr,N-1,target,dp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends
