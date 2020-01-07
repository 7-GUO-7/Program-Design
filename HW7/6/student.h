#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
class student
{
    long long No;
    char name[20];
    int year;
    int month;
    long long tel;
public:
    student(long long a, char b[],int c, int d, long long e);
    void show();
    student(student &a);
    long long show_No();
    student();
};


#endif // STUDENT_H_INCLUDED
