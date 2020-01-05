#include <iostream>

using namespace std;

void minmax (int a[],int n,int *max_ptr)
{   int max1,max2;
    switch(n)
    {   case 1:  *max_ptr = a[0]; return;
        case 2:  if (a[0] < a[1] )
        {  *max_ptr= a[1];  }
        else {  *max_ptr= a[0];}
        return;
        default: minmax( a, n/2, &max1 );
        minmax( a + n/2, n - n / 2,&max2 );
        if (max1 < max2)    *max_ptr = max2;
        else    *max_ptr = max1;
        return;
	 }
}


int main()
{
    int len=10,x1,x2;
    int a[10]={1,7,9,6,9,4,7,3,5,4}; //you can change a and length here!
    minmax(a,len,&x1);
    cout<<"the maximum is:"<<x1<<endl;
    for (int i=0;i<len;++i)
    {
        if (a[i]==x1)
            a[i]=-100000;
    }
    minmax(a,len,&x2);
    cout<<"the second largest number is:"<<x2<<endl;
    return 0;
}
