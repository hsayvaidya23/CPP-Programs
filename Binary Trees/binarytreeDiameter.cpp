#include "bits/stdc++.h"

using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int calcHeight(Node* root) {
    if(root == NULL) return 0;
    
    return max(calcHeight(root->left), calcHeight(root->right)) + 1;
}


int calcDiameter(Node* root) {  // TIME COMPLEXITY => o(N^2)

    if(root == NULL) {
        return 0;
    }
    
    int lHeight = calcHeight(root->left);
    int rHeight = calcHeight(root->right);
    int currDiameter = lHeight + rHeight + 1;

    int lDiameter = calcDiameter(root->left);
    int rDiameter = calcDiameter(root->right);

    return max(currDiameter, max(lDiameter, rDiameter));
}

int calDiameter(Node* root, int* height) { // TIME COMPLEXITY => O(n)
    if(root == NULL){
        *height = 0;
        return 0;
    }

    int lh = 0;
    int rh = 0;
    int lDiameter = calDiameter(root->left, &lh);
    int rDiameter = calDiameter(root->right, &rh);

    int currDiameter = lh + rh + 1;
    *height = max(lh, rh) + 1; 

    return max(currDiameter, max(lDiameter, rDiameter));
}

int main() {

    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    
    /*
              1
            /   \
          2       3
        /  \     /  \
       4    5   6     7
    */


   root->left->left = new Node(4);
   root->left->right = new Node(5);
   root->right->left = new Node(6);
   root->right->right = new Node(7);

    // Binary tree diameter
//    cout << calcDiameter(root) << "\n";

    int height = 0;
   cout << calDiameter(root, &height) << "\n";


    return 0;
}