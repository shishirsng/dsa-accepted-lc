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
    int maxLevelSum(TreeNode* root) {
        if (!root) return 0;
        queue<TreeNode*>q;
        q.push(root);
        int maxSum = INT_MIN;
        int bestLevel = 1;
        int currentLevel = 1;
        while (!q.empty()) {
            int size = q.size();
            int currentLevelSum = 0;
            for (int i=0;i<size;i++) {
                TreeNode* temp = q.front();
                q.pop();
                currentLevelSum += temp->val;
                if (temp->left) q.push(temp->left);
                if (temp->right) q.push(temp->right);
            }
            if (currentLevelSum > maxSum) {
                maxSum = currentLevelSum;
                bestLevel = currentLevel;
            }
            currentLevel++;
        }
        return bestLevel;
    }
};