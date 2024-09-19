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
    int minDepth(TreeNode* root) {
        // here we are checking that my root is NULL
        // if yes then return 0
        if(root == NULL)
        {
            return 0;
        }
        /* Here we are checking if i don't have left and right node
           is also not there then we can say that we have only one
           root node so we will return 1
        */
        else if(root -> left == NULL && root -> right == NULL)
        {
            return 1;
        }
        /*
           here we are checking that we don't have any right node and 
           we have left node is there then we will call recursive 
           function for left side till my left side will get over
           also we add +1 and this + 1 is for root node
           cause left sub tree + 1 means min height of left side
        */
        else if(root -> left != NULL && root -> right == NULL)
        {
            return minDepth(root -> left) + 1;
        }
        /*
           here we are checking that we don't have any left node and 
           we have right node is there then we will call recursive 
           function for right side till my right side will get over
           also we add +1 and this +1 is for root node
           cause right sub tree +1 means min height of right side
        */
        else if(root -> left == NULL && root -> right != NULL)
        {
            return minDepth(root -> right) + 1;
        }
        /*
           Here in else part we are doing for that type of root which
           has both right and left sub tree.
           in that type of tree we are fetching height from left
           and right side and then check which ever is minimum
           we add +1 in that value
           +1 is for root cause we will fetch minimum value from 
           left subtree or right subtree and add +1 for root node
        */
        else
        {
            return min(minDepth(root -> left), minDepth(root -> right)) + 1;
        }
        // Yaahhh that's it If you like my solution please give me Upvote:)
    }
};