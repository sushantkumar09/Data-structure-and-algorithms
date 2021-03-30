#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};
Node *head=nullptr;

//insertinf at the beginning of the node
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
bool lsearch(Node *p,int key){
    while(p!=nullptr){
        if(key==p->data)
            return true;
        p=p->next;
    }
    return false;
}
  
bool improved_lsearch(Node *p,int key){
    Node *q;
    while(p!=nullptr){
        if(key==p->data){
            q->next=p->next;
            p->next=head;
            head=p;
            return true;
        }
        q=p;
        p=p->next;
    }
    return false;
}  
    
int main(){
    insert(5);
    insert(9);
    insert(3);
    insert(4);
    display();
    if(lsearch(head,10))
        cout<<"found "<<endl;
    else
        cout<<"not found"<<endl;
    if(improved_lsearch(head,3))
        cout<<"found "<<endl;
    else
        cout<<"not found"<<endl;
}