class Solution {
public:
    int  maxdepth(TreeNode* root){
        if(root==nullptr) return 0;
        int le=maxdepth(root->left);
        int ri=maxdepth(root->right);
        return max(le,ri)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root==nullptr) return true;
        int le=maxdepth(root->left);
        int ri=maxdepth(root->right);
        //当前的情况满足的话，继续递归看下面是否满足
        if(abs(le-ri)<=1) {           
        bool lef=isBalanced(root->left);
        bool rig=isBalanced(root->right); 
        return lef&&rig;
        }
        else              
        return false;

    }
};
