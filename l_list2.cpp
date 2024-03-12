# include <iostream>
using namespace std;

class node
{
    public:
    int val;
    node*next;
    node(int data)
    {
        val= data;
        next= NULL;
    }
};

void insertathead(node*&head,int val)
{
    node*new_node=new node(val);
    new_node->next=head;
    head=new_node;
}
void insertattail(node*&head,int val)
{
    node*new_node=new node(val);
    node*temp=head;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next= new_node;
}
void display(node*head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    node*head=NULL;
    insertathead(head,2);
    insertathead(head,1);
    insertattail(head,4);
    display(head);

    return 0;
}