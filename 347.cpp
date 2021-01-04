class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<int> tmp(nums.size(),0);
        vector<int> ans;
        int count=0;
        for(int i=0;i<nums.size();i++){
            count++;
            if(nums[i+1]!=nums[i]&&i<nums.size()-1){
                tmp[count]=nums[i];    //第count个位置代表出现了count次个nums[i];
                count=0;
            }
            if(nums[nums.size()-1]!=nums[nums.size()-2]){
                tmp[1]=nums[nums.size()-1];
            }
            if(nums[i]==nums[i-1]&&i==nums.size()-1){
                tmp[count]=nums[nums.size()-1];
            }
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(tmp[i]!=0){
                ans.push_back(tmp[i]);
                k--;
            }
            if(k==0) break;
        }
        return ans;
    }
};
