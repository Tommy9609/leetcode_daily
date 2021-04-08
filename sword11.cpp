class Solution {
public:
    int minArray(vector<int>& numbers) {
        int start=0;
        int end=numbers.size()-1;
        while(start<end){
            int mid=start+(end-start)/2;
            if(numbers[mid]<numbers[end]){
                end=mid;                                 //这里是不能end=mid-1的，因为不能保证当前的mid不是最小值
                continue;
            }
            else if(numbers[mid]>numbers[end]){
                start=mid+1;
                continue;
            }
            else{
                end-=1;
                continue;
            }

        }
        return numbers[start];
    }
};
