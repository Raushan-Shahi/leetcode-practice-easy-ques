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
    int sumOfLeftLeaves(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        int sum = 0;
        if (root->left and !root->left->left and !root->left->right)
            sum = root->left->val;
        int l = sumOfLeftLeaves(root->left);
        int r = sumOfLeftLeaves(root->right);
        return sum + l + r;
    }
};

int main()
{

    return 0;
}