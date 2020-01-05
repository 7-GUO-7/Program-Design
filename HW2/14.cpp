#include <iostream>

using namespace std;


template < class T >
T maxmin(T old_set[],int len)

//the two inputs are the set and its length!

{
    int i;
    T max_,min_;
    max_=old_set[0];
    min_=old_set[0];
    for (i=0;i<=len-1;++i)
        {
            if (old_set[i]<=min_)
            min_=old_set[i];
            if (old_set[i]>=max_)
            max_=old_set[i];
        }
    cout<<"the max:"<<max_<<endl;
    cout<<"the min:"<<min_<<endl;
}

int main()
{
    float a[10]={1.9,3.2,0.2,5.4,8.5,2.7,3.2,4.8,1.1,9.1};
    int b[7]={1,7,5,4,8,9,2};
    maxmin(a,10);
    maxmin(b,7);
    return 0;
}
