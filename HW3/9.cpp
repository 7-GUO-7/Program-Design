#include <iostream>

using namespace std;

void sort_(int arr[],int len)
{
    int *p;
    p = new int [len];
    for (int j=0;j<len;++j)
    p[j]=1000;
    p[0]=arr[0];
    int temp,index;
    for (int i1=1;i1<=len-1;++i1)
        {
            temp=arr[i1];
            index=i1-1;
            while (index>=0&&temp<p[index])
            {
                p[index+1]=p[index];
                --index;
            }
            p[index+1]=temp;

        }
        for (int i2=0;i2<=len-1;++i2)
        cout<<p[i2]<<' ';
        delete [] p;
}
int main()
{
    int len=9;
    int set_[len]={4,7,4,1,5,0,6,2,8};
    sort_(set_,9);
    return 0;
}
