/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
     void check(TreeNode* root,int targetSum,vector<int>&res,vector<vector<int>>&ans){
        if(root==NULL){return ;}
        res.push_back(root->val);
        if(root->left==NULL && root->right==NULL){
            if(targetSum==root->val){
                ans.push_back(res);
            }

         }
         check(root->left,targetSum-root->val,res,ans);
         
         check(root->right,targetSum-root->val,res,ans);
         res.pop_back();
        
    
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        int sum=0;
        vector<vector<int>>ans;
        vector<int>res;
         check(root,targetSum,res,ans);
         return ans;
        
    }
};