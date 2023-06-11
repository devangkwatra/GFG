#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int x)
    {
        key = x;
        left = right = NULL;
    }
};

void inOrder(Node *root)
{
    if(root == NULL)
        return;
    inOrder(root->left);
    cout << root->key << " ";
    inOrder(root->right);

}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->right = new Node(60);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->left->right->left = new Node(70);
    root->left->right->right = new Node(80);
    inOrder(root);
}
