#include <iostream>
#include "Stack.hpp"
using namespace std;



bool isOperand(char s){
    if(s=='+' || s=='-' || s=='*' || s=='/' || s=='^' || s==')' || s=='(')
        return false;
    else
        return true;
}
int out_stack_precedence(char s){
    if(s=='+' || s=='-')
        return 1;
    else if(s=='*' || s=='/')
        return 3;
    else if(s=='^')
        return 6;
    else if(s=='(')
        return 7;
    else if(s==')')
        return 0;
    else 
        return -1;
}

int in_stack_precedence(char s){
     if(s=='+' || s=='-')
        return 2;
    else if(s=='*' || s=='/')
        return 4;
    else if(s=='^')
        return 5;
    else if(s=='(')
        return 0;
    
}


string convert(string infix){
    string postfix="";
    Stack st;
    int i=0;
    while(i<infix.length()){
        if(isOperand(infix[i]))
            postfix+=infix[i++];
        else{
            if(out_stack_precedence(infix[i])>in_stack_precedence(st.stackTop()))
                st.push(infix[i++]);
            else if(out_stack_precedence(infix[i])==in_stack_precedence(st.stackTop())){
                st.pop();
                i++;
            }
                 
            else
                postfix+=st.pop();
               
            
        }
            
    }
    while(!st.isEmpty())
        postfix+=st.pop();
        
    return postfix;
}

int main(){
    string s;
    cout<<"enter the exp"<<endl;
    cin>>s;
    
    cout<<"postfix: "<<convert(s)<<endl;
}
