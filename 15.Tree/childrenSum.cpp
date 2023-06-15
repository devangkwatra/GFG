#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;
    Node(int x)
    {
        key = x;
        left = right = NULL;
    }
};

bool childrenSum(Node *root)
{
    if(root == NULL or (root->left == NULL and root->right == NULL))
        return true;

    int sum = 0;
    if(root->left != NULL)
        sum += root->left->key;
    if(root->right != NULL)
        sum += root->right->key;

    if (childrenSum(root->left) && childrenSum(root->right) && sum == root->key)
        return true;
    else
        return false;
}

int main()
{
    // Node *root = new Node(10);
    // root->left = new Node(8);
    // root->right = new Node(2);
    // root->right->left = new Node(2);
    // root->right->right = new Node(2);


    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->right = new Node(6);
    root->left->left = new Node(8);
    root->left->right = new Node(7);
    root->left->right->left = new Node(9);
    root->left->right->right = new Node(15);
    cout << childrenSum(root);
}
