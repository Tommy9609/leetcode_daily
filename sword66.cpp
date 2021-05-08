//构造左乘积与右乘积矩阵，最终结果等于每个单独的数相乘即可

class Solution {
public:
    vector<int> constructArr(vector<int>& a) {
        int size_a=a.size();
        vector<int> lef(size_a,1),rig(size_a,1),res(size_a,0);
        for(int i=1;i<size_a;i++){
            lef[i]=a[i-1]*lef[i-1];
        }
        for(int i=size_a-1;i>0;i--){
            rig[i-1]=rig[i]*a[i];
        }
        for(int i=0;i<size_a;i++){
            res[i]=lef[i]*rig[i];
        }
        return res;
    }
};
