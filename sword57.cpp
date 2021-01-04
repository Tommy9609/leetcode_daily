class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        int length=target/2;
        double delta=0,result=0;
        vector<vector<int>> ans;
        vector<int> part;
        for(double i=1;i<=length;i++)     //有可能会溢出
        {
            part.clear();
            delta=sqrt((2*i-1)*(2*i-1)+8*target);
            result=0.5*(1-2*i+delta);
            int ires=result;
            if(ires==result)
            {
                for(int j=i;j<i+ires;j++)
                   part.push_back(j);
                ans.push_back(part);
            }

        }
        return ans;
    }
};
