class Solution {
public:
    void MaxHeap(){

    }
    void BuidHeap(vector<int>& nums,int size){
        for(int i=size/2;i>0;i--){
            MaxHeap(nums,i)
        }
    }
    int findKthLargest(vector<int>& nums, int k) {

    }
};
