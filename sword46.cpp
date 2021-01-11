class Solution {
public:
    int translateNum(int num) {
        string s=to_string(num);
        int pre=1,cur=1;
        for(int i=1;i<s.size();i++){
            int tmp=cur;
            if(s[i-1]=='1'||s[i-1]=='2'&&s[i]>='0'&&s[i]<'6') cur=cur+pre;
            pre=tmp;
        }
        return cur;

    }
};
