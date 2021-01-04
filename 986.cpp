class Solution {
public:

    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int>> ans;
        if(A.empty()||B.empty()) return ans;
        int i=0,j=0;
        while(i<A.size()&&j<B.size())
        {
            int left=max(A[i][0],B[j][0]);
            int right=min(A[i][1],B[j][1]);
            if(left<=right)
               ans.push_back({left,right});
            if(A[i][1]<B[j][1])
               i++;
            else 
               j++;
        }
        return ans;
    }
};
