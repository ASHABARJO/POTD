//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		 
        int count=0;
        int row=n;
        int col=m;
        int total=row*col;

        int startingRow=0;
        int endingRow=row-1;
         int startingCol=0;
        int endingCol=col-1;
    
    while(count<total){
        for(int idx=startingCol;count<total && idx<=endingCol;idx++){
            if(++count==k)
            return a[startingRow][idx];
            
        }
       startingRow++;
    
    for(int idx=startingRow;count<total && idx<=endingRow;idx++){
            if(++count==k)
           return a[idx][endingCol];
            
        }
       endingCol--;
    
    for(int idx=endingCol;count<total && idx>=startingCol;idx--){
            if(++count==k)
            return a[endingRow][idx];
            
        }
       endingRow--;
    
    for(int idx=endingRow;count<total && idx>=startingRow;idx--){
            if(++count==k)
            return a[idx][startingCol];
            
        }
       startingCol++;
    }
    return -1;
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends
