#include <bits/stdc++.h>
#include "E:\code\DS\tree.h"

using namespace std;
int lmax=0,rmax=0;

void topView(Node* head, int pointer, int counter)
{
    if(head!=NULL)
    {
        if(pointer==1)
        {
            if(counter>lmax)
            {
                lmax=counter;
                cout<<head->data<<" ";
            }
        }
        else
        {
            if(counter*-1>abs(rmax))
            {
                rmax=counter;
                cout<<head->data<<" ";
            }
        }
        topView(head->left,1,counter+1);
        topView(head->right,2,counter-1);
    }
}

int main()
{
    Node* head=initTree();
    cout<<head->data<<" ";
    topView(head,1,0);
}