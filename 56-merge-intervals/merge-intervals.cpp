class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        //if(intervals.size() == 1) ans.push_back(intervals[0]);
        vector<int> a;
        for(int i = 0; i < intervals.size(); i++){
            if(i < intervals.size() - 1  && intervals[i][1] >= intervals[i+1][0]){
                a.push_back(intervals[i][0]);
                int end = intervals[i][1];
                while(i < intervals.size() - 1 &&
                    end >= intervals[i+1][0]) {
                    end = max(end,intervals[i+1][1]);
                    i++;
                }
                a.push_back(end);
                ans.push_back(a);
                a.clear();  
            }
            else{
                ans.push_back(intervals[i]);   
            }
        }
        return ans;
    }
};