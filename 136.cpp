class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if (nums.size()==1)  return nums[0];
        sort(nums.begin(),nums.end());
        int latter=1,former=0,ans=nums[0];
        while(latter<nums.size()){
            if(nums[former]!=nums[latter]){
                break;
            }
            former+=2;
            ans=nums[former];
            latter+=2;
        }
        return ans;
    }
};
