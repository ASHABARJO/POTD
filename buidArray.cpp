class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
       vector<int>ans;
       for(int i=0;i<nums.size();i++) {
           ans.push_back(nums[nums[i]]);
       }
       return ans;
    }
};
// //Algo:-
//   1. insert nums[nums[i]] into a array
//  T(n)=O(n)
s(n)=O(n)
  
