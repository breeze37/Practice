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

void deletion(node* &head, int val){
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }

    node* todelete=temp->next;
    temp->next=temp->next->next;
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
    
};
