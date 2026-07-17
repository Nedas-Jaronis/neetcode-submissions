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
    bool isValidBST(TreeNode* root) {
        if(!root) return true;
        TreeNode* prev = nullptr;
        TreeNode* curr = root;
        stack<TreeNode*> stk;
        while(curr != nullptr || !stk.empty()){
            while(curr != nullptr){
                stk.push(curr);
                curr=curr->left;
            }
            curr = stk.top();
            stk.pop();
            if(prev && prev->val >= curr->val) return false;
            prev = curr;
            curr=curr->right;
        }

        return true;
    }
};
