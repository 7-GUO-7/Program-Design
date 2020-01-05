#include <iostream>
#include <cstring>

using namespace std;

#define N 100

int main()
{
    int i,j,flag,num=0,k;
    char *name[N],*p;
    int chinese[N],math[N],english[N],temp,all[N];
    cout<<"HELLO"<<endl;
    for (i=0;i<N;++i)
    {
        cout<<"Please enter 1 to add information, 0 to stop!"<<endl;
        cin>>flag;
        if (flag)
        {
        name[i]=new char[20];
        cout<<"please enter the name:"<<endl;
        cin>>name[i];
        cout<<"please enter Chinese:"<<endl;
        cin>>chinese[i];
        cout<<"please enter Math:"<<endl;
        cin>>math[i];
        cout<<"please enter English:"<<endl;
        cin>>english[i];
        all[i]=chinese[i]+math[i]+english[i];
        num++;
        }
        else
            break;
    }
    for(i=0;i<num-1;++i)
    {
        for (j=i+1;j<num;++j)
        {
            if (all[i]<all[j])
            {
                p=name[i];
                name[i]=name[j];
                name[j]=p;
                temp=chinese[i];
                chinese[i]=chinese[j];
                chinese[j]=temp;
                temp=math[i];
                math[i]=math[j];
                math[j]=temp;
                temp=english[i];
                english[i]=english[j];
                english[j]=temp;
                temp=all[i];
                all[i]=all[j];
                all[j]=temp;
            }
        }
    }

    for(i=0;i<num-1;++i)
    {
        for (j=i+1;j<num;++j)
        {
            if ((all[i]==all[j])&&(chinese[i]<chinese[j]))
            {
                p=name[i];
                name[i]=name[j];
                name[j]=p;
                temp=chinese[i];
                chinese[i]=chinese[j];
                chinese[j]=temp;
                temp=math[i];
                math[i]=math[j];
                math[j]=temp;
                temp=english[i];
                english[i]=english[j];
                english[j]=temp;
                temp=all[i];
                all[i]=all[j];
                all[j]=temp;
            }
        }
    }

    for(i=0;i<num-1;++i)
    {
        for (j=i+1;j<num;++j)
        {
            if ((all[i]==all[j])&&(chinese[i]==chinese[j])&&(math[i]<math[j]))
            {
                p=name[i];
                name[i]=name[j];
                name[j]=p;
                temp=chinese[i];
                chinese[i]=chinese[j];
                chinese[j]=temp;
                temp=math[i];
                math[i]=math[j];
                math[j]=temp;
                temp=english[i];
                english[i]=english[j];
                english[j]=temp;
                temp=all[i];
                all[i]=all[j];
                all[j]=temp;
            }
        }
    }

    for(i=0;i<num-1;++i)
    {
        for (j=i+1;j<num;++j)
        {
            if ((all[i]==all[j])&&(chinese[i]==chinese[j])&&(math[i]==math[j])&&(strcmp(name[i],name[j])>0))
            {
                p=name[i];
                name[i]=name[j];
                name[j]=p;
                temp=chinese[i];
                chinese[i]=chinese[j];
                chinese[j]=temp;
                temp=math[i];
                math[i]=math[j];
                math[j]=temp;
                temp=english[i];
                english[i]=english[j];
                english[j]=temp;
                temp=all[i];
                all[i]=all[j];
                all[j]=temp;
            }
        }
    }
cout<<"The whole table is:"<<endl;
if (!num)
    cout<<"Nothing"<<endl;
else
{
for (i=0;i<num;++i)
    {cout<<name[i]<<' '<<chinese[i]<<' '<<math[i]<<' '<<english[i]<<' '<<all[i];
    cout<<endl;}
cout<<"Please enter the K you want to find:"<<endl;
cin>>k;
if (k<=num)
    cout<<name[k-1]<<' '<<all[k-1];
else
    cout<<"K out of range"<<endl;
}
for (i=0;i<num;++i)
    delete name[i];
    return 0;

}
