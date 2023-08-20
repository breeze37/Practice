#include <bits/stdc++.h>
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
void insertAthead(node* &head, int val){
    node* n = new node(val);
    n->next=head;
    head=n;
}
void insertAtTail(node* &head, int val){
    node* n= new node(val);
    node* temp=head;
    if(head==NULL){
        head=n;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head){
    node* temp=head; 
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node* head=NULL;
    insertAthead(head,1);
    insertAthead(head,2);
    insertAthead(head,3);
    insertAthead(head,4);
    display(head);
    insertAthead(head,7);
    display(head);
    insertAtTail(head,9);
    display(head);


    return 0;
}

