#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
public:
    void preorder(TreeNode *root, vector<int> &v)
    {
        if (!root)
            return;
        v.push_back(root->val);
        preorder(root->left, v);
        preorder(root->right, v);
    }
    TreeNode* sorted_Tree(vector<int> v, int i){
        if(i>= v.size())
            return nullptr;
        TreeNode *node = new TreeNode(v[i]);
        node->left = NULL;
        node->right = sorted_Tree(v, i+1);
        return node;
    }
    TreeNode *increasingBST(TreeNode *root)
    {
        vector<int> v;
        preorder(root, v);
        sort(v.begin(), v.end());
        TreeNode *ans = NULL;
        return sorted_Tree(v, 0);
    }
};

int main()
{

    return 0;
}