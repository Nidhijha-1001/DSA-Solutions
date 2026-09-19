class Solution {
public:
    int longestPalindrome(string s) {
        int length = 0;
        bool odd = false;
        unordered_map<char,int> mpp;
        for(int i = 0; i < s.size(); i++){
            mpp[s[i]]++;
        }
        for(auto it : mpp){
            if(it.second % 2 == 0){
                length += it.second;
            }
            else if(it.second % 2 == 1){
                length += it.second - 1;
                odd = true;
            }
        }
        if(odd == true)
            length++;

        return length;
    }
};