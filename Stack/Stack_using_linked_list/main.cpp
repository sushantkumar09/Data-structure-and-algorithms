 #include <iostream>
using namespace std;

class Node{
public:
    
    int data;
    Node *next;
};
Node *top=nullptr;

void push(int d){
    Node *t= new Node;
    if(t==nullptr)
        cout<<"stack overflow "<<endl;
    else{
        t->data=d;
        t->next=top;
        top=t;
    }
}

void display(){
    Node *t=top;
    while(t!=nullptr){
        cout<<t->data<<" ";
        t=t->next;
    }
    cout<<endl;
}

int pop(){
    int x=-1;
    if(top==nullptr)
        cout<<"stack underflow"<<endl;
    else{
        Node *p=top;
        top=top->next;
        x=p->data;
        delete p;
    }
    return x;
}

int peek(int pos){
    Node *p=top;
    for(int i=0;i<pos-1 && p;i++)
        p=p->next;
    if(p)
        return p->data;
    else
        return -1;
}

bool isEmpty(){
    if(top==nullptr)
        return true;
    else 
        return false;
}

bool isFull(){
    Node *p=new Node;clTabCtrl
    bool x;
    if(p)
        x=false;
    else 
        x=true;
    delete p;
    return x;
}

int stackTop(){
    if(top)
        return top->data;
    else
        return -1;
} 

int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    display();
    cout<<"poped value: "<<pop()<<endl;
    cout<<"poped value: "<<pop()<<endl;
    display();
    cout<<"1st value: "<<peek(1)<<endl;
    cout<<"2st value: "<<peek(2)<<endl;
    display();
    cout<<"5th value: "<<peek(5)<<endl;
    display();
    if(isEmpty())
        cout<<"empty stack "<<endl;
    else
        cout<<"non-empty stack "<<endl;
    if(isFull())
        cout<<"stack full "<<endl;
    else
        cout<<"non-full stack "<<endl;
    cout<<"top value "<<stackTop()<<endl;
    
}