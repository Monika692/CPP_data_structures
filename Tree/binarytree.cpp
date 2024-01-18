#include<iostream>
using namespace std;
typedef struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
}node;

int count=1;

/*void fun(int n)
{
    if(n>0)
    {
        cout<<"PreOrder (LRN)"<<n<<endl;
        fun(n-2);
        //cout<<"InOrder (LNR)"<<n<<endl;
        fun(n-2);
        //cout<<"PostOrder (LRN)"<<n<<endl;
    }
}*/

node *insert(node *p,int n)
{
    if(p==NULL)
    {
        p=new tree;
        p->left=p->right=NULL;
        p->data=n;
        count++;
    }
    else
    {
        if(count%2==0)
            p->left=insert(p->left,n);
        else
            p->right=insert(p->right,n);
    }
    return p;
}

void preorder(node *p)
{
    if(p!=NULL)
    {
        cout<<p->data<<" \t ";
        preorder(p->left);
        preorder(p->right);
    }
}

void inorder(node *p)
{
    if(p!=NULL)
    {
        inorder(p->left);
        cout<<p->data<<" \t ";
        inorder(p->right);
    }
}

void postorder(node *p)
{
    if(p!=NULL)
    {
        postorder(p->left);
        postorder(p->right);
        cout<<p->data<<" \t ";
    }
}

int main()
{
    node *root=NULL;

    int n,num;
    cout<<"Enter No of Elements U want to insert in binary tree"<<endl;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter No in Tree ";
        cin>>num;
        root=insert(root,num);
    }

    cout<<"\nPre-Order Traversal "<<endl;
    preorder(root);


    cout<<"\nPost-Order Traversal "<<endl;
    postorder(root);

    cout<<"\nIn-Order Traversal "<<endl;
    inorder(root);
}
