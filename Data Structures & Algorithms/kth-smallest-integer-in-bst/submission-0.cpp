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
    int kthSmallest(TreeNode* root, int k) {
        if(!root) return -1;
        stack<TreeNode*> stk;
        TreeNode* curr = root;
        TreeNode* result;
        int count = 0;
        while(curr != nullptr || !stk.empty()){
            while(curr != nullptr){
                stk.push(curr);
                curr = curr->left;
            }
            curr = stk.top();
            count++;
            if(count == k) return curr->val;
            stk.pop();
            curr = curr->right;
            
        }
    }
};
