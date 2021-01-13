class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans=0,tmp=0; int power=31;
        while(n!=0){
            tmp=(n&1);
            tmp<<=power;
            ans+=tmp;
            n=n>>1;
            power--;
        }
        return ans;
    }
};

//左移和右移也要赋值才有用
