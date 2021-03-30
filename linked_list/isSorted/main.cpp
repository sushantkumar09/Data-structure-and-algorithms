#include <iostream>
#include <climits>
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

bool isSorted(){
    int x=INT_MIN;
    Node *p=head;
    while(p!=nullptr){
        if(p->data<x)
            return false;
        x=p->data;
        p=p->next;
    }
    return true;
    
}
  
int main(){
    insert(11);
    insert(9);
    insert(5);
    insert(4);
    display();
    if(isSorted())
        cout<<"Sorted "<<endl;
    else
        cout<<"Not Sorted"<<endl;
    
}