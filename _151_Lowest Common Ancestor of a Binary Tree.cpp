//link: https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/


class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)    {
        if(!root) return NULL;
        else if(root==p || root==q) return root;
        
        TreeNode *a=lowestCommonAncestor(root->left,p,q);
        TreeNode *b=lowestCommonAncestor(root->right,p,q);
        
        
        if(a && b) return root;
        else if(!b) return a;
        else return b;
         
    }
};