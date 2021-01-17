#include<bits/stdc++.h>
using namespace std;


//  Definition for a binary tree node.
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
    
   int pre=0; 
    
   void travel(TreeNode *root)
    {  
        if(root==NULL)
            return ;
       
        
        travel(root->right);
        pre=pre+root->val;
        root->val=pre;
        travel(root->left);
    }
    
    TreeNode* bstToGst(TreeNode* root) {
        
        
        travel(root);
        return(root);
        
    }
};