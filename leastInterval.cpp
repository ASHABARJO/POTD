//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int leastInterval(int N, int K, vector<char> &tasks) {
        // code here
    int charFreq[26]={0};
    int maxfreq=0;
    //max freqency of character
    for(int i=0;i<N;i++){
        charFreq[tasks[i] -'A']++;
        maxfreq=max(maxfreq,charFreq[tasks[i]-'A']);
    }
    //number of task
        int mxctr=0;
        for(int i=0;i<26;i++){
            if(charFreq[i]==maxfreq)
               mxctr++;
        }
        int t=(maxfreq-1)*(K+1)+mxctr;
        int ans=max(t,N);
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<char> tasks(N);
        for (int i = 0; i < N; i++) cin >> tasks[i];

        Solution obj;
        cout << obj.leastInterval(N, K, tasks) << endl;
    }
    return 0;
}
// } Driver Code Ends
