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

void create_tree(){
    queue<TreeNode* >q;
    TreeNode *t,*p;
    int x;
    root=new TreeNode;
    cout<<"enter root node "<<endl;
    cin>>x;
    root->data=x;
    root->lchild=root->rchild=nullptr;
    q.push(root);
    while(!q.empty()){
        p=q.front();
        q.pop();
        cout<<"enter left child "<<endl;
        cin>>x;
        if(x!=-1){
            t=new TreeNode;
            t->data=x;
            t->lchild=t->rchild=nullptr;
            p->lchild=t;
            q.push(t);
        }
        
        cout<<"enter right child "<<endl;
        cin>>x;
        if(x!=-1){
            t=new TreeNode;
            t->data=x;
            t->lchild=t->rchild=nullptr;
            p->rchild=t;
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

int count(TreeNode *p){
    int x,y;
    if(p!=nullptr){
        x=count(p->lchild);
        y=count(p->rchild);
        return x+y+1;
    }
    return 0;
}
//maximum depth of the tree or height in terms of number of node
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


int sum(TreeNode *p){
    int x,y;
    if(p!=nullptr){
        x=sum(p->lchild);
        y=sum(p->rchild);
        return x+y+p->data;
    }
    return 0;
}

int main(){
    
    create_tree();
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    cout<<"number of nodes: "<<count(root)<<endl;
    cout<<"height if tree: "<<height(root)-1<<endl;
    cout<<"maximun depth: "<<height(root)<<endl;
    cout<<"sum: "<<sum(root)<<endl;
}