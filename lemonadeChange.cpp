//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &bills) {
        // code here
        int change_five=0;
        int change_ten=0;
        for(int i=0;i<N;i++){
            if(bills[i]==5){
            change_five++;}
            else if(bills[i]==10)
            {
                change_ten++;
                if(change_five!=0)
                {
                    change_five--;
                }
                else{
                    return false;
                }
            }
            else{
                if(change_five>=1 && change_ten>=1)
                {
                    change_five--;
                    change_ten--;
                    
                }
                else if(change_five>=3){
                  change_five-=3;
                    
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends
