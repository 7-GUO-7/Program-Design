#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
class rectangle
{
protected:
    int a;
    int b;
public:
    rectangle(int m,int n);
    void area();
    void perimeter();
    void show_length_width();
};

class square: public rectangle
{
public:
    square(int p);
    void show_length();
};
#endif // RECTANGLE_H_INCLUDED
