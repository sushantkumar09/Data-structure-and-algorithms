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

bool isLoop(Node *head){
    Node *p=head,*q=head;
    while(p && q){
        p=p->next;
        q=q->next;
        q=q!=nullptr?q->next:nullptr;
        if(p==q)
            return true;
    }
    return false;
}


  
int main(){
    insert(5);
    insert(9);
    insert(3);
    insert(4);
    display();
    if(isLoop(head))
        cout<<"loop present"<<endl;
    else
        cout<<"loop not present"<<endl;
}