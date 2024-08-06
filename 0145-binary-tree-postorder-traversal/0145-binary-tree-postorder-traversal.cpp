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
  void traveln(TreeNode* Node,vector<int>&ans){
    if(Node==nullptr){
        return;
    }
    traveln(Node->left,ans);
    traveln(Node->right,ans);
    ans.push_back(Node->val);
  }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        traveln(root,ans);
        return ans;
    }
};