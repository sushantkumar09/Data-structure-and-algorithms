#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};
Node *head=nullptr;

void display(){
    Node *temp;
    temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insert_at_beginning(int d){
    Node *new_node= new Node;
    new_node->data=d;
    new_node->next=head;
    head=new_node;
}

void insert_at_pos(int pos,int d){
    Node *new_node= new Node;
    new_node->data=d;
    Node *p=head;
    for(int i=0;i<pos-1;i++)
        p=p->next;
    new_node->next=p->next;
    p->next=new_node;
    
}

void insert_at_end(int d){
    Node *new_node= new Node;
    Node *p=head;
    while(p->next!=nullptr)
        p=p->next;
    new_node->data=d;
    new_node->next=nullptr;
    p->next=new_node;
    
}


int main(){
    insert_at_beginning(5);
    insert_at_beginning(9);
    insert_at_beginning(3);
    insert_at_beginning(4);
    display();
    insert_at_pos(4,10);
    insert_at_pos(2,7);
    insert_at_pos(1,13);
    insert_at_end(33);
    insert_at_end(43); 
    display();
}