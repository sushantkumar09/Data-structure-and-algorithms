#include <iostream>
#include "Stack.hpp"
using namespace std;

int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.display();
    cout<<"poped value: "<<st.pop()<<endl;
    cout<<"poped value: "<<st.pop()<<endl;
    st.display();
    cout<<"1st value: "<<st.peek(1)<<endl;
    cout<<"2st value: "<<st.peek(2)<<endl;
    st.display();
    cout<<"5th value: "<<st.peek(5)<<endl;
    st.display();
    if(st.isEmpty())
        cout<<"empty stack "<<endl;
    else
        cout<<"non-empty stack "<<endl;
    if(st.isFull())
        cout<<"stack full "<<endl;
    else
        cout<<"non-full stack "<<endl;
    cout<<"top value "<<st.stackTop()<<endl;
    
}