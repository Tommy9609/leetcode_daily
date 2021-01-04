class Solution {
public:
    vector<vector<int>> ans;
    vector<int> tmp;
    void DFS(int index,vector<int>& nums,vector<bool>& ptr){
        if(index==nums.size()){
            ans.push_back(tmp);
        }
        for(int i=index;i<nums.size();i++)
        {
            if(ptr[i]) continue;
            tmp.push_back(nums[i]);
            ptr[i]=true;
            DFS(i,nums,ptr);
            tmp.pop_back();
            ptr[i]=false;
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        if (nums.empty()) return ans;
        vector<bool> ptr(nums.size(),false);
        DFS(0,nums,ptr);
        sort(ans.begin(),ans.end());
        auto uni=unique(ans.begin(),ans.end());
        ans.erase(uni,ans.end());
        return ans;

    }
};
