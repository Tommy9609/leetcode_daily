class Solution {
public:
    int hammingDistance(int x, int y) {
        int count=0;
        while(x||y){
            int a=x&1;
            int b=y&1;
            if(a^b)
              count++;
            x>>=1;
            y>>=1;
        }
        return count;
    }
};
