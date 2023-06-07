class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
     int ps=0,ss=0;
     vector<int>ans;
     for(int i:nums){
         ss+=i;
     }   
     for(int &i:nums){
         ss-=i;
         ans.push_back(abs(ss-ps));
         ps+=i;

     }
     return ans;
    }
};
