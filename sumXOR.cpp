//{ Driver Code Starts
// An efficient C++ program to compute 
// sum of bitwise OR of all pairs
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
    public:
    // Returns sum of bitwise OR
    // of all pairs
    long long int sumXOR(int arr[], int n)
    {
    	//Complete the function
    	long long int totalXORSum = 0;

    for (int i = 0; i < 32; i++) {
        int countSetBits = 0; // Count of set bits at the i-th position

        for (int j = 0; j < n; j++) {
            if (arr[j] & (1 << i)) {
                countSetBits++;
            }
        }

        long long int bitXORSum = (1LL << i) * countSetBits * (n - countSetBits);
        totalXORSum += bitXORSum;
    }

    return totalXORSum;
    }
};

//{ Driver Code Starts.


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	 int n ;
	 cin>>n;
	 int arr[n+1];
	 for( int i=0;i<n;i++)
	    cin>>arr[i];
	 Solution ob;
	 cout<<ob.sumXOR(arr, n)<<endl;
	}	
	return 0;
}

// } Driver Code Ends
