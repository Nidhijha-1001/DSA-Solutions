class Solution {
public:
    int minSteps(string s, string t) {
        int ans = 0;
        int cnt[26] ={0};
        for(int i = 0; i<s.length(); i++){
            cnt[s[i] - 'a']++;
            cnt[t[i] - 'a']--;
        } 
        for(int i = 0; i < 26; i++){
             if(cnt[i] > 0) 
             ans += cnt[i];
        }
         return ans;
    }
};