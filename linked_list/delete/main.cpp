#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};
Node *head=nullptr;
//Node *second=nullptr;

//inserting at the beginning of the node
void insert(int new_data){
    Node *new_node= new Node;
    new_node->data=new_data;
    new_node->next=head;
    head=new_node;
}

void display(){
    Node *temp;
    temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void delete_from_end(){
    Node *p=head,*q;
    while(p->next!=nullptr){
        q=p;
        p=p->next;
    }
    int x=p->data;
    cout<<"deleted value "<<x<<endl;
    q->next=nullptr;
    delete p;
}

void delete_from_beginning(){
    Node *p=head;
    head=head->next;
    int x=p->data;
    cout<<"deleted value "<<x<<endl;
    delete p;
    
}
void delete_node_at(int pos){
    Node *p=head,*q;
    for(int i=0;i<pos-1;i++){
        q=p;
        p=p->next;
        
    }
    q->next=p->next;
    int x=p->data;
    cout<<"deleted value "<<x<<endl;
    delete p;
}
  
int main(){
    insert(5);
    insert(9);
    insert(3);
    insert(4);
    insert(10);
    insert(12);
    insert(7);
    display();
    delete_from_end();
    display(); 
    delete_from_beginning();
    display();
    delete_node_at(2);
    display();
    delete_node_at(3);
    display();
}