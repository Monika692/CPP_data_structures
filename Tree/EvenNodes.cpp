#include<iostream>
using namespace std;
typedef struct tree{
int data;
struct tree *left;
struct tree *right;
}node;

node *insert(node *p,int n)
{
    if(p==NULL)
    {
        p=new tree;
        p->left=NULL;
        p->right=NULL;
        p->data=n;
    }
    else
    {
        if(p->data<n)
            p->right=insert(p->right,n);
        else
            p->left=insert(p->left,n);
    }
    return p;
}

void evennode(node *p)
{
    if(p!=NULL)
    {
        if((p->data)%2==0)
           cout<<"even nodes are :"<<p->data<<endl;

        evennode(p->left);
        evennode(p->right);
    }
}
int main()
{
    node *root=NULL;
    int n;
    cout<<"enter nodes in binary search tree"<<endl;
    cin>>n;

    int num;
    for(int i=0;i<n;i++)
    {
        cout<<"enter elements in binary search tree"<<endl;
        cin>>num;
        root=insert(root,num);
    }

    evennode(root);
}
