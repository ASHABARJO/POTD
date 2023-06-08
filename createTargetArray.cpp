class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int t=index[i];
            ans.insert(ans.begin()+t,nums[i]);

        }
        ans.erase(ans.begin()+ans.size()-1,ans.begin()+ans.size()-1);
        return ans;
    }
};
