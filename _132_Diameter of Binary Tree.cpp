// link: https://leetcode.com/problems/diameter-of-binary-tree/

class Solution {
public:
    int ans=0;
    int solve(TreeNode * root) 
    {
        if(!root) return -1 ;
        int l=1+ solve( root->left);
        int r=1+ solve(root->right);
        ans=max(ans,l+r);
        return max(l,r); 
    }    
    int diameterOfBinaryTree(TreeNode* root) {
        solve(root);
        return ans; 
    }
};