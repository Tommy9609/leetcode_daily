class Solution {
public:
    vector<vector<int>> ans;
    vector<int> tmp;
    int sum=0;
    void DFS(int index,vector<int>& candidates,int target){
        if(sum==target){
            ans.push_back(tmp);
            return;
        }
        if(sum>target) return;
        if(index==candidates.size()) return;
        for(int i=index;i<candidates.size();i++){
            tmp.push_back(candidates[i]);
            sum+=candidates[i];
            DFS(i,candidates,target);
            sum-=candidates[i];
            tmp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        if(candidates.empty()) return ans;
        DFS(0,candidates,target);
        return ans;
    }
};
