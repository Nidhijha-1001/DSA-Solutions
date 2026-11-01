class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mini = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            mini = min(mini,nums[i]);
        }
            int sum = 0;
        for(int j = 0; j < nums.size(); j++){
            sum += nums[j];
        }

        return sum - (nums.size() * mini);
    }
};