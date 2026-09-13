class Solution {
public:
    string reverseWords(string s) {
        string ans;
        int left = 0;
        int right = 0;
        while(right<s.size()){
            while(right < s.size() && s[right]!=' '){
                right++;
            }
            for(int i = right-1;i>=left;i--){
                ans+=s[i];
            }
            if (right < s.size()) {
                ans += ' ';
            }
            right++;
            left = right;
        }
        return ans;
       
    }
};