void dfs(int i, vector<int> &nums, vector<vector<int>> &ans, vector<int> &subset){
    if(i == nums.size()){
        ans.push_back(subset);
        return ;
    }

    //include 
    subset.push_back(nums[i]);
    dfs(i+1, nums, ans, subset);

    //backtrack
    subset.pop_back();
    //exclude
    dfs(i+1, nums, ans, subset);
}

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> subset;

        dfs(0, nums, ans, subset);

        return ans;
    }
};