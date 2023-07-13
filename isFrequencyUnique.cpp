//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
    vector<int>temp;
    int count=0;
  sort(arr,arr+n);
  for(int i=0;i<n;){
     int count=1;
     for(int j=i+1;i<n;j++){
         if(arr[i]==arr[j])
         count++;
     else{break;}
     }
         temp.push_back(count);
         i+count;
  }
 int t= temp.size();
  sort(temp.begin(),temp.end());
        for(int i=0;i<t-1;i++){
            if(temp[i]==temp[i+1])
            return false;
        }
  return true;
      
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        bool ans=ob.isFrequencyUnique(n,arr);
        if(ans)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
// } Driver Code Ends
