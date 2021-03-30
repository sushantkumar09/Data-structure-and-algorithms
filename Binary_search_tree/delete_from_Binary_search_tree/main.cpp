#include <iostream>
using namespace std;
 
class TreeNode{
public:
     TreeNode *lchild;
     TreeNode *rchild;
     int data;
};
TreeNode *root=nullptr;

// recursive fuction to insert in a BST
TreeNode* Rinsert(TreeNode *p,int x){
    TreeNode *t;
    if(p==nullptr){
        t=new TreeNode;
        t->data=x;
        t->lchild=t->rchild=nullptr;
        p=t;
        return t;
    }
    if(x < p->data)
        p->lchild=Rinsert(p->lchild,x);
    else if(x > p->data)
        p->rchild=Rinsert(p->rchild,x);
    return t;
    
}


int height(TreeNode *p){
    int x,y;
    if(p!=nullptr){
        x=height(p->lchild);
        y=height(p->rchild);
        if(x>y)
            return x+1;
        else
            return y+1;
    }
    return 0;//return -1 for height in term of edges
}


TreeNode* InPre(TreeNode* p){
    while(p && p->lchild)
        p=p->rchild;
    return p;
}

TreeNode* InSucc(TreeNode* p){
    while(p && p->rchild)
        p=p->lchild;
    return p;
}



TreeNode* delete_node(TreeNode *p,int key){
    TreeNode *q;
    if(p==nullptr)
        return nullptr;
    if(p->lchild==nullptr && p->rchild==nullptr){
        if(p==root)
            root=nullptr;
        delete p;
        return nullptr;
    }
    if( key < p->data)
        p->lchild=delete_node(p->lchild,key);
    else if(key > p->data)
        p->rchild=delete_node(p->rchild,key);
    else{
        if(height(p->lchild) > height(p->rchild)){
            q=InPre(p->lchild);
            p->data=q->data;
            p->lchild=delete_node(p->lchild,q->data);
        }
        else{
            q=InSucc(p->rchild);
            p->data=q->data;
            p->rchild=delete_node(p->rchild,q->data);
        }
    }
    return p;
}


void inorder(TreeNode *t){
    if(t!=nullptr){
        inorder(t->lchild);
        cout<<t->data<<" ";
        inorder(t->rchild);
        
        
    }
    
}

int main(){
    root=Rinsert(root,20);
    Rinsert(root,30);
    Rinsert(root,25);
    Rinsert(root,27);
    Rinsert(root,26);
    inorder(root);
    cout<<endl;
    delete_node(root,25);
    inorder(root);
    
    
    
    
}