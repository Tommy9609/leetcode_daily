class Solution {
public:
    vector<int> singleNumbers(vector<int>& nums) {
        if(nums.size()==2) return nums;
        vector<int> ans;
        int former=0,latter=1;
        int count=0;
        sort(nums.begin(),nums.end());
        if(nums[nums.size()-1]!=nums[nums.size()-2]) ans.push_back(nums[nums.size()-1]);
        while(latter!=nums.size()){
            if(count==2) break;
            if(nums[former]!=nums[latter]){
                ans.push_back(nums[former]);
                former++;
                latter++;
                count++;
                continue;
            }
            former+=2;
            latter+=2;
        }
        return ans;
    }
};
