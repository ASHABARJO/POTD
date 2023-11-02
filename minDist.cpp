//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
  public:
    int minDist(int arr[], int n, int x, int y) {
        // code here
    
        int a= -1;
        int b= -1;
        
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            if(arr[i]==x){
            a=i;
            if(b!=-1){
                int diff=abs(a-b);
                ans=min(ans,diff);
            }
        }
            if(arr[i]==y){
            b=i;
            if(a!=-1){
            int diff=abs(a-b);
            ans=min(ans,diff);
    }
                
            }
            
        }
        if(a==-1 || b==-1)
        return -1;
        return ans;    
            }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends
