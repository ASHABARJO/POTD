//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	 int maxRowIdx = -1;  // Initialize the index of the row with the max 1's
    int maxOnes = 0;     // Initialize the count of max 1's

    for (int i = 0; i < n; ++i) {
        // Use binary search to find the index of the first 1 in the current row
        int left = 0, right = m - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (arr[i][mid] == 1) {
                right = mid - 1;  // Move to the left part of the row
            } else {
                left = mid + 1;  // Move to the right part of the row
            }
        }

        // Calculate the count of 1's in the current row
        int onesCount = m - left;

        // Update maxRowIdx and maxOnes if needed
        if (onesCount > maxOnes) {
            maxRowIdx = i;
            maxOnes = onesCount;
        }
    }

    return maxRowIdx;
	    
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
