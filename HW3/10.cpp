#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int set(char*s1, char*s)
 { int i= strlen(s1)-1, j=0;

    while (i>=0){
	   s[j]=s1[i];--i;++j;}
    for (;j<128;++j)
        s[j]='0';
return 0;
}

void show(char *s)
 { int i=127;
    while (s[i]=='0')
        --i;
    while (i>=0)
    {
        cout << s[i];
        --i;
    }
   cout << endl;
 }

void zero(char*p1,char *p2,char *set1,char *set2)
{
    int i,j,length1,length2,tmp1,tmp2;
    for (i=0;i<strlen(p1);++i)
    {if (p1[i]=='.')
        break;}
    for (j=0;j<strlen(p2);++j)
    {if (p2[j]=='.')
        break;}
    length1=strlen(p1)-i-1;
    length2=strlen(p2)-j-1;
    for (tmp1=i+1;tmp1<=i+max(length1,length2);++tmp1)
    {
        if (tmp1<strlen(p1))
            set1[tmp1]=p1[tmp1];
        else
            set1[tmp1]='0';}
    for (int ss=0;ss<=i;++ss)
        set1[ss]=p1[ss];
    for (tmp2=j+1;tmp2<=j+max(length1,length2);++tmp2)
    {
        if (tmp2<strlen(p2))
        set2[tmp2]=p2[tmp2];
        else
            set2[tmp2]='0';}
    for (int s=0;s<=i;++s)
        set2[s]=p2[s];
}
void add(char*p1,char*p2, char*s)
{ int i, j = 0,k,o;
    for (k=0;k<strlen(p1);++k)
    {
        if (p1[k]=='.')
            break;
    }
    for (i=0; i < k; ++i)
           { s[i] = p1[i] - '0' + p2[i] - '0' + j;
              if ( s[i] >= 10)  j = s[i] / 10; else j = 0;
	         s[i] = s[i] % 10 + '0';
           }
    s[k]='.';
    for (o=k+1;o<128;++o)
    {
        s[o] = p1[o] - '0' + p2[o] - '0' + j;
              if(s[o]>= 10) j=s[o]/10;
              else j = 0;
	         s[o]= s[o]%10+'0';
    }
}
int main()
{
    char *a="1232.7545644",*b="23471.8234671345",sum[128];
    char *temp1,*temp2,*temp3,*temp4;
    temp1=new char[128],temp2=new char[128],temp3=new char[128],temp4=new char[128];
    zero(a,b,temp1,temp2);
    set(temp1,temp3);
    set(temp2,temp4);
    delete []temp1;
    delete []temp2;
    add(temp3,temp4,sum);
    delete []temp3;
    delete []temp4;
    show(sum);
}
