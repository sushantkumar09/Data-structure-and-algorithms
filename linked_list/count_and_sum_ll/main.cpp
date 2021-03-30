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
int count_node(Node *p){
    int count=0;
    while(p!=nullptr){
        count+=1;
        p=p->next;
    }
    return count;
}

int sum(Node *p){
    int sum=0;
    while(p!=nullptr){
        sum+=p->data;
        p=p->next;
    }
    return sum;
}
int main(){
    insert(5);
    insert(9);
    insert(3);
    insert(4);
    display();
    cout<<"number of node:"<<count_node(head)<<endl;
    cout<<"sum of node:"<<sum(head)<<endl;
    
}