#include <iostream>

using namespace std;

#define n 4 //n is the items you want
#define c 8 //c is the limit weight

int main()
{
    int money[n+1]={0,10,20,30,40}; //this is the set of money
    int weight[n+1]={0,1,2,3,4};  //this is the set of weight
    int V[n+1][c+1];
    for (int i1=0;i1<=n;++i1)
        for (int j1=0;j1<=c;++j1)
            V[i1][j1]=0;
    for (int i=1;i<=n;++i)
    {
        for (int j=1;j<=c;++j)
        {
            if (weight[i]>j)
                V[i][j]=V[i-1][j];
            else
            {
                if (V[i-1][j]>V[i-1][j-weight[i]]+money[i])
                    V[i][j]=V[i-1][j];
                else
                    V[i][j]=V[i-1][j-weight[i]]+money[i];
            }
        }
    }
    cout<<V[n][c];
    return 0;
}
