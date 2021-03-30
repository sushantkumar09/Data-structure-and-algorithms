#ifndef _STACK_H_
#define _STACK_H_

class Node{
public:
    int data;
    Node *next;
};
class Stack
{
    Node *top;
public:
    Stack(){top=nullptr;}
   
    void push(int d);
    int pop();
    int stackTop();
    void display();
    bool isEmpty();
    bool isFull();
    int peek(int pos);

};
#endif // _STACK_H_
