#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int mult(int a,int b)
{
    int sum=1,i;
    for (i=1;i<=b;++i)
        sum=sum*a;
    return sum;
}
int main()
{
    char ch[100];
    int i,i1_num=0,i2_num=0,len,i1_sum=0,i2_sum=0,ans=0;
    cin>>ch;
    len=strlen(ch);
    for (i=0;47<ch[i]&&ch[i]<58;++i)
        i1_num++;
    i2_num=len-i1_num-1;
    for (i=0;i<=i1_num-1;++i)
        i1_sum=i1_sum+(ch[i]-48)*mult(10,(i1_num-i-1));
    for (i=i1_num+1;i<=len-1;++i)
        i2_sum = i2_sum + (ch[i]-48)*mult(10,(len-i-1));
    if (ch[i1_num]==42)
        ans=i1_sum*i2_sum;
    if (ch[i1_num]==43)
        ans=i1_sum+i2_sum;
    if (ch[i1_num]==45)
        ans = i1_sum-i2_sum;
    if (ch[i1_num]==47)
        ans = i1_sum/i2_sum;
    cout<<ans<<endl;
    return 0;

}
