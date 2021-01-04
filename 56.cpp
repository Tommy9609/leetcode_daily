class Solution {
public:
    vector<int> findminfirst(vector<vector<int>>& cha1)
    {
        int size=cha1.size();
        vector<int> ans;
        int tmp=INT_MAX;
        int second=0;
        for(int i=0;i<size;i++)
        {
            if(cha1[i][0]<tmp)
            {
                tmp=cha1[i][0];
                second=cha1[i][1];
            }
        }
        ans.push_back(tmp);
        ans.push_back(second);
        return ans;
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        int size=intervals.size();
        sort(intervals.begin(),intervals.end());
        ans.push_back(findminfirst(intervals));
        int i=0,j=1;
        while(j<size)
        {
            if(ans[i][1]<intervals[j][0])
            {
                ans.push_back(intervals[j]);
                i++;
            }
            else if(ans[i][1]>=intervals[j][0]&&ans[i][1]<intervals[j][1])
                ans[i][1]=intervals[j][1];
            j++;
        }
        return ans;
    }
};
