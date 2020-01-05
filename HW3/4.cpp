#include <iostream>

using namespace std;

#define size 5

    //you can change the size here! (n*n)
int x[8]={1,2,2,1,-1,-2,-2,-1};
int y[8]={2,1,-1,-2,-2,-1,1,2};
int all[size][size];

int available(int a,int b)
{
    if ((a<=size-1)&&(a>=0)&&(b>=0&&b<=size-1)&&(all[a][b]==0))
        return 1;
    else
        return 0;
}
void output()
{
    int i1,i2;
    for (i1=0;i1<size;++i1)
    {
        for (i2=0;i2<size;++i2)
            cout<<all[i1][i2]<<' ';
        cout<<endl;
    }
}
void way(int p,int q,int step)
{
    int i,x1,y1;
    for (i = 0; i<8 ; ++i)
    {
        x1=p+x[i];
        y1=q+y[i];
        if (available(x1,y1)==1)
        {
            all[x1][y1]=step+1;
            if (step==(size*size-1))
            {
                output();
                cout<<endl;
            }
            way(x1,y1,step+1);
            all[x1][y1]=0;
        }
    }
}

int main()
{
    int step=1;
    all[0][0]=step;
    way(0,0,step);
    return 0;
}
