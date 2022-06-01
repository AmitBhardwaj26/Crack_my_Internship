//link:https://leetcode.com/problems/subtree-of-another-tree/


class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (root == nullptr && subRoot == nullptr)
            return true;
        else if (root == nullptr || subRoot == nullptr)
            return false;
        
        if (match(root, subRoot)) {
            return true;
        }
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
    
    bool match(TreeNode *root, TreeNode *subRoot) {
        if (root == nullptr && subRoot == nullptr)
            return true;
        else if (root == nullptr || subRoot == nullptr)
            return false;
        
        if (root->val != subRoot->val)
            return false;
        return match(root->left, subRoot->left) && match(root->right, subRoot->right);
    }
};

 */
// class Solution {
// public:
//     bool compare(TreeNode* root, TreeNode* sub)
//     {
//         if(!root && !sub ) return 1;
//         else if((!root and sub)||(root and !sub) ) return 0;
//         bool l=compare(root->left,sub->left);
//         bool r=compare(root->right,sub->right);
      
        
//         if(root->val==sub->val) return 1&(l & r);
//          return 0;
        
//     }
    
    
//     bool isSubtree(TreeNode* root, TreeNode* subRoot) {
//      queue<TreeNode*> q;
//         q.push(root);
//         bool check=0;
//         while(!q.empty())
//         {
//             TreeNode *t=q.front(); q.pop();
//             if(t->val==subRoot->val)  
//                if( compare(t,subRoot)) return 1;
//             if(t->left) {q.push(t->left);  }
//             if(t->right) { q.push(t->right);}
//         }
        
//         return 0;
//     }
// };