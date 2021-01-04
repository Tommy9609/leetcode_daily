class Solution {
public:
    vector<vector<int>> ans;
    vector<int> tmp;
    void DFS(int index,vector<int>& nums,vector<bool> &ptr){
        if(index==nums.size()){
            ans.push_back(tmp);
            return;
        }

        for(int i=0;i<nums.size();i++){
            if(ptr[i])  continue;
            tmp.push_back(nums[i]);
            ptr[i]=true;         //已经访问过的位置
            DFS(index+1,nums,ptr);
            tmp.pop_back();
            ptr[i]=false;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        if(nums.empty())  return ans;
        vector<bool> ptr(nums.size(),false);
        DFS(0,nums,ptr);
        return ans;
    }
};
