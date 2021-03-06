#include <iostream>
using namespace std;

class TreeNode{
public:
    int data;
    TreeNode *lchild;
    TreeNode *rchild;
    int height;
};
TreeNode *root=nullptr;

int NodeHeight(TreeNode *p){
    int hl,hr;
    hl=(p && p->lchild)?p->lchild->height:0;
    hr=(p && p->rchild)?p->rchild->height:0;
    
    return (hl>hr)?hl+1:hr+1;
}

int BalanceFactor(TreeNode *p){
    int hl,hr;
    hl=(p && p->lchild)?p->lchild->height:0;
    hr=(p && p->rchild)?p->rchild->height:0;
    
    return hl-hr;
}

TreeNode* LLRotation(TreeNode *p){
    TreeNode *pl=p->lchild;
    TreeNode *plr=pl->rchild;
    
    pl->rchild=p;
    p->lchild=plr;
     
    p->height=NodeHeight(p);
    pl->height=NodeHeight(pl);
    
    if(p==root)
        root=pl;
    return pl;
}


TreeNode* LRRotation(TreeNode *p){
    return nullptr;
}

TreeNode* RRRotation(TreeNode *p){
    return nullptr;
}

TreeNode* RLRotation(TreeNode *p){
    return nullptr;
}


TreeNode* RInsert(TreeNode *p,int key){
    TreeNode *t=nullptr;
    if(p==nullptr){
        t=new TreeNode;
        t->data=key;
        t->lchild=t->rchild=nullptr;
        t->height=1;
        return t;
    }
    if(key < p->data)
        p->lchild=RInsert(p->lchild,key);
    else if(key > p->data)
        p->rchild=RInsert(p->rchild,key);
    
    p->height=NodeHeight(p);
    
    if(BalanceFactor(p)==2 && BalanceFactor(p->lchild)==1)
        return LLRotation(p);
    else if(BalanceFactor(p)==2 && BalanceFactor(p->lchild)==-1)
        return LRRotation(p);
    else if(BalanceFactor(p)==-2 && BalanceFactor(p->rchild)==-1)
        return RRRotation(p);
    else if(BalanceFactor(p)==-2 && BalanceFactor(p->rchild)==1)
        return RLRotation(p);
    return(p);
}

void preorder(TreeNode *t){
    if(t!=nullptr){
        cout<<t->data<<" ";
        preorder(t->lchild);
        preorder(t->rchild);
    }
}

int main(){
    root=RInsert(root,10);
    RInsert(root,5);
    RInsert(root,2);
    preorder(root);
    
    
}