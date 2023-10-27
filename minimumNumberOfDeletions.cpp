//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
  int solve(string &a,string &b){

 vector<int>curr(a.length()+1,0);
 vector<int>next(a.length()+1,0);

 for(int i=a.length()-1;i>=0;i--){
     for(int j=a.length()-1;j>=0;j--){
         int ans=0;
         if(a[i]==b[j]){
             ans=1+next[j+1];
         }
         else{
             ans=max(next[j],curr[j+1]);
         }
    curr[j]=ans;
     }
     next=curr;
 }
 return b.size()-next[0];
} 
    int minimumNumberOfDeletions(string S) { 
        // code here
        string a=S;
reverse(a.begin(),a.end());
    return solve(a,S);
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        Solution obj;
        cout << obj.minimumNumberOfDeletions(S) << endl;
    }
    return 0;
}
// } Driver Code Ends
