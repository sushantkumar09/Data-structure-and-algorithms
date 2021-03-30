#include <iostream>
#include "Stack.hpp"
using namespace std;

Stack s1,s2;

void enqueue(int x){
    s1.push(x);
}

int dequeue(){
    int x=-1;
    if(s2.isEmpty()){
        if(s1.isEmpty()){
            cout<<"queue is empty"<<endl;
            return x;
        }
        else{
            while(!s1.isEmpty()){
                s2.push(s1.pop());
            }
        }
            
    }
    x=s2.pop();
    return x;
}

void display_front(){
    if(!s2.isEmpty())
        cout<<s2.stackTop()<<" ";
    else{
        while(!s1.isEmpty()){
            s2.push(s1.pop());
        }
        cout<<s2.stackTop()<<" ";
    }
    cout<<endl;
    
}

void display(){
    Stack s3;
    if(!s2.isEmpty()){
        
        while(!s2.isEmpty()){
            cout<<s2.stackTop()<<" ";
            s3.push(s2.pop());
        }
            
    }
    while(!s3.isEmpty()){
        s2.push(s3.pop());
    }
    if(!s1.isEmpty()){
        while(!s1.isEmpty())
            s3.push(s1.pop());
    }
    while(!s3.isEmpty()){
        cout<<s3.stackTop()<<" ";
        s1.push(s3.pop());
    }
   cout<<endl;
        
}
        



int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display_front();
    display();
    dequeue();
    dequeue();
    display_front();
    display();
}