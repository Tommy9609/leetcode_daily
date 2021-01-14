class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        unordered_map<int,int> hash;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        int ans;
        for(int i=0;i<nums.size();i++){
            if(hash.find(nums[i])->second==1) {
                ans=nums[i];
                break;
            }
        }
        return ans;
    }
};
