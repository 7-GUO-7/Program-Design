#include <iostream>
#include <cmath>
using namespace std;

void find_(double(*f)(double),double low, double high)
{
    double mid;
    while (low<=high)
    {
        mid=0.5*(low+high);
        if (((f(mid))>-0.001) && (f(mid))<0.001)
            {cout<<mid<<endl;break;}
        else
        {
            if (f(mid)*f(low)<0)
                high=mid;
            else
                low=mid;
        }
    }
}
double g(double x) //you can input f here!
{
    return x*x*x;
}
int main()
{
    find_(g,-10,10); //you can input the range here!
    return 0;
}
