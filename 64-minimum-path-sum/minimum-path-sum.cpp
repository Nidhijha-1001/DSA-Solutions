class Solution {
public:
     int helper(int i , int j, vector<vector<int>>& dp,int m,int n,vector<vector<int>>& grid){

        if(i >= m or j >= n){
            return 10e7;
        }

        if(i == m-1 && j == n-1){
            return grid[i][j];
        }

        if(dp[i][j] != -1){
            return dp[i][j];
        }

        int right = grid[i][j] + helper(i,j+1,dp,m,n,grid);
        int down = grid[i][j] + helper(i+1,j,dp,m,n,grid);

        dp[i][j] = min(right,down);

        return dp[i][j];
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        int ans = helper(0,0,dp,m,n,grid);

        return ans;
        
    }
};