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
    vector<vector<int> >ans;
public:
    void getIt(TreeNode * root, int targetSum,vector<int> &path){
        if(root == NULL)
            return ;
        cout<<root->val<<" "<<targetSum<<"\n";
        path.push_back(root->val);
        
        if(root->val == targetSum ){
            
            if(root->left == NULL && root->right == NULL){
                ans.push_back(path);
                path.pop_back();
                return;
            }
        }
        
        getIt(root->left, targetSum - root->val, path);
        getIt(root->right, targetSum - root->val, path);
        
        path.pop_back();
        return ;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> an;
        ans.clear();
        
        getIt(root, targetSum, an);
        
        return ans;
    }
};