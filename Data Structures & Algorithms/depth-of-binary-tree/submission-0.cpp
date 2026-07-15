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
    int maxDepth(TreeNode* root) {
        if (!root) return 0; //check if theres a root
        queue<TreeNode*> q;
        q.push(root);   //push first node so queue not empty
        int depth = 0; //track depth
        while(!q.empty()){ //go until queue is empty
            int levelSize = q.size();   //always have the levelsize being how many nodes are in the queue
            for(int i = 0; i < levelSize; i++){
                TreeNode* node = q.front();
                q.pop(); //pop out head
                if(node->left) q.push(node->left); //go down a layer
                if(node->right) q.push(node->right);
            }
            depth++; //count each layer
        }
        return depth;
    }
};
