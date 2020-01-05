#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char ch[100],a=0,ch_new[100];
    int i1,i2,i3=0,i4=0;
    cin>>ch;
    for (i1=0;ch[i1+1]!='\0';++i1)
    {
        for (i2=i1+1;ch[i2]!='\0';++i2)
        {
            if (ch[i1]<ch[i2])
            {
                a=ch[i1];
                ch[i1]=ch[i2];
                ch[i2]=a;
            }
        }
    }
    ch_new[0]=ch[0];
    for (i3=1;ch[i3]!='\0';++i3)
    {
        if (ch[i3]!=ch_new[i4])
        {
            ch_new[i4+1]=ch[i3];
            i4++;
        }
    }

    cout<<ch_new<<endl;
    return 0;
}
