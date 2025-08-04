#include <vector>
#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    vector<int> inorderTraversal(TreeNode *root)
    {

        vector<int> result;
        inorderHelper(root, result);
        return result;
    }

    void inorderHelper(TreeNode *root, vector<int> &result)
    {
        if (root == nullptr)
            return;
        inorderHelper(root->left, result);
        result.push_back(root->val);
        inorderHelper(root->right, result);
    }
};

int main()
{
    TreeNode *tree = new TreeNode(5);
    tree->left = new TreeNode(3);
    tree->left->right = new TreeNode(4);
    tree->right = new TreeNode(7);
    tree->right->left = new TreeNode(6);

    Solution s;

    vector<int> result = s.inorderTraversal(tree);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}