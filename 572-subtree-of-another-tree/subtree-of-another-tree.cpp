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
    bool isIdentical(TreeNode* p, TreeNode* q) 
    {
        if(p == NULL or q == NULL) return p == q;
        return p->val == q->val and isIdentical(p->left, q->left) and isIdentical(p->right, q->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) 
    {
        if(root == NULL or subRoot == NULL) return root == subRoot;
        if(root->val == subRoot->val and isIdentical(root, subRoot)) return true;
        return isSubtree(root->left, subRoot) or isSubtree(root->right, subRoot);
    }
};