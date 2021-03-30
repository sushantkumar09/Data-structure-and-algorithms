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

bool search(TreeNode *p,int key){
    while(p!=nullptr){
        if(p->data == key)
            return true;
        else if(key < p->data)
            p=p->lchild;
        else
            p=p->rchild;
    }
    return false;
}

bool Rsearch(TreeNode *p,int key){
    if(p==nullptr)
        return false;
    if(p->data == key)
        return true;
    else if(key < p->data)
        Rsearch(p->lchild,key);
    else
        Rsearch(p->rchild,key);
}

void inorder(TreeNode *t){
    if(t!=nullptr){
        inorder(t->lchild);
        cout<<t->data<<" ";
        inorder(t->rchild);
    }
}

int main(){
    root=insert(root,30);
    insert(root,20);
    insert(root,10);
    insert(root,15);
    insert(root,25);
    inorder(root);
    cout<<"enter the value to be searched: "<<endl;
    int x;
    cin>>x;
    if(search(root,x))
        cout<<"key found "<<endl;
    else
        cout<<"key not found: "<<endl;
    cout<<"enter the value to be searched: "<<endl;
    cin>>x;
    if(Rsearch(root,x))
        cout<<"key found "<<endl;
    else
        cout<<"key not found: "<<endl;
}