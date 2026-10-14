class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum < 1 || sum > 9 * num) return "";
        string ans = "";
        int m = sum/9;
        int r = sum%9;
        while(m>0){
            ans+='9';
            m--;
        }
        if(ans.size()<num){
            ans+=to_string(r);
            while(ans.size()<num){
                ans+='0';
            }
        }
        
        return ans;

    }
};