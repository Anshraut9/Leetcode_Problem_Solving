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
    
    void find_leaf(TreeNode* root, vector<int>&leaf) {
        if(!root) {
            return;
        }
        if(!root->left && !root->right) {
            leaf.push_back(root->val);
        }
        find_leaf(root->left,leaf);
        find_leaf(root->right,leaf);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>leaf_one;
        vector<int>leaf_two;
        find_leaf(root1,leaf_one);
        find_leaf(root2,leaf_two);

        int n = leaf_one.size();
        int m = leaf_two.size();
        if(n != m) {
            return false;
        }
        for(int i=0;i<n;i++) {
            if(leaf_one[i] != leaf_two[i]) {
                return false;
            }
        }
        return true;
    }
};