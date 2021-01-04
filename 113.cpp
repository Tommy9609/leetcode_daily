/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int presum=0;
    int level=0;
    vector<int> res;
    void DFS(TreeNode* root,int sum,vector<vector<int>> &ans)
    {
        if(root==nullptr)  return;
        level++;
        if(level==1)  res.clear();
        presum+=root->val;
        res.push_back(root->val);
        if(sum==presum&&root->left==nullptr&&root->right==nullptr)  ans.push_back(res);
        DFS(root->left,sum,ans);
        DFS(root->right,sum,ans);
        presum-=root->val;         //第一次做的时候这一步忘了
        level--;
        res.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> ans;
        if(root==nullptr) return ans;
        DFS(root,sum,ans);
        return ans;
    }
};
