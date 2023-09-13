//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string findLargest(int N, int S){
        // code here
    
        if(N>1 && S==0)
        return "-1";
        string ans;
        while(N--){
            for(int i=9;i>=0;i--){
            if(i<=S){
                string t=to_string(i);
                ans=ans+t;
                S=S-i;
                break;
            }
            }
    }
    if(S==0)
    return ans;
    
    return "-1";
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;
        
        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
