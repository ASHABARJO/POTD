class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int digitSum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=10)
            {int t=nums[i];
            while(t!=0){
            int last=t%10;
            digitSum+=last;
            t/=10;
            }
        }
        else{
            digitSum+=nums[i];
        }
        }
return abs(sum-digitSum);
    }
};
