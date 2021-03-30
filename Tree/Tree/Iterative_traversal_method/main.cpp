#include <iostream>
#include <queue>
#include <stack>
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

void IterativePreOrder(TreeNode *p){
    stack<TreeNode *>st;
    while(p!=nullptr || !st.empty()){
        if(p!=nullptr){
            cout<<p->data<<" ";
            st.push(p);
            p=p->lchild;
        }
        else{
            p=st.top();
            st.pop();
          
            p=p->rchild;
        }
    }
}

void IterativeInOrder(TreeNode *p){
     stack<TreeNode *>st;
    while(p!=nullptr || !st.empty()){
        if(p!=nullptr){
            
            st.push(p);
            p=p->lchild;
        }
        else{
            p=st.top();
            st.pop();
            cout<<p->data<<" ";
          
            p=p->rchild;
        }
    }
    
}





int main(){
    
    create_tree();
    cout<<"preorder traversal: ";
    preorder(root);
    cout<<endl;
    cout<<"iterative preorder: ";
    IterativePreOrder(root);
    cout<<endl;
    cout<<"postorder traversal: ";
    postorder(root);
    cout<<endl;
    
    cout<<"inorder traversal: ";
    inorder(root);
    cout<<endl;
    
    cout<<"iterative inorder traversal: ";
    IterativeInOrder(root);
    cout<<endl;
    
   
    
}