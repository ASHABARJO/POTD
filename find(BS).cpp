//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    int solveFirst(int arr[],int n,int x){
    int s=0;
    int e=n-1;
    int res=-1;
    int mid=s+(e-s)/2;
    while(s<=e)
        {
            if(arr[mid]==x){
            res=mid;
            e=mid-1;
            }
            else if(arr[mid]<x)
            s=mid+1;
            else
            e=mid-1;
            mid=s+(e-s)/2;
        }    
        return res;
    }
    int solveLast(int arr[],int n,int x){
    int s=0;
    int e=n-1;
    int res=-1;
    int mid=s+(e-s)/2;
    while(s<=e)
        {
            if(arr[mid]==x){
            res=mid;
            s=mid+1;
            }
            else if(arr[mid]<x)
            s=mid+1;
            else
            e=mid-1;
            mid=s+(e-s)/2;
        }    
        return res;
    }
    vector<int> find(int arr[], int n , int x )
    {
        // code here
    vector<int>ans;
    int f=solveFirst(arr,n,x);
    int l=solveLast(arr,n,x);
ans.push_back(f);
ans.push_back(l);
    return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends
