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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==nullptr)  return ans;
        vector<int> temp;
        queue<TreeNode*> Q;
        Q.push(root);
        ans.push_back({root->val});
        while(!Q.empty())
        {
            int size=Q.size();
            for(int i=0;i<size;i++)
            {
            TreeNode* tmp=Q.front();
            Q.pop();
            if(tmp->left!=nullptr) 
            {
                Q.push(tmp->left);
                temp.push_back(tmp->left->val);
            }
            if(tmp->right!=nullptr) 
            {
                Q.push(tmp->right);
                temp.push_back(tmp->right->val);
            }
            }
            if(!temp.empty())
            {
                ans.push_back(temp);
                temp.clear();
            }

        }
        return ans;
    }
};
