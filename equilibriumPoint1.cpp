//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        long long totalSum=0;
        for(int i=0;i<n;i++){
            totalSum+=a[i];
        }
        long long leftSum=0;
        long long rightSum=0;
        int i=0;
        while(i<n){
            // while(j<i-1)
            // leftSum+=a[i];
            rightSum=totalSum-(leftSum+a[i]);
            if(leftSum==rightSum)
            return i+1;
            
            leftSum+=a[i];
            i++;
        }
        return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends
