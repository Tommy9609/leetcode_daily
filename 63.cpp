class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    if(obstacleGrid[0][0]==1)
    return 0;
    int m=obstacleGrid.size();
    int n=obstacleGrid[0].size();
    vector<vector<int>> ans(m,vector<int>(n,-1));
    for(int i=0;i<m;i++)      //将第一行和第一列置1
       ans[i][0]=1;
    for(int j=0;j<n;j++)
       ans[0][j]=1;
    for(int i=0;i<m;i++)      //把有障碍物置0,第一行第一列有0的置0
    {
        for(int j=0;j<n;j++)
        {
            if(obstacleGrid[i][j]==1&&i==0)
            {
                for(int l=j;l<n;l++)
                    ans[0][l]=0;
            }
            else if(obstacleGrid[i][j]==1&&j==0)
            {
                for(int k=i;k<m;k++)
                    ans[k][j]=0;
            }
            else if(obstacleGrid[i][j]==1&&i!=0&&j!=0)
                ans[i][j]=0;
        }
    }
    for(int i=1;i<m;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(ans[i][j]!=0)
                ans[i][j]=ans[i-1][j]+ans[i][j-1];
        }
    }
    return ans[m-1][n-1];
    }
};
