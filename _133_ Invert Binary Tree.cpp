//link:https://leetcode.com/problems/invert-binary-tree/


class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return NULL;
         
        TreeNode *left=invertTree(root->left);
        TreeNode *right=invertTree(root->right);
         
        root->left=right; 
        root->right=left;
        
        return root;
    }
};


// class Solution {
// public:    
//     TreeNode* invertTree(TreeNode* root) {
      
        
//         vector<TreeNode*> v1,v2;  TreeNode *t=root;
//         queue<TreeNode*> s;
//         s.push(t);
        
//        while(!s.empty()) 
//         {
//             int n=s.size();
//              while(n-- && !s.empty())
//              {
//                  TreeNode *t1=NULL;
//                   t=s.front(); s.pop(); 
                 
//                   if(t && t->left) s.push(t->left); 
//                   if(t && t->right) s.push(t->right); 
//                   if( t && t->left) { t1=t->left; t->left=NULL;}
//                   if( t && t->right) {t->left=t->right; t->right=NULL;} 
//                   if(t)    t->right=t1;

//                   t=NULL;
//              }  
//         }
//         return root; 
//     }
// };