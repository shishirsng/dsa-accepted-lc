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

    void hlp(TreeNode* root, int& c,int &num){
        if(!root)return;
        if(root->val>=num)c++;
        int mx = max(num, root->val);
        hlp(root->left,c,mx);
        hlp(root->right,c,mx);
    }
    int goodNodes(TreeNode* root) {
        int c=0;
        hlp(root,c,root->val);
        return c;
    }
};