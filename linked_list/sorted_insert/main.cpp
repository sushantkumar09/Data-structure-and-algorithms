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

//inserting in a sorted linked list
void sorted_insert(int val){
    Node *p=head;
    Node *q=nullptr;
    Node *new_node= new Node;
    new_node->data=val;
    new_node->next=nullptr;
    //if the list if empty
    if(head==nullptr){
        head=new_node;
    }
    //if list is not empty
    else{
        while(p && p->data<val){
            q=p;
            p=p->next;
        }
        //inserting before the first node
        if(p==head){
            new_node->next=head;
            head=new_node;
        }
        else{
            new_node->next=q->next;
            q->next=new_node;
        }
        
    }
}    


int main(){
    sorted_insert(3);
    sorted_insert(7);
    sorted_insert(9);
    sorted_insert(12);
    sorted_insert(5);
    display();
}