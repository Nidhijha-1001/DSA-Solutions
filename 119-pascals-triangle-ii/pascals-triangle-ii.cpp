class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> result;
        int n = rowIndex;
        long long ans = 1;
        result.push_back(ans);
        for(int i = 1; i <= n; i++){
            ans = ans * (n-i+1);
            ans = ans/(i);
            result.push_back(ans);
        }
        
        return result;
    }
};