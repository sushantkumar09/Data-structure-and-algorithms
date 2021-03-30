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

void remove_duplicate(){
    Node *p=head,*q=head->next;
    while(q!=nullptr){
        if(q->data!=p->data){
            p=q;
            q=q->next;
        }
        else{
            p->next=q->next;
            delete q;
            q=p->next;
        }
    }
}
  
int main(){
    insert(10);
    insert(8);
    insert(8);
    insert(5);
    insert(5);
    insert(5);
    insert(4);
    display();
    remove_duplicate();
    display();
}