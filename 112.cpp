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
    bool flag=false;
    int presum=0;
    void DFS(TreeNode* root,int sum,bool &flag)
    {
        if(root==nullptr||flag)   return;
        presum+=root->val;
        if(presum==sum&&root->left==nullptr&&root->right==nullptr)  
        {
            flag=true;
            return;
        }
        DFS(root->left,sum,flag);
        DFS(root->right,sum,flag);

        presum-=root->val;

    }
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==nullptr)  
        return false;
        DFS(root,sum,flag);
        return flag;
        
    }
};
