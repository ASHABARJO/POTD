class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans=s;
        for(int i=0;i<s.size();i++){
s[indices[i]]=ans[i];
        }
        return s;
    }
};
