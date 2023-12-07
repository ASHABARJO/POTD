//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    long countSubarrays(int a[], int n, int L, int R)
    {
        // Complete the function
        long btwLR=0;
        long LessL=0;
        long ans=0;
        for(int i=0;i<n;i++){
            if(a[i]<L)
            { ans+=btwLR;
             LessL++;
            }
            else if(a[i]>R)
            btwLR=LessL=0;
            else{
                ans+=btwLR+LessL+1;
                btwLR+=LessL+1;
                LessL=0;
            }
            
        }
        return ans;
    }
};

//{ Driver Code Starts.
// driver program
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        
        int n ,l,r;
        cin >> n>>l>>r;
        int a[n];
        for(int i=0;i<n;i++)
        cin >> a[i];
        Solution ob;
    	cout << ob.countSubarrays(a, n, l, r)<<endl;
    }
	return 0;
}

// } Driver Code Ends
