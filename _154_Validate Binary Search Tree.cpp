//link: https://leetcode.com/problems/validate-binary-search-tree/

// using iterative , recussive inorder
// class Solution {
// public:
//     bool isValidBST(TreeNode* r) {
//         vector<int> v;
//         stack<TreeNode*> st;
//         TreeNode *root=r;
//         while(root || !st.empty())
//         {
//             if(root)
//             {
//                 st.push(root);
//                 root=root->left;
//             }
//             else 
//             {
//                 TreeNode *t=st.top(); st.pop();
                
//                 v.push_back(t->val); cout<<t->val<<" ";
//                 root=t->right;
                
//             }
//         }
//         for(int i=1;i<(int)v.size();i++)
//         {
            
//             if(v[i-1]>=v[i]) return false;
            
//         }
//         return true;
            
//     }
// };


class Solution {
public: 
    long x=LONG_MIN;
    
    bool isValidBST(TreeNode* root) {
        if(!root) return 1;
        
        bool a= isValidBST(root->left); //call for left
        
        if(x >= root->val) { return 0;}
          x=max((long)root->val,x);
        
        bool b= isValidBST(root->right); // call for right
        return a&&b ;
    }
};