//link: https://leetcode.com/problems/range-sum-of-bst/

// recursive
class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(!root)  return 0;
        
        int sum=0;
        if(root->val>=low and root->val<=high)
            sum+=root->val;
        
        return sum+rangeSumBST(root->left, low, high) +
               rangeSumBST(root->right, low, high);
    }
};

// iterative 
// class Solution {
// public:
//     vector<int> v;
//     void preorder(TreeNode *t)
//     {
//         if(!t) return;
//         v.push_back(t->val);
//         preorder(t->left);
//         preorder(t->right);
//     }
    
//     int rangeSumBST(TreeNode* root, int low, int high) {
//         preorder(root); int ans=0;
//     for(int i=0;i<v.size();i++)
//     {
//         if(v[i]>=low && v[i]<=high) ans+=v[i];
//     }
//         return ans;
//     }
// };