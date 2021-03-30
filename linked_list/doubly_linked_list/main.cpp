#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node *prev;
};

Node *head=nullptr;

void insert_at_beginning(Node* &head,int d){
    Node *t=new Node;
    t->data=d;
    if(head==nullptr){
        head=t;
        t->next=nullptr;
        t->prev=nullptr;
    }
    else{
        t->prev=nullptr;
        t->next=head;
        head->prev=t;
        head=t;
    }
}

void display(Node *head){
    Node *p=head;
    while(p!=nullptr){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
int length(Node *head){
    Node *p=head;
    int count=0;
    while(p!=nullptr){
        count++;
        p=p->next;
    }
    return count;
}
void insert_at_pos(Node* &head,int pos,int d){
    if(pos<0 || pos>length(head))
        cout<<"invalid index"<<endl;
    else{
        if(pos==0)
            insert_at_beginning(head,d);
        else{
            Node *t=new Node;
            t->data=d;
            Node *p=head;
            for(int i=0;i<pos-1;i++)
                p=p->next;
            t->next=p->next;
            t->prev=p;
            if(p->next)
                p->next->prev=t;
            p->next=t;
            
        }
        
    }
}

void delete_from_beginning(Node* &head){
    if(head==nullptr)
        cout<<"no node to delete"<<endl;
    else{
        Node *p=head;
        cout<<"deleted value: "<<p->data<<endl;
        head=head->next;
        if(head)
            head->prev=nullptr;
        delete p;
    }
}

void delete_node_at(Node* &head,int pos){
    if(pos<0 || pos>length(head))
        cout<<"invalid index"<<endl;
    else{
        if(pos==1)
            delete_from_beginning(head);
        else{
            Node *p=head;
            for(int i=0;i<pos-1;i++)
                p=p->next;
            cout<<"deleted value: "<<p->data<<endl;
            p->prev->next=p->next;
            if(p->next)
                p->next->prev=p->prev;
            delete p;
            
        }
    }
}

int main(){
    insert_at_beginning(head,10);
    insert_at_beginning(head,20);
    insert_at_beginning(head,30);
    insert_at_beginning(head,40);
    insert_at_beginning(head,50);
    display(head);
    insert_at_pos(head,1,15);
    insert_at_pos(head,2,25);
    insert_at_pos(head,5,35);
    insert_at_pos(head,0,5);
    insert_at_pos(head,10,60);
    display(head);
    delete_from_beginning(head);
    delete_from_beginning(head);
    display(head);
    delete_node_at(head,3);
    delete_node_at(head,5);
    delete_node_at(head,1);
    display(head);
}