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
    int find_idx(vector<int>&inorder,int element) {
        for(int i=0;i<inorder.size();i++) {
            if(inorder[i] == element) {
                return i;
            }
        }
        return -1;
    }
    TreeNode* solve(vector<int>&inorder,vector<int>&postorder,int &index,int inorder_start,int inorder_end,int n) {
        if(index >= n || (inorder_end < inorder_start)) {
            return NULL;
        }
        int element = postorder[index--];
        TreeNode* root = new TreeNode(element);
        int check_idx = find_idx(inorder,element);
        
        root->right = solve(inorder,postorder,index,check_idx+1,inorder_end,n);
        root->left = solve(inorder,postorder,index,inorder_start,check_idx-1,n);

        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.empty() && postorder.empty()) {
            return NULL;
        }
        int n = postorder.size();
        int idx = n-1;
        TreeNode* ans = solve(inorder,postorder,idx,0,n-1,n);
        return ans;
    }
};