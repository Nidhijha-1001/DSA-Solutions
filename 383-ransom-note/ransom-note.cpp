class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mpp;
        for(int i = 0; i < ransomNote.size(); i++){
            mpp[ransomNote[i]]++;
        }
        for(int j = 0; j < magazine.size(); j++){
            mpp[magazine[j]]--;
        }
        for(auto it : mpp){
            if(it.second >= 1){
                return false;
            }
        }
        return true;
    }
};