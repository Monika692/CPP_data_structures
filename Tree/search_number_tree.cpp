//in binary search tree
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

void inorder(node *p, int num)
{
    if(p!=NULL)
    {
        if(p->data==num)
            cout<<"element found :"<<p->data<<endl;

        inorder(p->left,num);
        inorder(p->right,num);
    }

}

int main()
{
    node *root=NULL;
    int n;
    cout<<"enter the number of elements in binary search tree"<<endl;
    cin>>n;

    int num;
    for(int i=0;i<n;i++)
    {
     cout<<"enter nodes in binary search tree "<<endl;
     cin>>num;
     root=insert(root,num);
    }

    int search;
    cout<<"enter element to be searched"<<endl;
    cin>>search;
    cout<<"traversal inorder "<<endl;
    inorder(root,search);
}
