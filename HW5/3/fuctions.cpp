#include "Joseph.h"
#include <iostream>
using namespace std;
Joseph::Joseph(int a,int b)
{
    n=a;m=b;
}
struct node
    {int data;
      node *next;};

void Joseph::simulate()
{
    node *head,*p,*q;
    int i;
    head=p=new node;
    p->data=0;
    for (i=1;i<n;++i)
    {
        q=new node;
        q->data=i;
        p->next=q;
        p=q;
    }
    p->next=head;
    q=head;
    while (q->next!=q)
    {
        for (i=0;i<m-1;++i)
        {
            p=q;q=p->next;
        }
        p->next=q->next;
        cout<<q->data<<'\t';
        delete q;
        q=p->next;
    }
    cout<<"\nThe last one is:"<<endl;
    cout<<q->data<<endl;
}
