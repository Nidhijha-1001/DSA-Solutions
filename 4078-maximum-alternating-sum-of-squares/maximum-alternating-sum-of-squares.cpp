class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i = 0;i<nums.size();i++){
            nums[i]=abs(nums[i]);
        }
        sort(nums.begin(),nums.end());
        long long left = 0;
        long long right = 0;
        long long ans;
        for(int i = 0;i<nums.size()/2;i++){
            left+= nums[i]*nums[i];
        }
        for(int i =nums.size()/2;i<nums.size();i++){
            right+= nums[i]*nums[i];
        }
        ans = right-left;
        return ans;
    
    }
};