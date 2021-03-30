#include <iostream>
using namespace std;

class Queue{
public:
    int size;
    int front;
    int rear;
    int *Q;
};

void enqueue(Queue *q,int x){
    if(q->front==(q->rear+1)%q->size)
        cout<<"queue is full "<<endl;
    else{
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear]=x;
    }
}

int dequeue(Queue *q){
    int x=-1;
    if(q->front==q->rear)
        cout<<"queue is empty"<<endl;
    else{
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    }
    return x;
}
void display(Queue q){
    int i=q.front+1;
    while(i!=(q.rear+1)%q.size){
        cout<<q.Q[i]<<" ";
        i=(i+1)%q.size;
    }
    cout<<endl;
}
int main(){
    Queue q;
    cout<<"enter the size of queue"<<endl;
    cin>>q.size;
    q.Q=new int[q.size];
    q.front=q.rear=0;
    
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    enqueue(&q,40);
    enqueue(&q,50);
    display(q);
    cout<<"element removed from the queue ";
    cout<<dequeue(&q)<<" "<<dequeue(&q)<<endl;
    enqueue(&q,60);
    enqueue(&q,70);
    display(q);
    enqueue(&q,100);
    //cout<<dequeue(&q)<<endl;
}

