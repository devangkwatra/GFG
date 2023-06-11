#include<bits/stdc++.h>
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
int height(Node *root)
{
    if(root == NULL)
        return 0;
    else
        return max(height(root->left), height(root->right)) + 1;
}
int main()
{
    Node *root = new Node(30);
    root->left = new Node(40);
    root->right = new Node(60);
    root->left->left = new Node(70);
    root->left->left->left = new Node(70);
    root->left->left->left->left = new Node(80);
    cout << height(root);
}
