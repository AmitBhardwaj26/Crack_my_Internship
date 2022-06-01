//link: https://leetcode.com/problems/same-tree/

/* move recursively and compare if not equal return 0;*/

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q) return 1;
        if(!p || !q)) return 0;
        if(p->val!=q->val) return 0;
        
            bool a= isSameTree(p->left,q->left);
            bool b= isSameTree(p->right,q->right);
        
        return a && b;
    }
};