#include <iostream>

using namespace std;

void get_set(int old_set[],int l)
{
    int new_set[l]={0};
    int flag,i3=0,i2,i,i4;
    for (i=0;i<=(l-1);++i)
    {
        flag=1;
        for (i2=0;i2<=i3;++i2)
        {
            if (new_set[i2]==old_set[i])
            {
                flag=0;break;
            }
        }
        if (flag)
        {
            new_set[i3]=old_set[i];
            ++i3;
        }
    }
    for (i4=0;i4<=i3-1;++i4)
        cout<<new_set[i4]<<" ";
    cout<<endl;
}

void append(int original[],int l,int n)
{
    int new_set[l+1];
    int i;
    for (i=0;i<=l-1;++i)
    {
        new_set[i]=original[i];
    }
    new_set[i]=n;
    for (i=0;i<=l;++i)
    {
        cout<<new_set[i]<<" ";
    }
    cout<<endl;
}

int find_element(int array_1[],int l,int m)
{
    int i, flag=0;
    for (i = 0; i <= l-1; ++i)
        if (array_1[i]==m)
        {
            flag=1;break;
        }
    if (flag==1)
        return 1;
    else
        return 0;
}

void intersection (int A[],int l1,int B[],int l2)
{
    int i11,i_3=0,k;
    int A_B[l1+l2];
    for (i11=0; i11<=l1-1; ++i11)
    {
        if (find_element(B,l2,A[i11])==1)
        {
            A_B[i_3]=A[i11];
            ++i_3;
        }
    }
    for (k=0; k<=i_3-1; ++k)
        cout << A_B[k] <<" ";
        cout<<endl;
}

void union_(int a[],int l1,int b[],int l2)
{
    int ab[l1+l2];
    int i11;
    for (i11=0;i11<=l1-1;++i11)
    {
        ab[i11]=a[i11];
    }
    for (i11=0;i11<=l2-1;++i11)
    {
        ab[i11+l1]=b[i11];
    }
    get_set(ab,l1+l2);
}
int main()
{
    int old_set_1[13]={2,2,3,4,5,6,2,3,3,2,1,7,4},len=13;
    // these two input old_set_1 and i9 are arbitrary !
    get_set(old_set_1,len);
    //two inputs are the array and the length of it!

    append(old_set_1,len,8);
    //three inputs are the original array, the length of it and the element you want to add!

    cout<<find_element(old_set_1,len,7)<<endl;
    //three inputs are the original array, the length of it and the element you want to look for!
    // 0 represents no; 1 represents yes.

    int old_1[5]={1,3,2,8,7}, old_2[7]={1,2,3,4,5,6,7};
    intersection(old_1,5,old_2,7); //four inputs.
    //four inputs are the first array, its length and the second array, its length!

    union_(old_1,5,old_2,7); //four inputs.
    //four inputs are the first array, its length and the second array, its length!
    return 0;
}
