//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
int squareSum(int num){
int ans=0;
while(num!=0){
 int rem=num%10;
 ans=ans+(rem*rem);
 num/=10;
    
}
    return ans;
    
}
bool isHappy(int num){
unordered_set<int>vis;
while(vis.find(num)==vis.end()){
    if(num==1)
    return true;
    vis.insert(num);
    num=squareSum(num);
    
}
    return false;
}
    int nextHappy(int N){
        // code here
        for(int i=N+1;i<100003;i++){
            if(isHappy(i))
            return i;
        }
    return -1;
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends
