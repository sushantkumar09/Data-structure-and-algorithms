#include <iostream>
#include <stack>
#include <limits.h>
using namespace std;

class TreeNode{
public:
     TreeNode *lchild;
     TreeNode *rchild;
     int data;
};
TreeNode *root=nullptr;

void createPre(int pre[],int n){
    TreeNode *t,*p;
    stack<TreeNode*>st;
    //when stack does not contain any node then compare than the value of preorder is less than sum maximun value
    {
        TreeNode *first_val=new TreeNode;
        first_val->lchild=first_val->rchild=nullptr;
        first_val->data=INT_MAX;
        st.push(first_val);
    }
    int i=0;
    root=new TreeNode;
    root->data=pre[i++];
    root->lchild=root->rchild=nullptr;
    p=root;
    while(i<n){
        if(pre[i] < p->data){
            t=new TreeNode;
            t->data=pre[i++];
            t->lchild=t->rchild=nullptr;
            p->lchild=t;
            st.push(p);
            p=t;
        }
        else{
            if(pre[i] > p->data && pre[i] < st.top()->data){
                t=new TreeNode;
                t->data=pre[i++];
                t->lchild=t->rchild=nullptr;
                p->rchild=t;
                p=t;
            }
            else{
                p=st.top();
                st.pop();
            }
        } 
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
    int a[8]{30,20,10,15,25,40,50,45};
    for(int i=0;i<8;i++)cout<<a[i]<<" ";
    cout<<endl;
    createPre(a,8);
    inorder(root);
 
    
}