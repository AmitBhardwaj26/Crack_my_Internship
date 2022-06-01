//link: https://leetcode.com/problems/symmetric-tree/


class Solution {
public:
    bool check(TreeNode* t1, TreeNode* t2)
    {
        if(!t1 && !t2) return 1;
         if(!t1 || !t2) return 0;
        if(t1->val != t2->val) return 0; 
        return check(t1->right,t2->left)&&check(t1->left,t2->right);
    }
    
    bool isSymmetric(TreeNode* root) {
        return check(root->left,root->right);
    }
};