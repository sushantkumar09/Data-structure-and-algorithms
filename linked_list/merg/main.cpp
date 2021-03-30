#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};
Node *first=nullptr;
Node *second=nullptr;
Node *third=nullptr;

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

void merge(Node* &third,Node* first,Node* second){
    Node *last=nullptr;
    if(first->data < second->data){
        third=last=first;
        first=first->next;
        last->next=nullptr;
    }
    else{
        third=last=first;
        first=first->next;
        last->next=nullptr;
    }
    
    while(first!=nullptr && second!=nullptr){
        if(first->data < second->data){
            last->next=first;
            last=first;
            first=first->next;
            last->next=nullptr;
        
        }
        else{
            last->next=second;
            last=second;
            second=second->next;
            last->next=nullptr;
        }
    }
    if(first!=nullptr)
        last->next=first;
    else
        last->next=second;
    
    
}


int main(){
    insert(first,15);
    insert(first,10);
    insert(first,8);
    insert(first,2);
    display(first);
    insert(second,14);
    insert(second,12);
    insert(second,10);
    display(second);
    merge(third,first,second);
    display(third);
    
    return 0;
}