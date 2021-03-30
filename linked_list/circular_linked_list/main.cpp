#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};
Node *head=nullptr;

//befor head Node
void insert_at_beginning(Node* &head,int d){
    Node *t=new Node;
    t->data=d;
    Node *p=head;
    if(p==nullptr){
        head=t;
        head->next=head;
        
    }
    else{
        while(p->next!=head)
            p=p->next;
        t->next=head;
        p->next=t;
        head=t;
    }
}

int length(Node *head){
    Node *p=head;
    int count=0;
    do{
        count++;
        p=p->next;
    }while(p!=head);
    return count;
    
}

void insert_at_pos(Node* &head,int pos,int d){
    Node *p=head;
    if(pos<0 || pos>length(head)){
        cout<<"invalid index"<<endl;
        return;
    }
    else{
        int i;
        
        if(pos==0){
            insert_at_beginning(head,d);
        }
        else{
            Node *t=new Node;
            t->data=d;
            for(i=0;i<pos-1;i++)
                p=p->next;
            t->next=p->next;
            p->next=t;
        
            
        }
    }
}

void delete_from_beginning(Node* &head){
    Node *p=head;
    if(head==nullptr){
        cout<<"empty list"<<endl;
    }
    else{
    while(p->next!=head)
        p=p->next;
    if(p==head)//only 1 node is present
    {
        delete head;
        head=nullptr;
    }
    else{
        p->next=head->next;
        cout<<"deleted value "<<head->data<<endl;
        delete head;
        head=p->next;
        }
    }
}

void delete_node_at(Node* &head,int pos){
    Node *p=head;
    if(pos<0 || pos>length(head))
        cout<<"invalid index "<<endl;
    else{
    if(pos==1){
        delete_from_beginning(head);
        }
    else{
        if(head==nullptr)
            cout<<"empty list";
        else{
            Node *q;
            int i;
            for(i=0;i<pos-1;i++){
                q=p;
                p=p->next;
            }
            q->next=p->next;
            cout<<"deleted value "<<p->data<<endl;
            delete p;
        }
    }
} }

void display(Node *head){
    Node *p=head;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
    cout<<endl;
}

int main(){
    insert_at_beginning(head,5);
    insert_at_beginning(head,10);
    display(head);
    insert_at_pos(head,2,15);
    display(head);
    insert_at_pos(head,1,20);
    display(head);
    insert_at_pos(head,4,25);
    insert_at_pos(head,3,30);
    insert_at_pos(head,0,12);
    display(head);
    delete_from_beginning(head);
    delete_from_beginning(head);
    display(head);
    delete_node_at(head,2);
    delete_node_at(head,4);
    delete_node_at(head,1);
    display(head);
    
    
}