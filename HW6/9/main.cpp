#include <iostream>
#include "library.h"
using namespace std;

int main()
{
    library library1;// build a library
    library1.add();// add a reader
    library1.add();//add another reader
    library1.show();//show all the readers
    library1.return_book();// test for return book
    library1.show();


   /* int choice=10;
    char a[10];
    int num_of_people=0;
    while (choice!=0)
    {cout<<"1 -> add readers and borrow books"<<endl;
    cout<<"2 -> show all the readers"<<endl;
    cout<<"3 -> return books"<<endl;
    cout<<"0 -> quit"<<endl;
    cin>>choice;
    if (choice==1)
    {
    if (num_of_people==20)
        cout<<"The library is full! "<<endl;
    else
    {
    int choice1;
    char book_[10],name_[10];
    cout<<"please enter 1 for teachers, enter 2 for students: "<<endl;
    cin>>choice1;
    cout<<"please enter the name: "<<endl;
    cin>>name_;
    cout<<"please enter the book you want to borrow: "<<endl;
    cin>>book_;
    if (choice1)
    teacher a[num_of_people]()
    else
    student *(a[num_of_people])
    num_of_people++;
    }
    }
    }*/
    return 0;
}
