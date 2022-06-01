//link: https://leetcode.com/problems/binary-tree-paths/


class Solution {
public:
    void helper( vector<vector<int>> &v, TreeNode* root, vector<int> &s) {
     if(!root) return;
        
     if(root && !root->left && !root->right)
     {  s.push_back(root->val); v.push_back(s); }
       
     else if(root) 
               { s.push_back(root->val);
                helper(v, root->left ,s);
                helper(v, root->right ,s);
               }
         s.pop_back();
    
    }
    
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<vector<int>> v; 
        vector<int> s; 
        vector<string> ans;
        helper(v,root,s);
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            string c="";
            for(int j=0;j<v[i].size();j++)
            {
                string set=to_string(v[i][j]);
                c+=set ; 
                if(j!=v[i].size()-1) c+="->";
            }
            ans.push_back(c);
        }
        return ans;
    }
};