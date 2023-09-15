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

bool search(node* head, int key) {

    node* temp = head;
    while (temp != NULL) {
        if(temp->data == key) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void deleteAtHead(node* &head) {
    node* todelete = head;
    head = head->next;

    delete todelete;
}

void deletion(node* &head, int val) {

    if(head == NULL) {
        return;
    }

    if(head->next != NULL) {
        deleteAtHead(head);
        return ;
    }
    
    node* temp = head;
    while(temp->next->data != val) {
        temp = temp->next;
    }

    node* todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
};

int main() 
{   
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);

    display(head);

    insertAtHead(head, 5);

    display(head);

    cout << search(head, 8) << endl;

    deletion(head, 3);
    display(head);

    deleteAtHead(head);
    display(head);

    return 0;
}