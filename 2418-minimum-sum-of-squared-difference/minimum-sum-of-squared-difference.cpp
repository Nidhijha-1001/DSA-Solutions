class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        vector<long long> diff;
        long long k = (long long)k1 + k2, sum = 0;

        for (int i = 0; i < nums1.size(); i++) {
            diff.push_back(abs(nums1[i] - nums2[i]));
            sum += diff.back();
        }

        if (sum <= k) return 0;

        long long l = 0, r = *max_element(diff.begin(), diff.end());

        while (l < r) {
            long long mid = (l + r) / 2, ops = 0;
            for (auto d : diff)
                ops += max(0LL, d - mid);

            if (ops <= k) r = mid;
            else l = mid + 1;
        }

        long long ans = 0, used = 0;
        for (auto d : diff) {
            long long x = min(d, l);
            ans += x * x;
        }

        long long remaining = k;
        for (auto d : diff)
            remaining -= max(0LL, d - l);

        for (auto d : diff) {
            if (remaining > 0 && d >= l && d > 0) {
                ans -= l * l;
                ans += (l - 1) * (l - 1);
                remaining--;
            }
        }
        return ans;
    }
};