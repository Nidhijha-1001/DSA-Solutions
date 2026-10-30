class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
       sort(nums.begin(), nums.end());
       int best = 1;
       int curr = 1;
       for(int i = 1; i < nums.size(); i++){
        if(nums[i] == nums[i-1]+1){
           curr++;
           }
        else if(nums[i] == nums[i-1]){
            continue;
        }
        else{
            best = max(best,curr);
            curr = 1;
        }
        best = max(best,curr);
       } 
       return best;
    }
};