class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            unordered_set<int> subA;
            for(int j = i; j < nums.size(); j++){
                subA.insert(nums[j]);
                sum += subA.size()*subA.size();
            }
        }
        return sum;
    }
};