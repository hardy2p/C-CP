#include <bits/stdc++.h>
using namespace std;

// Defining tree
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

// Tree traversal Using BFS
void bfsTraversal(Node *root)
{
    if (root == nullptr)
    {
        return;
    }

    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int levelSize = q.size();

        for (int i = 0; i < levelSize; i++)
        {
            Node *currNode = q.front();
            q.pop();
            cout << currNode->data << " ";

            if (currNode->left != nullptr)
            {
                q.push(currNode->left);
            }

            if (currNode->right != nullptr)
            {
                q.push(currNode->right);
            }
        }
    }
}
int main()
{
    // Constructing a tree
    Node *root = new Node(1);
    Node *a = new Node(2);
    Node *b = new Node(3);
    root->left = a;
    root->right = b;
    Node *c = new Node(4);
    Node *d = new Node(5);
    a->left = c;
    a->right = d;

    bfsTraversal(root);
    return 0;
}