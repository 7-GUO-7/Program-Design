#include <iostream>
#include <cstring>
using namespace std;

void del(char *p,int len,char *ch1,int len_ch)
{
    bool flag;
    int count1=0;
    for (int j1=0;j1<len-len_ch+1;++j1)
    {
        flag=1;
        for (int j2=0;j2<len_ch;++j2)
        {
            if (p[j1+j2]!=ch1[j2])
                flag=0;
        }
        if (flag)
        {for (int j3=0;j3+j1+len_ch<len;++j3)
        {
            p[j1+j3]=p[j1+len_ch+j3];
        }
        count1++;
        j1--;
        }
    }
    p[len-count1*len_ch]='\0';
}

void rank_out(char *table[],int num)
{
    int m2;
    char *p;
    for (int m1=0;m1<num-1;++m1)
    {
        for (m2=m1+1;m2<num;++m2)
        {
            if (table[m2]>table[m1])
            {
                p=table[m2];
                table[m2]=table[m1];
                table[m1]=p;
            }
        }
    }
}
int main()
{
    int num;
    cout << "how many strings do you want?" << endl;
    cin>>num;
    char *string_table[num];
    char ch[30];
    cout<<"please enter the 'ch' you want to delete:"<<endl;
    cin>>ch;
    int i1;
    cout<<"please enter the string one by one:"<<endl;
    int len1,len_ch1;
    len_ch1=strlen(ch);
    for (i1=0;i1<num;++i1)
    {
        string_table[i1]= new char[30];
        cin>>string_table[i1];
        len1=strlen(string_table[i1]);
        del(string_table[i1],len1,ch,len_ch1);
    }
    rank_out(string_table,num);
    cout<<endl;
    for (int h1=0;h1<num;++h1)
    {
        cout<<string_table[h1]<<endl;
    }

    for (i1=0;i1<=num;++i1)
        delete string_table[i1];
    return 0;

}
