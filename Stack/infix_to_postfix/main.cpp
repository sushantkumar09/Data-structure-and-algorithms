#include <iostream>
using namespace std;

class Node{
public:
    char data;
    Node *next;
};
Node *top=nullptr;

void push(char d){
    Node *p= new Node;
    if(p==nullptr)
        cout<<"Stack overflow"<<endl;
    else{
        p->data=d;
        p->next=top;
        top=p;
    }
}

char pop(){
    char x='-1';
    Node *p=top;
    if (p==nullptr)
        cout<<"stack underflow"<<endl;
    else{
        x=top->data;
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
}
bool isFull(){
    Node *p=new Node;
    bool x;
    if(p)
        x=false;
    else 
        x=true;
    delete p;
    return x;
}

char stackTop(){
    if(top)
        return top->data;
    else
        return -1;
} 

bool isOperand(char s){
    if(s=='+' || s=='-' || s=='*' || s=='/')
        return false;
    else
        return true;
}

int precedence(char i){
    if(i=='+' || i=='-')
        return 1;
    else if(i=='*' || i=='/')
        return 2;
    return 0;
} 

string convert(string infix){
    string postfix;
    int i=0,j=0;
    while(i<infix.length()){
        if(isOperand(infix[i]))
          
           postfix+=infix[i++];
    
        else{
            if(precedence(infix[i])>precedence(stackTop()))
                push(infix[i++]);
            else
               
               postfix+=pop();
        }
    }
    while(!isEmpty()){
       postfix+=pop();
    }
   
    return postfix;
        
}

int main(){
    string s;
    cout<<"enter the exp"<<endl;
    cin>>s;
    
    cout<<"postfix: "<<convert(s)<<endl;
}
