#include <iostream>
using namespace std;

class Stack{
public:
    int top;
    int size;
    int *s;
};

void create(Stack *st){
    cout<<"enter size "<<endl;
    cin>>st->size;
    st->top=-1;
    st->s=new int[st->size];
}

void display(Stack st){
    int i;
    for(i=st.top;i>-1;i--)
        cout<<st.s[i]<<" ";
    cout<<endl;
}

void push(Stack *st,int x){
    if(st->top==st->size-1)
        cout<<"stack overflow "<<endl;
    else{
        st->top++;
        st->s[st->top]=x;
    }
}
int pop(Stack *st){
    int x=-1;
    if(st->top==-1)
        cout<<"stack underflow "<<endl;
    else{
        x=st->s[st->top];
        st->top--;
    }
    return x;
}

int peek(Stack st,int pos){
    int x=-1;
    if(st.top-pos+1<0)
        cout<<"invalid position "<<endl;
    else{
        x=st.s[st.top-pos+1];
    }
    return x;
}
bool isEmpty(Stack st){
    if(st.top==-1)
        return true;
    else
        return false;
}

bool isFull(Stack st){
    if(st.top==st.size-1)
        return true;
    else
        return false;
}

int stackTop(Stack st){
   if(st.top==-1)
     return -1;
   else
     return st.s[st.top];
}

int main(){
    Stack st;
    create(&st);
    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);
    display(st);
    cout<<"poped: "<<pop(&st)<<endl;
    cout<<"poped: "<<pop(&st)<<endl;
    display(st);
    cout<<"1st value "<<peek(st,1)<<endl;
    cout<<"2nd value "<<peek(st,2)<<endl;
    
    cout<<"3nd value "<<peek(st,3)<<endl;
    display(st);
    if(isEmpty(st))
        cout<<"empty stack "<<endl;
    else
        cout<<"non-empty stack "<<endl;
    if(isFull(st))
        cout<<"stack full "<<endl;
    else
        cout<<"non-full stack "<<endl;
    cout<<"top value "<<stackTop(st)<<endl;
    
}
    
