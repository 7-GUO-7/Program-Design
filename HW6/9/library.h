#ifndef LIBRARY_H_INCLUDED
#define LIBRARY_H_INCLUDED
class reader
{
public:
    char name_[100];
    reader(char *name1);
	virtual void show_();
};

class teacher:public reader
{
public:

    char book_[100];
    teacher(char *new_name,char *book1);
    void show_();
};

class student:public reader
{
public:
    char *book_;
    student(char *new_name,char *book1);
    void show_();
};

class library
{
    reader *p[20];
    int num_of_people;
public:
    library();
    ~library();
    void add();
    void return_book();
    void show();
};
#endif // LIBRARY_H_INCLUDED
