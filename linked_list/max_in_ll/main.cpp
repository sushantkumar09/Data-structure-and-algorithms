#include <iostream>
#include <climits>
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

int max_element(Node *p){
    //int max=-32786;
    int max=INT_MIN;
    //int max=p->data;
    while(p!=nullptr){
        if(p->data>max)
            max=p->data;
        p=p->next;
    }
    return max;
}

int main(){
    insert(5);
    insert(9);
    insert(3);
    insert(4);
    display();
    cout<<"max "<<max_element(head)<<endl;
    
}