class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0)
            return "0"; 

        string ans = "";
        bool negative = false;

        if(num < 0){
            num = abs(num);
            negative = true;
        }

        while(num){
            int ld = num % 7;
            ans += char('0' + ld);
            num /= 7;
        }

        if(negative == true){
            ans += '-';
        }

        reverse(ans.begin(),ans.end());


        return ans;
    }
};