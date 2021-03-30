/*
#include <iostream>
using namespace std;

void display(int arr[],size_t size){
    for(size_t i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void merg(int a[],int b[],int c[],int m, int n,int o){
    int i=0,j=0,k=0;
    
    while(i<m && j<n){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;
            k++;
        }
        else if(a[i]>b[j]){
            c[k++]=b[j++];
        }
        else if(a[i]==b[j]){
            c[k++]=a[i];
            c[k++]=b[j];
            i++;j++;
        }
    }
    for(;i<m;i++)
        c[k++]=a[i];
    for(;j<n;j++)
        c[k++]=b[j];
}

int main(){
    int a[6]{1,3,5,7,9,11},b[7]{0,2,4,6,7,10,12},c[13];
    display(a,6);
    display(b,7);
    merg(a,b,c,6,7,13);
    display(c,13);
    
    
}
*/
#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};
Node *head=nullptr;

//insertinf at the beginning of the node
void insert(int new_data){
    Node *new_node= new Node;
    new_node->data=new_data;
    new_node->next=head;
    head=new_node;
}

void display(){
    Node *temp;
    temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    insert(5);
    insert(9);
    insert(3);
    insert(4);
    display();
}