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


node* reverse(node* &head) { // iterative way to reverse a linked list

    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;

    while(currptr != NULL) {
        // Swap the data of current and previous nodes.
        nextptr = currptr->next;
        currptr->next = prevptr;

        // iterating the prevptr and currptr and nextptr
        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr; // new head
};

node* reverseRecursive(node* &head) {

    if(head == NULL || head->next == NULL) {
        return head;
    }

    node* newhead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
};

int main() 
{   
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);

    display(head);

    // node* newhead = reverse(head);
    node* newhead = reverseRecursive(head);
    display(newhead);

    return 0;
}

// TIME COMPLEXITY => O(n);