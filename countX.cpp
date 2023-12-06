//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countX(int L, int R, int X) {
        // code here
    int cnt=0;
    for(int i=L+1;i<R;i++){
        int temp=i;
        while(temp){
          int digit=temp%10;
            if(digit==X)
            cnt++;
            temp/=10;
        }
        
    }
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int L, R, X;
        cin >> L >> R >> X;
        Solution ob;
        int ans = ob.countX(L, R, X);
        cout << ans << "\n";
    }
}

// } Driver Code Ends
