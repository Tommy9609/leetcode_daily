class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> test;
        int j=0;
        for(auto x:pushed){
            test.push(x);
            while(!test.empty()&&test.top()==popped[j]){
                test.pop();
                j++;
            }
        }
        return test.empty();
    }
};
