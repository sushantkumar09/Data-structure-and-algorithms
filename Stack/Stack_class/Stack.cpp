#include <iostream>
#include "Stack.hpp"

void Stack::push(int d){
    Node *p=new Node;
    if(p==nullptr)
        std::cout<<"stack overflow"<<std::endl;
    else{
        p->data=d;
        p->next=top;
        top=p;
    }    
}

int Stack::pop(){
    int x=-1;
    if(top==nullptr)
        std::cout<<"stack underflow"<<std::endl;
    else{
        Node *p=top;
        top=top->next;
        x=p->data;
        delete p;
    }
    return x;
}

void Stack::display(){
    Node *t=top;
    while(t!=nullptr){
        std::cout<<t->data<<" ";
        t=t->next;
    }
    std::cout<<std::endl;
}

int Stack::peek(int pos){
    Node *p=top;
    for(int i=0;i<pos-1 && p;i++)
        p=p->next;
    if(p)
        return p->data;
    else
        return -1;
}

bool Stack::isEmpty(){
    if(top==nullptr)
        return true;
    else 
        return false;
}

bool Stack::isFull(){
    Node *p=new Node;
    bool x;
    if(p)
        x=false;
    else 
        x=true;
    delete p;
    return x;
}

int Stack::stackTop(){
    if(top)
        return top->data;
    else
        return -1;
} 
