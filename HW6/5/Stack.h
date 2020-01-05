#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
class Stack
{
    int *p;
    int num;
    int size_;
public:
    Stack( int size_1=100);
    void Push(int number);//the element you want to add
    void Pop(int t);//the number of popping
    ~Stack();
};


#endif // STACK_H_INCLUDED
