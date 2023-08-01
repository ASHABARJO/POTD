//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
    
        if(array1.size()>array2.size()) return MedianOfArrays(array2,array1);
        int n1=array1.size();
        int n2=array2.size();
        
        int l=0;
        int h=n1;
        
        while(l<=h){
            int cut1=(l+h)/2;
            int cut2=(n1+n2+1)/2-cut1;
            
            int l1=INT_MIN;int r1=INT_MAX;
            int l2=INT_MIN;int r2=INT_MAX;
            
            if(cut1==0) l1=INT_MIN;
            else l1=array1[cut1-1];
            
            if(cut2==0) l2=INT_MIN;
            else l2=array2[cut2-1];
            
            if(cut1==n1) r1=INT_MAX;
            else r1=array1[cut1];
            
            if(cut2==n2) r2=INT_MAX;
            else r2=array2[cut2];
            
            
            if(l1<=r2&&l2<=r1){
                if((n1+n2)%2==0)return (max(l1,l2)+min(r1,r2))/2.0;
                else return max(l1,l2);
            }
            else if(l1>r2){
                h=cut1-1;
            }
            else l=cut1+1;
            
            
        }
        
       return 0.0;
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends
