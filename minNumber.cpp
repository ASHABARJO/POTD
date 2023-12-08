//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    int MAX=1000001;
    bool prime[1000001];
    Solution(){    
        for(int i=0;i<MAX;i++){
            prime[i]=true;
            }
        prime[1]=false;
        
        for(int i=2;i*i<MAX;i++){
            if(prime[i]==true){
            
            for(int j=i*2;j<MAX;j+=i)
            {  prime[j]=false;
            }    
            }
        }
    }
    int minNumber(int arr[],int N)
    {
        int sum=0;
        for(int i=0;i<N;i++)
        sum+=arr[i];
        
        
        int st=sum;
        while(prime[st]==false)
        st++;
        
        return st-sum;
    }
};


//{ Driver Code Starts.

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution obj;
        cout << obj.minNumber(arr, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends
