#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};
Node *first=nullptr;
Node *second=nullptr;

//inserting at the beginning of the node
void insert(Node* &head,int new_data){
    Node *new_node= new Node;
    new_node->data=new_data;
    new_node->next=head;
    head=new_node;
}

void display(Node *head){
    Node *temp;
    temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void concatination(Node *first,Node *second){
    Node *p=first;
    while(p->next!=nullptr){
        p=p->next;
    }
    p->next=second;
}
  
int main(){
    insert(first,5);
    insert(first,9);
    insert(first,3);
    insert(first,4);
    display(first);
    insert(second,15);
    insert(second,19);
    insert(second,13);
    insert(second,4);
    display(second);
    concatination(first,second);
    display(first);
    
}