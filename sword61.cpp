class Solution {
public:
    bool isStraight(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int joker=0;
        for(int i=0;i<5;i++){
            if(nums[i]==0) {
                joker++;
                continue;
            }
            if(i<4 && nums[i+1]==nums[i]){
                return false;
            }
        }
        return nums[4]-nums[joker]<5;
    }
};
