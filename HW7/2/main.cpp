#include <iostream>

using namespace std;

template <class T>
class set_; //declare the class for the declaration of function "union"

template <class type>
set_<type> union_(const set_<type> &c1,const set_<type> &c2); //declare the function union_ is a template then it can be used in class

template <class type>
set_<type> intersection_(const set_<type> &c1,const set_<type> &c2);

template <class T>
class set_
{
    T *element;
    int num;
public:
    set_();
    void add(T other);
    void delete_(int n);// n means the number of element you want to delete
    friend set_<T> union_<T>(const set_<T> &c1, const set_<T> &c2); //only T type is the friend of class set_, so <T> is necessary!
    friend set_<T> intersection_<T>(const set_<T> &c1, const set_<T> &c2);
    void show();
    set_ & operator =(const set_ &other);
    set_(const set_ &other);
};

template <class T>
set_<T>::set_(const set_<T> &other)
{
    num=other.num;
    element=new T [256];
    int i=0;
    for (i=0;i<256;++i)
    {
        element[i]=other.element[i];
    }
}

template <class T>
set_<T> &set_<T>::operator =(const set_<T> &other)
{
    if (this ==&other) return *this;
    delete [] element;
    num=other.num;
    element=new T [256];
    int i=0;
    for (i=0;i<256;++i)
    {
        element[i]=other.element[i];
    }
    return *this;
}

template <class T>
void set_<T>::show()
{
    for (int i=0;i<num;++i)
        cout<<element[i]<<' ';
    cout<<endl;
}

template <class T>
set_<T>::set_()
{
    element = new T [256];
    int i=0;
    for (i=0;i<256;++i)
        element[i]=0;
    num=0;
}

template <class T>
void set_<T>::add(T other)
{
    element[num]=other;
    num++;
}

template <class T>
void set_<T>::delete_(int n)
{
    for (int i=0;i<n;++i)
    {
    num--;
    element[num]=0;
    }
}

template <class T>
set_<T> intersection_(const set_<T> &c1, const set_<T> &c2)
{
    set_<T> new1;
    for (int i=0;i<c1.num;++i)
    {
        for (int j=0;j<c2.num;++j)
        {
            if (c1.element[i]==c2.element[j])
                new1.add(c1.element[i]);
        }
    }
    return new1;
}

template <class T>
set_<T> union_(const set_<T> &c1, const set_<T> &c2)
{
    bool flag=0;
    set_<T> new1;
    int i;
    for (i=0;i<c1.num;++i)
    {
        new1.add(c1.element[i]);
    }
    for (int j=0;j<c2.num;++j)
    {
        flag=0;
        for (i=0;i<new1.num;++i)
        {
            if (c2.element[j]==new1.element[i])
                flag=1;
        }
        if (flag==0)
            new1.add(c2.element[j]);
    }
    return new1;
}

int main()
{
    set_<int> set_int_1;
    set_<int> set_int_2;

    set_int_1.add(1);
    set_int_1.add(2);
    set_int_1.add(3);
    set_int_1.add(4);
    set_int_1.add(5);
    set_int_1.show();

    set_int_2.add(3);
    set_int_2.add(4);
    set_int_2.add(5);
    set_int_2.add(6);
    set_int_2.add(7);
    set_int_2.show();

    set_<int> set_int_union;
    set_int_union=union_(set_int_1,set_int_2);
    set_int_union.show();

    set_<int> set_int_intersection;
    set_int_intersection=intersection_(set_int_1,set_int_2);
    set_int_intersection.show();

    set_int_1.delete_(3);
    set_int_1.show();

    cout<<endl;

    set_<double> set_double_3;
    set_<double> set_double_4;

    set_double_3.add(1.1);
    set_double_3.add(2.1);
    set_double_3.add(3.1);
    set_double_3.add(4.1);
    set_double_3.add(5.1);
    set_double_3.show();

    set_double_4.add(3.1);
    set_double_4.add(4.1);
    set_double_4.add(5.1);
    set_double_4.add(6.1);
    set_double_4.add(7.1);
    set_double_4.show();

    set_<double> set_double_union;
    set_double_union=union_(set_double_3,set_double_4);
    set_double_union.show();

    set_<double> set_double_intersection;
    set_double_intersection=intersection_(set_double_3,set_double_4);
    set_double_intersection.show();

    set_double_3.delete_(3);
    set_double_3.show();
    return 0;
}
