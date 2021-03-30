#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};
Node *front=nullptr;
Node *rear=nullptr;

void enqueue(int x){
    Node *t=new Node;
    if(t==nullptr)
        cout<<"queue is full"<<endl;
    else{
        t->data=x;
        t->next=nullptr;
        if(front==nullptr)
            front=rear=t;
        else{
            rear->next=t;
            rear=t;
        }
    }
}

int dequeue(){
    int x=-1;
    if(front==nullptr)
        cout<<"queue is empty"<<endl;
    else{
        Node*p=front;
        front=front->next;
        x=p->data;
        delete(p);
        
    }
    return x;
}

void display(){
    Node *p=front;
    while(p!=nullptr){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    dequeue();
    dequeue();
    display();
}