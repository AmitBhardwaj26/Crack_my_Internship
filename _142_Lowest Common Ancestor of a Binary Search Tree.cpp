//link: https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/



class Solution {
public:
    
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return NULL;
        if(root==p || root==q) return root;
        
        TreeNode *a = lowestCommonAncestor(root->left, p, q);
        TreeNode *b = lowestCommonAncestor(root->right, p, q);
        if(a && b) return root;
        else if(!a) return b ;
        else  return a;
        
    }
};