#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};
Node *head=nullptr;

void insert(Node* &head,int new_data){
    Node *new_node= new Node;
    new_node->data=new_data;
    new_node->next=head;
    head=new_node;
}

void display(Node* head){
    Node *temp;
    temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void reverse(Node* &head){
    Node *p=head,*q=nullptr,*r=nullptr;
    while(p!=nullptr){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
        
    }
    head=q;
}

int main(){
    insert(head,15);
    insert(head,10);
    insert(head,8);
    insert(head,2);
    display(head);
    reverse(head);
    display(head);
    
}