//link: https://leetcode.com/problems/binary-search-tree-iterator/


class BSTIterator {
public:
    vector<int > v;
    void inorder(TreeNode* root)
    {
        if(!root) return;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    int i=0;
    BSTIterator(TreeNode* root) {
        inorder(root);
    }
    
    int next() {
        i++; return v[i-1];  
    }
    
    bool hasNext() {
        if(i>=v.size()) return 0;
        return 1;
    }
};
