class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for (int i = left; i <= right; i++) {
            int num = i;
            bool check = true;
            while (num > 0) {
                int n = num % 10;
                if (n == 0 || i % n != 0) {
                    check = false;
                    break;
                }
                num /= 10;
            }
            if (check) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};