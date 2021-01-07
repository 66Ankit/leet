// beats 14% in runtime

#include<bits/stdc++.h>
using namespace std;

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution {
public:
    
    map<TreeNode*,int> mp;
    
   int inorder(TreeNode* root)
    {
        if(root==NULL)
            return(0);
        if(mp.find(root)!=mp.end())
            return(mp[root]);
       
        int res=max(root->val+(root->right!=NULL ? inorder(root->right->left)+inorder(root->right->right):0)+(root->left!=NULL ? inorder(root->left->left)+inorder(root->left->right):0),inorder(root->right)+inorder(root->left));      
       return(mp[root]=res);
    }
    
    int rob(TreeNode* root) {
        
        return(inorder(root));
        
    }
};