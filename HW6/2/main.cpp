#include <iostream>
#include "vector.h"
using namespace std;

int main()
{
    vector_ v1(3),v2(3);
    cout<<"v1:  "<<v1;
    cout<<"please input v1:"<<endl;
    cin>>v1;
    cout<<"v1:  "<<v1;
    cout<<"v1[1]:  "<<v1[1]<<endl;
    cout<<"please input v2:"<<endl;
    cin>>v2;
    cout<<"v2:  "<<v2;
    vector_ v3(v2);
    cout<<"v3:  "<<v3;
    vector_ v4=v1+v2;
    cout<<"v4:  "<<v4;
    (v1==v4)? cout<<"True"<<endl:cout<<"False"<<endl;
    v4=v1;
    cout<<"v4:  "<<v4;
    (v1!=v4)? cout<<"True"<<endl:cout<<"False"<<endl;
    v4.print_dim();
    ++v4;
    cout<<"v4:  "<<v4;
    --v4;
    cout<<"v4:  "<<v4;
    double x1;
    x1=v4;
    cout<<"x1 is:  "<<x1<<endl;
    vector_ v5(3);
    cout<<"The number of vectors in all is:  "<<endl;
    v4.show_num();
    cout<<"The number of vectors alive is:  "<<endl;
    v4.show_alive();
    {vector_ v6(3),v7(3);}
    cout<<"The number of vectors in all is:  "<<endl;
    v4.show_num();
    cout<<"The number of vectors alive is:  "<<endl;
    v4.show_alive();
    return 0;
}
