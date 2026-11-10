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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL || root->val == val) return root;
        if(root->val > val){
            TreeNode* ans = searchBST(root->left,val);
            if(ans == NULL) return NULL;
            else if (ans->val == val) return ans;
        } 
        if(root->val < val){
            TreeNode* res = searchBST(root->right,val);
            if(res == NULL) return NULL;
            else if(res->val == val) return res;
        }
        return NULL;
    } 
};