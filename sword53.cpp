class Solution {
public:
    int missingNumber(vector<int>& nums) {
        if(nums[nums.size()-1]==nums.size()-1) return nums.size();
        int start=0,end=nums.size()-1;
        while(start<end){
            int mid=start+(end-start)/2;
            if(mid<nums[mid]){
                end=mid;
            }
            else if(mid==nums[mid]){
                start=mid+1;
            }
        }
        return start;
    }
};
