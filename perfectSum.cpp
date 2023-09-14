//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int mod=1e9+7;
	int solve(int idx,int arr[],int n,int sum,vector<vector<int>>&dp){
	    if(idx==n){
	    if(sum==0)
	    return 1;
	    else
	    return 0;}
	    if(dp[idx][sum]!=-1)
	    return dp[idx][sum];
	    
	    int pick=0,nopick;
	    if(arr[idx]<=sum){
	        pick=solve(idx+1,arr,n,sum-arr[idx],dp);
	    }
	        nopick=solve(idx+1,arr,n,sum,dp);
	    
	    
	    return dp[idx][sum]=(pick%mod+nopick%mod)%mod;
	    
	}
	int perfectSum(int arr[], int n, int sum)
	{
     vector<vector<int>>dp(n,vector<int>(sum+1,-1));
     return solve(0,arr,n,sum,dp);
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends
