class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
       int n = arr.size();
        const int MOD = 1e9 + 7;
        
        long long cnt = 0;
        int sum = 0;
        int even = 1; 
        int odd = 0;
        
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            
            if (sum % 2 == 1) {
                cnt = (cnt + even) % MOD;
                odd++;
            } else {
                cnt = (cnt + odd) % MOD;
                even++;
            }
        }
        
        return cnt;
    }
};