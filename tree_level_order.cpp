#include <bits/stdc++.h>
using namespace std;

typedef struct TreeNode
{
    int data;
    struct TreeNode *left, *right;
}Node;

typedef struct Queue
{
    Node *adr;
    struct Queue *qnext;

}Q;

Q *top, *rear;


Node* create(int data)
{
   
    Node* temp;
    temp=(Node*)malloc(sizeof(Node));
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

Node* createTree(Node *head, int data)
{
    if(head==NULL)
    {
        Node* temp=create(data);
        return temp;
    }
    else
    {
        Node *temp;
        if(head->data>data)
        {
            temp=createTree(head->left,data);
            head->left=temp;
            return head;
        }
        else
        {
            temp=createTree(head->right,data);
            head->right=temp;
            return head;
        }
    }
}

void enqueue(Node *adr)
{
    if(adr==NULL)
    return;
    Q *temp=NULL;
    temp=(Q*)malloc(sizeof(Q));
    temp->adr=adr;
    temp->qnext=NULL;
    if(rear==NULL&&top==NULL)
    {
        rear=temp;
        top=rear;
    }
    else
    {
        rear->qnext=temp;
        rear=rear->qnext;
    }
}

int dequeue()
{
    int data=top->adr->data;
    top=top->qnext;
    if(top==NULL)
    rear=NULL;
    return data;
}

void levelOrder( Node *root) {
enqueue(root);
while(rear!=NULL)
{
    enqueue(top->adr->left);
    enqueue(top->adr->right);
    printf("%d ",dequeue());
}
}


int main() {
  
   int number_of_nodes=0,data=0;
    Node *head=NULL;
    cin>>number_of_nodes;
    while(number_of_nodes--)
    {
        cin>>data;
        head=createTree(head, data);
    }
  
	levelOrder(head);
    return 0;
}
