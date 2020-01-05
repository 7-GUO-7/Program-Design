#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
    Stack stack1(2);
    stack1.Push(100);
    stack1.Push(200);
    stack1.Push(300);

    stack1.Pop(2);

    stack1.Pop(1);

    Stack stack2;
    stack2.Push(400);
    stack2.Push(300);

    stack2.Pop(2);
    return 0;
}
