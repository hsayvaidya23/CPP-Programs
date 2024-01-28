#include <iostream>
#include "bits/stdc++.h"
using namespace std;


struct Node
{
    int data;
    Node *left, *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};


bool isIdentical(Node* root1, Node* root2) {
    if(root1 == NULL && root2 == NULL) {
        return true;
    }
    else if(root1 == NULL || root2 == NULL) {
        return false;
    }
    else {
        bool cond1 = root1->data == root2->data;
        bool cond2 = isIdentical(root1->left, root2->left);
        bool cond3 = isIdentical(root1->right, root2->right);

        if(cond1 && cond2 && cond3) {
            return true;
        }
        return false;
    }
}

int main() {
        /*       12
              /    \
             9      15
          /    \
         5      10

    */

    Node *root1 = new Node(12);
    root1->left = new Node(9);
    root1->right = new Node(15);
    root1->left->left = new Node(5);
    root1->left->right = new Node(10);

        /*       12
              /    \
             9      15
          /    \
         5      11

    */

    Node *root = new Node(12);
    root->left = new Node(9);
    root->right = new Node(15);
    root->left->left = new Node(5);
    root->left->right = new Node(11);


    if(isIdentical(root1, root)) {
        cout << "BSTs are IDENTICAL" << endl;
    }else {
        cout << " BSTs are NOT IDENTICAL" << endl;
    }

    return 0;

}