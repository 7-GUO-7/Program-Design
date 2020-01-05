#include <iostream>
#include <cstring>

using namespace std;

void delchar(char str[],char ch[])
{
    int len1,len2,i,i2,i3,i4;
    bool flag;
    len1 = strlen(ch);
    len2 = strlen(str);
    for (i=0;i<=(len2-len1);++i)
    {
        flag=1;
        for (i2=0;i2<=len1-1;++i2)
        {
            if (str[i+i2]!=ch[i2])
                flag=0;
        }
        if (flag==1)
        {
            for (i3=0;i3<=len1-1;++i3)
            str[i+i3]=0;
    }
    }
    for (i4=0;i4<=len2-1;++i4)
    {
        if (str[i4]!=0)
            cout<<str[i4];
    }
}

int main()
{
    char str[]="abcabfg";
    char ch[]="ab";
    delchar(str,ch);
    // str and ch are two inputs (string)!
    return 0;
}
