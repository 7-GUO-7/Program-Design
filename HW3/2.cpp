#include <iostream>

using namespace std;


void Rank(int arr[],int len)
{
    int n=0,i;
    if (len>=1)
    {
        for (i=0;i<=len-1;++i)
        {
            if (arr[i]>arr[len-1])
            {
                n=arr[len-1];
                arr[len-1]=arr[i];
                arr[i]=n;
            }
        }
        Rank(arr,len-1);
    }
}
int main()
{
    int arr[8]={6,3,7,2,5,7,1,2},num=8,j;
    Rank(arr,num);

    // the two inputs are the array and its length !

    for (j=0;j<=num-1;++j)
        cout<<arr[j]<<' ';

    return 0;
}
