#include <iostream>
#include <cstring>

using namespace std;

int str_str(char b[],char a[])
{
    int m,n,i,k,flag;
    m=strlen(b);
    n=strlen(a);
    for (i=0;i<=m-n;++i)
    {
        flag=0;
        if (b[i]==a[0])
        {
            int i2;
            flag=1;
            for (i2=0;i2<=n-1;++i2)
            {
                if (b[i+i2]!=a[i2])
                    flag=0;
            }
        }
        if (flag)
        {
            return i+1;
            break;
        }
    }
return 0;
}
int main()
{
    cout<<str_str("abaasdfadfac","ad");
     //these two input are arbitrary.
     //the first means the bigger string, the second is the smaller string.
    return 0;
}
