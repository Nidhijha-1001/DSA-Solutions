class Solution {
public:
    int numberOfSubstrings(string s) {
        int count = 0;
        int a = -1, b = -1, c = -1;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a') a = i;
            if (s[i] == 'b') b = i;
            if (s[i] == 'c') c = i;

            count += min({a, b, c}) + 1;
        }

        return count;
    }
};