class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int size=triangle.size();
        vector<vector<int>> ans(size,vector(size,INT_MAX));
        ans[0][0]=triangle[0][0];
        for(int i=1;i<size;i++){
            ans[i][0]=ans[i-1][0]+triangle[i][0];
        }
        for(int i=1;i<size;i++){
            for(int j=1;j<=i;j++){
                ans[i][j]=min(ans[i-1][j-1],ans[i-1][j])+triangle[i][j];
            }
        }
        return *min_element(ans[size-1].begin(),ans[size-1].end());
    }
};
