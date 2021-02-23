#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct  Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
 }

 int main(){

     struct Node* root = new Node(5);

     root->left = 3;
     root->left->left = 2;
     root->left->left->left = 1;

     root->right = 1;

    return 0;
 }