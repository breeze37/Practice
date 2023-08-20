#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node (int val){
        data = val;
        next=NULL;
    }
};

void insert (node* &head, int val){
    node* n=new node(val);
    n->next = head;
    head =n;
}

void display(node* head){
    node* temp=head; 
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main() {
    node* head =NULL;
   insert(head,1);
   insert(head,2);
   insert(head,3);
   insert(head,4);
   insert(head,5);
   cout<<"The circular linked list is: ";
   display(head);
   return 0;
}