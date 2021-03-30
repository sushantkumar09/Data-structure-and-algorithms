#include <iostream>
using namespace std;
 
class TreeNode{
public:
     TreeNode *lchild;
     TreeNode *rchild;
     int data;
};
TreeNode *root=nullptr;

TreeNode* insert(TreeNode *p,int x){//returns a pointer to the newly generated node
    TreeNode *t,*r;
    if(p==nullptr){
        t=new TreeNode;
        t->data=x;
        t->lchild=t->rchild=nullptr;
        return t;
    }
    while(p!=nullptr){
        r=p;
        if(p->data==x)
            return nullptr;
        else if(x < p->data)
            p=p->lchild;
        else 
            p=p->rchild;
    }
    t=new TreeNode;
    t->data=x;
    t->lchild=t->rchild=nullptr;
    if(x <r->data)
        r->lchild=t;
    else
        r->rchild=t;
    return t;
}

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
    root=Rinsert(root,30);
    Rinsert(root,20);
    Rinsert(root,10);
    Rinsert(root,15);
    Rinsert(root,25);
    inorder(root);
    
    
    
}