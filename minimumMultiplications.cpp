//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minimumMultiplications(vector<int>& arr, int start, int end) {
        // code here
        queue<int> q;
        q.push(start);
        vector<int> vis(100000, 0);
        vis[start] = 1;
        if(start == end) return 0;
        int mod = 100000,ans = 1;
        while(!q.empty()){
            int s = q.size();
            while(s--)
            {
                int node = q.front();
                q.pop();
                for(auto it : arr){
                    int num = (it * node)% mod;
                    if(!vis[num]){
                        if(num == end) return ans;
                        vis[num] = 1;
                        q.push(num);
                    }
                }
            }
            ans++;
        }
        return -1; 
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int start, end;
        cin >> start >> end;
        Solution obj;
        cout << obj.minimumMultiplications(arr, start, end) << endl;
    }
}

// } Driver Code Ends
