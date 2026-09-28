class Solution {
public:
    string helper(string& s,int& i){
        string ans = "";
        while(i < s.size() && s[i] != ')'){
            if(s[i] == '('){
                i++;

            string inside = helper(s,i);
            reverse(inside.begin(),inside.end());
            ans += inside;
            i++;
            }
            else{
                ans += s[i];
                i++;
            }
        }

        return ans;

    }
    string reverseParentheses(string s) {
        
        int i = 0;
        return helper(s,i);
    }
};