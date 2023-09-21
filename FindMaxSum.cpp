//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
    public:
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        int prev2 = 0;
        int prev1 = arr[0];
        for (int i = 1; i < n; i++) {
            int inc = prev2 + arr[i];
            int ex = prev1+0;
            int ans = max(inc, ex);
            prev2 = prev1;
            prev1 = ans;
        }
        return prev1;  
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends
