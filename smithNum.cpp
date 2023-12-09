//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
  bool isPrime(int n){
      if(n==1)
      return false;
      for(int i=2;i<=sqrt(n);i++){
          if(n%i==0)
          return false;
      }
      return true;
  }
  int sumdigit(int n){
      int sum=0;
      while(n){
          sum+=n%10;
          n/=10;
      }
      return sum;
  }
    int smithNum(int n) {
        // code here
        int sum=sumdigit(n);
        int sum2=0;
        if(isPrime(n))
        return 0;
        
        for(int i=2;i<=n;i++){
            int s=sumdigit(i);
              if(n%i==0){
            while(n>0 && n%i==0){
                sum2+=s;
                n/=i;
            }
                  
            }
        }
        if(sum==sum2)
        return true;
        
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.smithNum(n) << endl;
    }
    return 0;
}
// } Driver Code Ends
