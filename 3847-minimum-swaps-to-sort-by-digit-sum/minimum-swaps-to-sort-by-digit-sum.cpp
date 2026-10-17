class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();

        vector<pair<int, int>> sorted;

        for (int x : nums) {
            int sum = 0, temp = x;

            while (temp > 0) {
                sum += temp % 10;
                temp /= 10;
            }

            sorted.push_back({sum, x});
        }

        sort(sorted.begin(), sorted.end());

        unordered_map<int, int> target;
        for (int i = 0; i < n; i++) {
            target[sorted[i].second] = i;
        }

        vector<bool> visited(n, false);
        int swaps = 0;

        for (int i = 0; i < n; i++) {
            if (visited[i] || target[nums[i]] == i)
                continue;

            int j = i;
            int cycleSize = 0;

            while (!visited[j]) {
                visited[j] = true;
                j = target[nums[j]];
                cycleSize++;
            }

            swaps += cycleSize - 1;
        }

    
        return swaps;
    }
};