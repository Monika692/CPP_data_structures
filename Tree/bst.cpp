#include<iostream>
using namespace std;
typedef struct tree
{
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

node *inorder(node *p)
{
    if(p!=NULL)
    {
        inorder(p->left);
        cout<<p->data<<" ";
        inorder(p->right);
    }
}

node *postorder(node *p)
{
    if(p!=NULL)
    {
        postorder(p->left);
        postorder(p->right);
        cout<<p->data<<" ";
    }
}

node *preorder(node *p)
{
    if(p!=NULL)
    {
        cout<<p->data<<" ";
        preorder(p->left);
        preorder(p->right);
    }
}

int main()
{
    node *root=NULL;

    int n;
    cout<<"enter the elements to insert in the search tree "<<endl;
    cin>>n;

    int num;
    for(int i=0;i<n;i++)
    {
        cout<<"enter nodes in the tree"<<endl;
        cin>>num;
        root=insert(root,num);
    }

    cout<<"\n IN-order traversal"<<endl;
    inorder(root);

    cout<<"\n PRE-order traversal"<<endl;
    preorder(root);

    cout<<"\n POST-order traversal"<<endl;
    postorder(root);
}
