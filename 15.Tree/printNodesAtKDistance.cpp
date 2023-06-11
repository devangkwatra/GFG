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
void print(Node *root, int k)
{
    if(root == NULL)
        return;
    if(k == 0)
        cout << root->key << " ";
    print(root->left, k - 1);
    print(root->right, k - 1);
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->right = new Node(70);
    root->right->right->right = new Node(80);
    print(root, 3);
}
