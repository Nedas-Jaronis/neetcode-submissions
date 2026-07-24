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
    TreeNode* build(vector<int>& preorder, vector<int>& inorder, int preStart, int preEnd, int inStart, int inEnd){
        if(preStart > preEnd) return nullptr;
        int rootVal = preorder[preStart];
        TreeNode* root = new TreeNode(rootVal);
        int inIndex = 0;
        for(int i = 0; i < inorder.size(); i++){
            if(inorder[i] == rootVal) {inIndex = i; break;}
        }

        int leftSize = inIndex - inStart;

        root->left = build(preorder, inorder, preStart + 1, preStart + leftSize, inStart, inIndex - 1);
        root->right = build(preorder, inorder, preStart + leftSize + 1, preEnd, inIndex + 1, inEnd);
        return root;

    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return build(preorder, inorder, 0, preorder.size()-1, 0, inorder.size()-1);   

    }
};
