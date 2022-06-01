//link: https://leetcode.com/problems/path-sum/


class Solution {
public:
        
    bool hasPathSum(TreeNode* root, int t) {
        if(!root)  return false;
        
        t=t-root->val;
        if(t==0 && !root->left && !root->right) 
        return 1;
        
        return hasPathSum( root->left,t ) || hasPathSum( root->right,t ) ; 
    }
};


class Solution {
public:
    bool check=false;
        
    bool hasPathSum(TreeNode* root, int t) {
        if(!root)  {return false;}
        
        if(!root->left && !root->right) 
        { 
            if((t- root->val)==0)
            {check=true; return check;}
            
        }
           hasPathSum( root->left,t -root->val) ;
           hasPathSum( root->right,t -root->val) ; 
           return check;
    }
};







