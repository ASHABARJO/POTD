//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution
{
    public:
    long long int MOD = 1000000007;
    long modInverse(long base) {
        return power(base, MOD - 2);
    }
    long power(long base, int exponent) {
        long result = 1;
        while (exponent > 0) {
            if (exponent % 2 == 1) {
                result = (result * base) % MOD;
            }
            base = (base * base) % MOD;
            exponent /= 2;
        }
        return result;
    }
    int nCk(int n, int k) {
        long numerator = 1;
        long denominator = 1;

        for (int i = 0; i < k; i++) {
            numerator = (numerator * (n - i)) % MOD;
            denominator = (denominator * (i + 1)) % MOD;
        }
        return (int) ((numerator * modInverse(denominator)) % MOD);
    }
    long long  numberOfPaths(int M, int N)
    {
        // First approach
        // if(M==1 || N==1)return 1;
        // return numberOfPaths(M-1,N)+numberOfPaths(M,N-1);


    //  Second approach   
        // vector<vector<int>>mat(m,vector<int>(n,1));
        // for(int i=1;i<m;i++){
        //     for(int j=10;j<n;j++){
        //         mat[i][j]=(mat[i-1][j]+mat[i][j-1])%1000000007;
        //     }
        // }
        // return mat[m-1][n-1];
        
        
        // vector<long long>dp(n,1);
        // for(int i=1;i<m;i++){
        //     for(int j=1;j<n;j++){
        //         dp[j]=(dp[j]+dp[j-1])%1000000007;
        //     }
        // }
        // return dp[n-1];
            return nCk(M + N - 2, M - 1);
    
    }
    
};


//{ Driver Code Starts.

 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int N, M;
		cin>>M>>N;
		Solution ob;
	    cout << ob.numberOfPaths(M, N)<<endl;
	}
    return 0;
}
// } Driver Code Ends
