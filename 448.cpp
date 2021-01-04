class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        if(nums.empty()) return ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[abs(nums[i])-1]>0)      //很有可能当前值还没来得及遍历就被置为复数了，所以要用绝对值，同时要取相反数
              nums[abs(nums[i])-1]*=-1;
        }
    
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
              ans.push_back(i+1);
        }
        return ans;
    }
};
