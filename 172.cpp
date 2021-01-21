class Solution {
public:
    int trailingZeroes(int n) {
        int res=0,div=5;
        while(div<=n){
            res+=n/div;
            div*=5;
        }
        return res;

    }
};
