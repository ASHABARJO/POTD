//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
      vector<int> tails(n, 0); // Array to store the tails of increasing subsequencehnn s
    int length = 0; // Length of the longest increasing subsequence found so far
    
    for (int i=0;i<n;i++) {
        int left = 0, right = length;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (tails[mid] < a[i]) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }                          
        
        tails[left] = a[i];
        
        if (left == length) {
            length++;
        }                         
    }
    
    return length;
       }                     
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends
