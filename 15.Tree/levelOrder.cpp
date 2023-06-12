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

void levelOrder(Node *root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        root = q.front();
        cout << root->key << " ";
        q.pop();
        if(root->left != NULL)
            q.push(root->left);
        if(root->right != NULL)
            q.push(root->right);
    }
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->right = new Node(6);
    root->left->left = new Node(8);
    root->left->right = new Node(7);
    root->left->right->left = new Node(9);
    root->left->right->right = new Node(15);
    levelOrder(root);
}
