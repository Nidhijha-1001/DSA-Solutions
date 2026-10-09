class Solution {
public:
    int minInsertions(string s) {
        stack<int> st;
        int cnt = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                st.push(s[i]);
            }
            else if(s[i] == ')' && i + 1 < s.size() && s[i + 1] == ')'){
                i++;
                if(!st.empty()){
                    st.pop();
                }
            
                else{
                    cnt++;
                }
            }
            else{
                cnt++;
                if(!st.empty()){
                    st.pop();
                }
                else{
                    cnt++;
                }
            }
        }
        cnt += 2 * st.size();
        return cnt;
    }
};