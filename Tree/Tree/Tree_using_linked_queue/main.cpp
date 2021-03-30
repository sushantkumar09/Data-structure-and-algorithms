#include <iostream>
#include <queue>
using namespace std;

class TreeNode{
public:
    TreeNode *lchild;
    TreeNode *rchild;
    int data;
};

TreeNode *root=nullptr;
/*
class Queue{
public:
    TreeNode **data;
    Queue *next;
};

Queue *front=nullptr,*rear=nullptr;

void enqueue(TreeNode **x){
    Queue *q=new Queue;
    q->data=x;
    q->next=nullptr;
    if(front==nullptr){
        front=rear=q;
    }
    else{
        rear->next=q;
        rear=q;
    }
}

TreeNode** dequeue(){
    if(rear!=nullptr){//if only one element is present
        if(!front->next){
            TreeNode **p;
            p=front->data;
            delete(front);
            front=rear=nullptr;
            return p;
        }
        else{
            TreeNode **p;
            Queue *t=front;
            p=front->data;
            front=front->next;
            delete(t);
            return p;
        }
    }
    return nullptr;
}

bool isEmpty(){
    if(front==nullptr && rear==nullptr)
        return true;
    else
        return false;
    
}
*/
void create_tree(){
    queue<TreeNode* >q;
    TreeNode *t,*p;
    
    //TreeNode *p;
    int x;
    root=new TreeNode;
    cout<<"enter root node "<<endl;
    cin>>x;
    root->data=x;
    root->lchild=root->rchild=nullptr;
    q.push(root);
    //enqueue(&root);
    while(!q.empty()){
        //p=dequeue();
        p=q.front();
        q.pop();
        cout<<"enter left child "<<endl;
        cin>>x;
        if(x!=-1){
            t=new TreeNode;
            t->data=x;
            t->lchild=t->rchild=nullptr;
            p->lchild=t;
            //p->lchild=t;
            //(*p)->lchild=t;
            q.push(t);
            
           // enqueue(&t);
            
        }
        
        cout<<"enter right child "<<endl;
        cin>>x;
        if(x!=-1){
            t=new TreeNode;
            t->data=x;
            t->lchild=t->rchild=nullptr;
            p->rchild=t;
            //(*p)->rchild=t;
            //enqueue(&t);
            q.push(t);
            
        }
    }
}
void preorder(TreeNode *t){
    if(t!=nullptr){
        cout<<t->data<<" ";
        preorder(t->lchild);
        preorder(t->rchild);
        
    }
}

void postorder(TreeNode *t){
    if(t!=nullptr){
        postorder(t->lchild);
        postorder(t->rchild);
        cout<<t->data<<" ";
        
    }
}
void inorder(TreeNode *t){
    if(t!=nullptr){
        inorder(t->lchild);
        cout<<t->data<<" ";
        inorder(t->rchild);
        
        
    }
    
}

int main(){
    
    create_tree();
    preorder(root);
    cout<<endl;
    postorder(root);
}