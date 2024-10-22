#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode()
    {
        this->val = 0;
        this->left = nullptr;
        this->right = nullptr;
    }
    TreeNode(int x){
        this->val=x;
        this->left=nullptr;
        this->right=nullptr;
    }
};

vector<int>
bfsTraversal(TreeNode *root)
{
    vector<int> ans;
    if(!root) return ans;//return empty array in case of root is NULL
    queue<TreeNode *> q;
    q.push(root);

    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            TreeNode *curr = q.front();
            q.pop();
            ans.emplace_back(curr->val);
            if (curr->left)
                q.push(curr->left);
            if (curr->right)
                q.push(curr->right);
        }
    }
    return ans;
};

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    vector<int> ans=bfsTraversal(root);
    for(auto num:ans) cout<<num<<" ";
    cout<<endl;
    return 0;
}