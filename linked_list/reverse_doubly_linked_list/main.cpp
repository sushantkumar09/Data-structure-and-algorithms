#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node *prev;
};

Node *head=nullptr;

void insert_at_beginning(Node* &head,int d){
    Node *t=new Node;
    t->data=d;
    if(head==nullptr){
        head=t;
        t->next=nullptr;
        t->prev=nullptr;
    }
    else{
        t->prev=nullptr;
        t->next=head;
        head->prev=t;
        head=t;
    }
}


void display(Node *head){
    Node *p=head;
    while(p!=nullptr){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

void reverse(Node* &head){
 Node *p=head,*temp=nullptr;
 while(p!=nullptr){
     temp=p->next;
     p->next=p->prev;
     p->prev=temp;
     p=p->prev;
     if(p!=nullptr && p->next==nullptr)
         head=p;
 }
}

int main(){
    insert_at_beginning(head,10);
    insert_at_beginning(head,20);
    insert_at_beginning(head,30);
    insert_at_beginning(head,40);
    insert_at_beginning(head,50);
    display(head);
    reverse(head);
    display(head);
}