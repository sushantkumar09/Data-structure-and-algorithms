#include <iostream>
using namespace std;

class Queue{
public:
    int size;
    int front;
    int rear;
    int *Q;//pointer to array
};

void enqueue(Queue *q,int x){
    if(q->rear==q->size-1)
        cout<<"queue is full "<<endl;
    else{
        q->rear++;
        q->Q[q->rear]=x;
    }
}

int dequeue(Queue *q){
    int x=-1;
    if(q->front==q->rear)
        cout<<"queue is empty"<<endl;
    else{
        q->front++;
        x=q->Q[q->front];
    }
    return x;
        
}

int main(){
    Queue q;
    cout<<"enter the size of queue"<<endl;
    cin>>q.size;
    q.Q=new int[q.size];
    q.front=q.rear=-1;
    for(int i=0;i<q.size/2;i++)
        enqueue(&q,i+10);
    for(int i=q.front+1;i<=q.rear;i++)
        cout<<q.Q[i]<<" ";
    cout<<endl;
    cout<<"element removed from the queue "<<endl;
    for(int i=0;i<3;i++)
        cout<<dequeue(&q)<<" ";
    cout<<endl;
    for(int i=q.front+1;i<=q.rear;i++)
        cout<<q.Q[i]<<" ";
    cout<<endl;
}