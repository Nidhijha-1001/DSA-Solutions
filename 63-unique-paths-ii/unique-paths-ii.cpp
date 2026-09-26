class Solution {
public:
    int helper(int i,int j,vector<vector<int>>& obstacleGrid,int m,int n,vector<vector<int>>& dp){
        if(i >= m or j >= n){
            return 0;
        }

        if(obstacleGrid[i][j] == 1){
            return 0;
        }

        if(i == m-1 and j == n-1){
            return 1;
        }

        if(dp[i][j] != -1){
            return dp[i][j];
        }

        int right = helper(i,j+1,obstacleGrid,m,n,dp);
        int down = helper(i+1,j,obstacleGrid,m,n,dp);

        dp[i][j] = right + down;

        return dp[i][j];
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();

        vector<vector<int>> dp(m,vector<int>(n,-1));

        int ans = helper(0,0,obstacleGrid,m,n,dp);

        return ans;
    }
};