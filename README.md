@ -0,0 +1,67 @@
#include <iostream>

using namespace std;
struct node
{
    int data;
    node *left,*right;
}*ptr,*root,*temp;
void insert_data(int a)
{
    temp=new node;
    temp->data=a;
    temp->right=NULL;
    temp->left=NULL;
    ptr=root;
    while(1)
    {
        if(root==NULL) { root=temp; return; }
        else
        {
         if(a>root->data)
          root=root->right;
         else root=root->left;

        }
    }
}
void search_data(int a)
{
    while(1)
    {
        if(root->data==a){cout<<"element found!!!!"; return;}
        if(root->data==NULL){cout<<"element not found!!!!"; return;}
        else
        {
            if(a>root->data)
                root=root->right;
            else root=root->left;
        }
    }
}

int main()
{
    int x,y;
    char ch='y';
    root=NULL;
    cout << "\t\t\t\tHello User!!!!!!!" << endl;
    while(ch=='y')
    {
        cout<<"press 1.for entering data\n      2.for searching........\n";
        int chi;
        cin>>chi;
        switch(chi)
        {
        case 1:  cout<<"\nEnter the data:";
                cin>>x; break;
                insert_data(x);
        case 2: cout<<"\nEnter the element you want to search:";
                cin>>y;
                search_data(y);
        }
        cout<<"Press (y) to enter more:";
        cin>>ch;
    }
    return 0;
}
