//link: https://leetcode.com/problems/binary-tree-right-side-view/


class Solution {
public:
    vector<int> ans;
    vector<int> rightSideView(TreeNode* root,int level=0) {
        if(!root) return {};
        if(ans.size()==level) ans.push_back(root->val);
        rightSideView(root->right , level+1); //call for right
        rightSideView(root->left , level+1);  //call for left
        return ans;
    }
};