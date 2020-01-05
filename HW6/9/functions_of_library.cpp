#include "library.h"
#include <iostream>
#include <cstring>
using namespace std;
reader::reader(char *name1)
{
    strcpy(name_,name1);
}
teacher::teacher(char *new_name,char *book1):reader(new_name){strcpy(book_,book1);}

student::student(char *new_name,char *book1):reader(new_name){strcpy(book_,book1);}

library::library()
{
    num_of_people=0;
    for (int i=0;i<20;++i)
    {
        p[i]=NULL;
    }
}

library::~library()
{
    for (int i=0;i<num_of_people;++i)
    {
        delete p[i];
    }
}

void library::add()
{
    if (num_of_people==20)
        cout<<"The library is full! "<<endl;
    else
    {
    int choice;
    char book_x[10],name_x[10];
    cout<<"please enter 1 for teachers, enter 2 for students: "<<endl;
    cin>>choice;
    cout<<"please enter the name: "<<endl;
    cin>>name_x;
    cout<<"please enter the book you want to borrow: "<<endl;
    cin>>book_x;
    if (choice)
    p[num_of_people]=new teacher(name_x,book_x);
    else
    p[num_of_people]=new student(name_x,book_x);
    num_of_people++;
    }
}
void library::return_book()
{
    char book_1[100],name_1[100];
    cout<<"please enter the name if you want to return book: "<<endl;
    cin>>name_1;
    int flag=0,j=0;
    for (int i=0;i<num_of_people;++i)
    {
        if (strcmp(p[i]->name_,name_1)==0)
            {j=i;
            flag=1;}
    }
    if (!flag)
        cout<<"No such reader! "<<endl;
    else
    {
    delete p[j];
    p[j]=NULL;
    cout<<"return successfully!"<<endl;
    }
}

void reader::show_()
{
    cout<<"name: "<<name_<<endl;
}

void teacher::show_()
{
    reader::show_();
    cout<<"book: "<<book_<<endl;
}

void student::show_()
{
    reader::show_();
    cout<<"book: "<<book_<<endl;
}

void library::show()
{
    for (int i=0;i<20;++i)
    {
        if (p[i]!=NULL)
            p[i]->show_();
    }
}
