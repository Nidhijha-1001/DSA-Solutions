class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int> ans;

        if (nums.size() < 2 * k + 1) {
            return vector<int>(nums.size(), -1);
        }

        for(int a = 0; a < k; a++){
            ans.push_back(-1);
        }

        long long sum = 0;
        for(int i = 0; i < 2*k+1; i++){
            sum += nums[i];
        }
            ans.push_back(sum / (2*k+1));

        for (int i = k + 1; i < nums.size() - k; i++) {
            sum -= nums[i - k - 1];  
            sum += nums[i + k];      

            ans.push_back(sum / (2 * k + 1));
        }

        while(k > 0){
            ans.push_back(-1);
            k--;
        }

        return ans;
    }
};