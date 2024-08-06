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
//   void traveln(TreeNode* Node,vector<int>&ans){
//     if(Node==nullptr){
//         return;
//     }
//     traveln(Node->left,ans);
//     traveln(Node->right,ans);
//     ans.push_back(Node->val);
//   }
//     vector<int> postorderTraversal(TreeNode* root) {
//         vector<int>ans;
//         traveln(root,ans);
//         return ans;
//     }
 vector<int> postorderTraversal(TreeNode* root) {
  vector<int> result;
        if (root==NULL) return result;
        stack<TreeNode*> stack;
        TreeNode* lastVisited = NULL;
        while (!stack.empty() || root != NULL){
            if (root != NULL) {
                stack.push(root);
                root = root->left;
            } else {
                TreeNode* peekNode = stack.top();// current top node 
                // If right child exists and traversing node from left child, then move right
                if (peekNode->right != NULL && lastVisited != peekNode->right){
                    root = peekNode->right;
                }
                // (lastvisited = NULL , Peek->right = NULL , so find the last root so pushing into result ) 
                else{
                    stack.pop();
                    result.push_back(peekNode->val);
                    lastVisited = peekNode;
                }
            }
        }

        return result;
 }
};