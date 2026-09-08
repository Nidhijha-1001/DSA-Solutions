class Solution {
public:
vector<int> generaterow(int row){
    vector<int> ansrow;
    long long val = 1;
        ansrow.push_back(1);
       for(int col = 1; col < row; col++){
        val = val * (row-col);
        val = val/col;
        ansrow.push_back(val);
       }
       return ansrow;

}
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 1; i <= numRows; i++){
            ans.push_back(generaterow(i));
        }
       return ans;
    }
};