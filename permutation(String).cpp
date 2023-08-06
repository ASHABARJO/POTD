//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    void solve(string S,int idx,vector<string>&ans){
        if(idx>=S.size())
        { ans.push_back(S);
            return;
        }
        for(int i=idx;i<S.size();i++){
            swap(S[idx],S[i]);
            solve(S,idx+1,ans);
            swap(S[idx],S[i]);
            
        }
    }
    vector<string> permutation(string S)
    {
        //Your code here
  vector<string>ans;
  int idx=0;
  solve(S,idx,ans);
  sort(ans.begin(),ans.end());
  return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends
