#include <iostream>
#include "matrix.h"
using namespace std;

int main()
{
    matrix matrix1(3,4);
    cin>>matrix1;
    cout<<"element (2,3) is:"<<endl;
    cout<<matrix1(2,3)<<endl;
    matrix matrix2(3,4);
    cin>>matrix2;
    matrix matrix3=matrix1+matrix2;
    for (int i=0;i<3;++i)
    {
        for (int j=0;j<4;++j)
            cout<<matrix3(i,j)<<' ';
        cout<<endl;
    }
    matrix matrix4=matrix3.transpose();
    for (int i=0;i<4;++i)
    {
        for (int j=0;j<3;++j)
            cout<<matrix4(i,j)<<' ';
        cout<<endl;
    }
    matrix matrix5=matrix1*matrix4;
    for (int i=0;i<3;++i)
    {
        for (int j=0;j<3;++j)
            cout<<matrix5(i,j)<<' ';
        cout<<endl;
    }
    return 0;
}
