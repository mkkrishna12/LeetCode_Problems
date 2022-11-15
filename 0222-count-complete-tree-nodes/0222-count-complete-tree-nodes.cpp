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
    int countNodes(TreeNode* root) {
        if(!root){
            return 0;
        }
        int ans = 0;
        queue<TreeNode *> tra;
        tra.push(root);
        while(!tra.empty()){
            TreeNode * top = tra.front();
            ans++;
            tra.pop();
            if(top->right){
                tra.push(top->right);
            }
            
            if(top->left){
                tra.push(top->left);
            }
        }
        return ans;
    }
};