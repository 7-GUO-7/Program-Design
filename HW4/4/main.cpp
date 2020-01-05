#include <iostream>

using namespace std;

struct pol {int coefficient; int index; pol *next;};

int main()
{
    int x,y;
    pol *rear,*head,*p;
    head=new pol;
    rear=head;
    cout<<"enter 0 to stop!"<<endl;
    while (true)
    {
        cout<<"please enter coefficient:"<<endl;
        cin>>x;
        if (x==0) break;
        cout<<"please enter index:"<<endl;
        cin>>y;
        p=new pol;
        p->coefficient=x;
        p->index=y;
        rear->next=p;
        rear=p;
    }
    rear->next= NULL;

    int a[10]={0};
    p=head->next;
    while (p!=NULL)
        switch (p->index)
        {
        case 0:
            a[0]+=p->coefficient;p=p->next;break;
        case 1:
            a[1]+=p->coefficient;p=p->next;break;
        case 2:
            a[2]+=p->coefficient;p=p->next;break;
        case 3:
            a[3]+=p->coefficient;p=p->next;break;
        case 4:
            a[4]+=p->coefficient;p=p->next;break;
        case 5:
            a[5]+=p->coefficient;p=p->next;break;
        case 6:
            a[6]+=p->coefficient;p=p->next;break;
        case 7:
            a[7]+=p->coefficient;p=p->next;break;
        case 8:
            a[8]+=p->coefficient;p=p->next;break;
        case 9:
            a[9]+=p->coefficient;p=p->next;break;
        }
    cout<<a[0]<<'+';
    cout<<a[1]<<'x';
    cout<<'+'<<a[2]<<"x2";
    cout<<'+'<<a[3]<<"x3";
    cout<<'+'<<a[4]<<"x4";
    cout<<'+'<<a[5]<<"x5";
    cout<<'+'<<a[6]<<"x6";
    cout<<'+'<<a[7]<<"x7";
    cout<<'+'<<a[8]<<"x8";
    cout<<'+'<<a[9]<<"x9"<<endl;
    return 0;
}
