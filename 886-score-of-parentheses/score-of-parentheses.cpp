class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> sq;
        sq.push(0);
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                sq.push(0);
            }
            else{
                int a = sq.top();
                sq.pop();

              int  cnt = max(2*a,1);
                sq.top() += cnt;
            }
        }
        return sq.top();
    }
};