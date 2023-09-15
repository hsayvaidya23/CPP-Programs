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

node* merge(node* &head1, node* &head2) {

    node* p1 = head1;
    node* p2 = head2;
    node* dummyNode = new node(-1);
    node* p3 = dummyNode;

    while(p1 != NULL && p2 != NULL) {

        if(p1->data < p2->data) { // p1 element is less than p2
            p3->next = p1;
            p1 = p1->next;
        }
        else {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }

    while(p1 != NULL) {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }

    while(p2 != NULL) {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }

    return dummyNode->next;
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

    node* newhead = merge(head1, head2);
    display(newhead);
 

    return 0;
}

// TIME COMPLEXITY => O(m +n) m is length of first linked list and n is length of second linked list