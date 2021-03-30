#include <iostream>
#include <string>
using namespace std;

class Node{
public:
    char data;
    Node *next;
};
Node *top=nullptr;

void push(char d){
    Node *p=new Node;
    if(p==nullptr)
        cout<<"stack overflow"<<endl;
    else{
        p->data=d;
        p->next=top;
        top=p;
    }
}

char pop(){
    char x='-1';
    Node *p=top;
    if(p==nullptr)
        cout<<"stack underflow"<<endl;
    else{
        x=p->data;
        top=top->next;
        delete p;
    }
    return x;
    
}

bool isEmpty(){
    if(top==nullptr)
        return true;
    else
        return false;
}
void display(){
    Node *p=top;
    while(p!=nullptr){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}clTabCtrl

bool isMatching(string exp){
  
    for(int i=0;i<exp.length();i++){
        if(exp[i]=='(')
            push(exp[i]);
        else if(exp[i]==')'){
            if(isEmpty())
                return false;
            else
                pop();
        }
        
    }
    if(isEmpty())
        return true;
    else
        return false;
    
}

int main(){
    
    string s;
    cout<<"enter the exp"<<endl;
  anthesis matched"<<endl;
    else
        cout<<"paranthesis not matched"<<endl;
   
}