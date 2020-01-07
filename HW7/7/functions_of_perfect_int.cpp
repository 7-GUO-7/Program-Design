#include <iostream>
#include "perfect_int.h"
using namespace std;

class Divide_by_zero
{};

class larger_than_max
{};

class smaller_than_min
{};

class out_of_range_
{};

int add_judge(long long int a, long long int  b) throw(smaller_than_min,larger_than_max,out_of_range_)
{
    long long int a_new=a, b_new=b;
    if (a_new<-2147483647||b_new<-2147483647)
        throw smaller_than_min();
    if (a_new>2147483646||b_new>2147483646)
        throw larger_than_max();
    if ((a+b)>2147483646)
        throw out_of_range_();
    int ans=a+b;
    return ans;
}

int minus_judge(long long int a, long long int  b) throw(smaller_than_min,larger_than_max,out_of_range_)
{
    long long int a_new=a, b_new=b;
    if (a_new<-2147483647||b_new<-2147483647)
        throw smaller_than_min();
    if (a_new>2147483646||b_new>2147483646)
        throw larger_than_max();
    if ((a-b)<-2147483647)
        throw out_of_range_();
    int ans=a-b;
    return ans;
}

int multiply_judge(long long int a, long long int  b) throw(smaller_than_min,larger_than_max,out_of_range_)
{
    long long int a_new=a, b_new=b;
    if (a_new<-2147483647||b_new<-2147483647)
        throw smaller_than_min();
    if (a_new>2147483646||b_new>2147483646)
        throw larger_than_max();
    if ((a*b)>2147483646||(a*b)<-2147483647)
        throw out_of_range_();
    int ans=a*b;
    return ans;
}

double divide_judge(long long int a, long long int  b) throw(smaller_than_min,larger_than_max,out_of_range_,Divide_by_zero)
{
    if (b==0)
        throw Divide_by_zero();
    long long int a_new=a, b_new=b;
    if (a_new<-2147483647||b_new<-2147483647)
        throw smaller_than_min();
    if (a_new>2147483646||b_new>2147483646)
        throw larger_than_max();
    if ((static_cast< double >(a)/b)>2147483646||(static_cast< double >(a)/b)<-2147483647)
        throw out_of_range_();
    double ans=static_cast< double > (a)/b;
    return ans;
}

int perfect_int::add(long long int a, long long int b)
{
    try
    {
        add_judge(a,b);
        int ans=add_judge(a,b);
        cout<<"The sum is: "<< ans<<endl;
        return ans;
    }
        catch(smaller_than_min)
        {
            cout<<"Sorry, maybe there exists at least one integer smaller than min_limit. "<<endl;
        }
        catch(larger_than_max)
        {
            cout<<"Sorry, maybe there exists at least one integer greater than max_limit. "<<endl;
        }
        catch(out_of_range_)
        {
            cout<<"Sorry, the sum is greater than max_limit. "<<endl;
        }
}

int perfect_int::minus_(long long int a, long long int b)
{
    try
    {
        minus_judge(a,b);
        int ans=minus_judge(a,b);
        cout<<"The difference is: "<< ans<<endl;
        return ans;
    }
        catch(smaller_than_min)
        {
            cout<<"Sorry, maybe there exists at least one integer smaller than min_limit. "<<endl;
        }
        catch(larger_than_max)
        {
            cout<<"Sorry, maybe there exists at least one integer greater than max_limit. "<<endl;
        }
        catch(out_of_range_)
        {
            cout<<"Sorry, the difference is smaller than min_limit. "<<endl;
        }
}

int perfect_int::multiply(long long int a, long long int b)
{
    try
    {
        multiply_judge(a,b);
        int ans=multiply_judge(a,b);
        cout<<"The product is: "<< ans<<endl;
        return ans;
    }
        catch(smaller_than_min)
        {
            cout<<"Sorry, maybe there exists at least one integer smaller than min_limit. "<<endl;
        }
        catch(larger_than_max)
        {
            cout<<"Sorry, maybe there exists at least one integer greater than max_limit. "<<endl;
        }
        catch(out_of_range_)
        {
            cout<<"Sorry, the product is out of int-range. "<<endl;
        }
}

double perfect_int::divide(long long int a, long long int b)
{
    try
    {
        divide_judge(a,b);
        double ans=divide_judge(a,b);
        cout<<"The quotient is: "<< ans<<endl;
        return ans;
    }
        catch(smaller_than_min)
        {
            cout<<"Sorry, maybe there exists at least one integer smaller than min_limit. "<<endl;
        }
        catch(larger_than_max)
        {
            cout<<"Sorry, maybe there exists at least one integer greater than max_limit. "<<endl;
        }
        catch(out_of_range_)
        {
            cout<<"Sorry, the quotient is out of int-range. "<<endl;
        }
        catch(Divide_by_zero)
        {
            cout<<"Sorry, the divisor can not be 0 . "<<endl;
        }
}
