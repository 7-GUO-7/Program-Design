#include <iostream>

using namespace std;

int main()
{
    int i1,i2,i3,n=0,j;
    int scalar[10]={0};
    cout<<"please enter 10 integers:"<<endl;
    for (i1=0;i1<=9;++i1)
    {
        if (i1==0)
            cin>>scalar[0];
        else
            {
                cin>>n;
                i2=i1-1;
                j=100;
                while ((i2>=0)&&(n<scalar[i2]))
                    {scalar[i2+1]=scalar[i2];
                        j=i2;
                        i2--;
                    }
                    if (j==100)
                        scalar[i1]=n;
                    else
                        scalar[j]=n;
                }
    }
    for (i3=0;i3<=9;++i3)
        cout<<scalar[i3]<<"\n";
    return 0;
}
