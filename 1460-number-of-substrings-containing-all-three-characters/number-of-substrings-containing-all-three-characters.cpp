class Solution {
public:
    int numberOfSubstrings(string s) {
        int count = 0;
        int lastA = -1, lastB = -1, lastC = -1;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a') lastA = i;
            if (s[i] == 'b') lastB = i;
            if (s[i] == 'c') lastC = i;

            count += min({lastA, lastB, lastC}) + 1;
        }

        return count;
    }
};