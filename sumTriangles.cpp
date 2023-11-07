//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function to return sum of upper and lower triangles of a matrix.
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        // code here
        int sumU=0;
        int i=0;
        while(i<n){
        int j=i;
        while(j<n){
         sumU+=matrix[i][j];
         j++;
        }
        i++;
        }
        vector<int>ans;
        ans.push_back(sumU);
        int sumL=0;
     i=0;
        while(i<n){
        int j=0;
        while(j<=i){
         sumL+=matrix[i][j];
         j++;
        }
        i++;
        }
            ans.push_back(sumL);
        // sort(ans.begin(),ans.end());
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 
        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }
        Solution ob;
        vector<int> result = ob.sumTriangles(matrix,n);
        for (int i = 0; i < result.size(); ++i)
            cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
