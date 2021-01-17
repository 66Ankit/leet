// beats 65% 

#include<bits/stdc++.h>
using namespace std;


 // Definition for a binary tree node.
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
    vector<int> temp;
    
   void inorder(TreeNode *root)
    {
        if(root==NULL)
            return ;
        
        inorder(root->left);
        temp.push_back(root->val);
        inorder(root->right);
    }
    
   TreeNode* Construct(int lo,int hi)
    {
        if(lo>=hi)
            return NULL ;
       
        int mid=(lo+hi)/2;
        TreeNode *node = new TreeNode(temp[mid]);
        node->left=Construct(lo,mid);
        node->right=Construct(mid+1,hi);
        return(node);
    }
    
    TreeNode* balanceBST(TreeNode* root) {
        
        inorder(root);
        
        TreeNode *res=NULL;
        res=Construct(0,temp.size());
        
        return(res);
    }
};