#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
public:
    void dfs(vector<string>& res, string cur, TreeNode* root){
        if(root->left == nullptr && root->right == nullptr){
            cur += to_string(root->val);
            res.push_back(cur);
            cur.pop_back();
            return;
        }
        cur += to_string(root->val);
        cur += "->";
        
        if(root->left != nullptr) dfs(res, cur, root->left);
        if(root->right != nullptr) dfs(res, cur, root->right);

        cur.pop_back();
        cur.pop_back();
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>res;
        string cur;
        dfs(res, cur, root);
        return res;
    }
};

int main()
{

    return 0;
}