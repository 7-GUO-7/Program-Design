#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int row1;
    char string1[30];
    int len;
    cout<<"please enter the string(<=30):"<<endl;
    cin>>string1;
    cout<<"please enter the row:"<<endl;
    cin>>row1;
    len=strlen(string1);
    char table[row1][30];
    int i1=0,i2=0;
    for (i1=0;i1<row1;++i1)
        {for (i2=0;i2<30;++i2)
        table[i1][i2]=0;}
    int c1=0,c2=0;
    bool flag=1;
    int i=1;
    table[c1][c2]=string1[0];
    c1++;
    for (i=1;i<len;++i)
    {
        if (c1<row1-1&&flag&&c1>0)
        {
            table[c1][c2]=string1[i];
            c1++;
            continue;
        }
        if (c1==row1-1)
        {
            table[c1][c2]=string1[i];
            c1--;
            c2++;
            flag=0;
            continue;
        }
        if (c1<row1-1&&!flag&&c1>0)
        {
            table[c1][c2]=string1[i];
            c1--;
            c2++;
            continue;
        }
        if (c1==0)
        {
            table[c1][c2]=string1[i];
            c1++;
            flag=1;
            continue;
        }
    }
    int j1=0,j2=0;
    for (j1=0;j1<row1;++j1)
    {for (j2=0;j2<30;++j2)
    {
        if (table[j1][j2]!=0)
            cout<<table[j1][j2]<<' ';
        if (table[j1][j2]==0)
            cout<<' '<<' ';
    }
    cout<<endl;
    }
}
