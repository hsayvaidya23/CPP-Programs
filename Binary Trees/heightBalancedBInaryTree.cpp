#include "bits/stdc++.h"

using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int height(Node* root) {
    if(root == NULL) {
        return 0;
    }

    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh , rh) + 1;
}

bool isBalanced(Node* root) { // TIME COMPLEXITY => O(n^2)

    if(root == NULL) {
        return true;
    }
    
    if(isBalanced(root->left) == false) {
        return false;
    }

    if(isBalanced(root->right) == false) {
        return false;
    }

    int lh = height(root->left);
    int rh = height(root->right);
    if(abs(lh - rh) <= 1) {
        return true;
    }
    else {
        return false;
    }
}

bool isBal(Node* root, int* height) { // TIME COMPLEXITY => O(n)

    if(root == NULL) return true;

    int lh = 0, rh = 0;
    if(isBal(root->left, &lh) == false) return false;
    if(isBal(root->right, &rh) == false) return false;

    *height = max(lh, rh) + 1;
    if(abs(lh - rh) <= 1) {
        return true;
    }
    else {
        return false;
    }
}

int main()
{

    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    /*
              1
            /   \
          2       3
    */

    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    //NOT balanced
    /*
                1
               /
              2
             /
            3
    */

   Node* root2 = new Node(1);
   root2->left = new Node(2);
   root2->left->left = new Node(3);

    // Height Balanced Tree
    // if(isBalanced(root2)) {
    //     cout << "Balanced tree" << endl;
    // }
    // else {
    //     cout << "Unbalanced tree" << endl;
    // }

    // Height Balanced Tree - Optimized
    int height = 0;
    if(isBal(root2, &height) == true) {
        cout << "Balanced tree" << endl;
    }
    else {
        cout << "Unbalanced tree" << endl;
    }

    return 0;
}