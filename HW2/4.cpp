#include <iostream>

using namespace std;

int main()
{
    int m,n,i1,i2,c1,c2,flag,ans=0;
    //n and m are random integers.
    #define row1 4
    #define column1 4
    int matrix[row1][column1]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    for (i1=1;i1<=row1;++i1)
    {
        for (i2=1;i2<=column1;++i2)
        {
            flag=1;
            for (c1=1;c1<=row1;++c1)
            {
                if (matrix[i1-1][i2-1]<matrix[c1-1][i2-1])
                    flag=0;
            }
            for (c2=1;c2<=column1;++c2)
            {
                if (matrix[i1-1][i2-1]>matrix[i1-1][c2-1])
                    flag=0;
            }
            if (flag==1)
            {
                cout<<"matrix["<<i1-1<<"]["<<i2-1<<"]is the answer"<<endl;
                ans=1;
            }
        }
    }
    if (ans==0)
        cout<<"no such point"<<endl;
    return 0;
}
