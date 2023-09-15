#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;

    node(int val) {
        data=val;
        next=NULL;
    }
};

//node* &head => by reference
void insertAtHead(node* &head, int val) {
    node* n = new node(val);
    n->next = head; //link the old list to this one.
    head = n;
};

    // node* &head ==> by reference and not by value because we are modifying the link list
void insertAtTail(node* &head, int val) { // insert in linklist at tail
    
    node* n = new node(val);

    if(head==NULL) { // check if linklist is null
        head = n; 
        return ;
    }

    node* temp = head;

    while(temp->next!=NULL) {
        temp= temp->next;
    }

    temp->next = n;
};


// node* head => by value because we are not modifying the linklist
void display(node* head) {
    node* temp = head;
    while( temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp-> next;
    }
    cout << "NULL" << endl;
};

node* mergeRecursive(node* &head1, node* &head2) {

    if(head1 == NULL) return head2;
    if(head2 == NULL) return head1;

    node* result;

    if(head1->data < head2->data) {
        result = head1;
        result->next = mergeRecursive(head1->next, head2);
    } 
    else {
        result = head2;
        result->next = mergeRecursive(head1, head2->next);
    }

    return result;
}

int main() 
{   
    node* head1 = NULL;
    node* head2 = NULL;

    int arr1[] = {1, 4, 5, 7};
    int arr2[] = {2, 3, 6};
    for(int i=0; i<4; i++) {
        insertAtTail(head1, arr1[i]);
    }
    for(int i=0; i<3; i++) {
        insertAtTail(head2, arr2[i]);
    }

    display(head1);
    display(head2);

    node* newhead = mergeRecursive(head1, head2);
    display(newhead);
 

    return 0;
}

// TIME COMPLEXITY => O(m +n) m is length of first linked list and n is length of second linked list