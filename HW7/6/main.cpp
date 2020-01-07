#include <iostream>
#include "student.h"
#include <fstream>
#include <string>
#include <cstring>
#include <iomanip>
using namespace std;

int main()
{
    student *student_new;
    student student_read;
    int num=0;
    int choice=0;
    bool flag;
    long long input_No;
    fstream initiliazer;
    initiliazer.open("student.txt",fstream::out);//to initialize the file to an empty one.
    fstream file;
    cout<<"Welcome to the student management system!"<<endl;
    cout<<endl;
    while (true)
    {
        cout<<"Please select the operation you need."<<endl;
        cout<<"1 - add a student."<<endl;
        cout<<"2 - search a student by No."<<endl;
        cout<<"3 - show information of all students."<<endl;
        cout<<"4 - change information of one student."<<endl;
        cout<<"0 - exit."<<endl;
        cout<<endl;
        cin>>choice;
        cout<<endl;
        if (choice==0)
            break;
        switch (choice)
        {
        case 1:
            {
                long long a; char b[20]; int c; int d; long long e;
                //cout<<"please enter his/her No. : "<<endl;
                //cin>>a;
                a=num+1;
                cout<<"please enter his/her Name : "<<endl;
                cin>>b;
                cout<<"please enter his/her birth_year : "<<endl;
                cin>>c;
                cout<<"please enter his/her birth_month : "<<endl;
                cin>>d;
                cout<<"please enter his/her telephone number : "<<endl;
                cin>>e;
                student_new=new student(a,b,c,d,e);
                file.open("student.txt");
                file.seekp((num)*sizeof(student));
                file.write(reinterpret_cast<char *> (&*student_new),sizeof(student));
                file.close();
                cout<<endl;
                num++;
                break;
            }
        case 2:
            {
                flag=0;
                cout<<"Please enter the No of student you want to check: "<<endl;
                cin>>input_No;
                cout<<endl;
                file.open("student.txt");
                file.read(reinterpret_cast <char *> (&student_read),sizeof(student));
                while (!file.eof())
                {
                    if (student_read.show_No()==input_No)
                    {
                        flag=1;
                        cout<<endl;
                        cout<<"Find him/her successfully! "<<endl;
                        cout<<left<<setw(15)<<"No."<<left<<setw(10)<<"Name"<<left<<setw(15)<<"Birth_year"<<left<<setw(15)<<"Birth_month"<<left<<setw(15)<<"Telephone number"<<endl;
                        student_read.show();
                        break;
                    }
                    file.read(reinterpret_cast <char *> (&student_read),sizeof(student));
                }
                if (flag==0)
                    cout<<"Sorry, the student is not recorded, we can't find him/her. "<<endl;
                file.close();
                cout<<endl;break;
            }
        case 3:
            {
                if (num==0)
                {
                    cout<<"Sorry, there is no student recorded here! Please add student first. "<<endl;
                }
                else
                {
                cout<<left<<setw(15)<<"No."<<left<<setw(10)<<"Name"<<left<<setw(15)<<"Birth_year"<<left<<setw(15)<<"Birth_month"<<left<<setw(15)<<"Telephone number"<<endl;
                file.open("student.txt");
                file.read(reinterpret_cast <char *> (&student_read),sizeof(student));
                while (!file.eof())
                {
                    student_read.show();
                    file.read(reinterpret_cast <char *> (&student_read),sizeof(student));
                }
                file.close();
                }
                cout<<endl;break;
            }
        case 4:
            {
                flag=0;
                cout<<"Please enter the No of student you want to change information: "<<endl;
                cin>>input_No;
                cout<<endl;
                file.open("student.txt");
                file.read(reinterpret_cast <char *> (&student_read),sizeof(student));
                while (!file.eof())
                {
                    if (student_read.show_No()==input_No)
                    {
                        flag=1;
                        cout<<endl;
                        cout<<"Find him/her successfully! "<<endl;
                        cout<<left<<setw(15)<<"No."<<left<<setw(10)<<"Name"<<left<<setw(15)<<"Birth_year"<<left<<setw(15)<<"Birth_month"<<left<<setw(15)<<"Telephone number"<<endl;
                        student_read.show();
                        cout<<endl;
                        cout<<"Please enter the new information! "<<endl;
                        long long a; char b[20]; int c; int d; long long e;
                        cout<<endl;
                        //cout<<"please enter his/her No. : "<<endl;
                        //cin>>a;
                        a=input_No;
                        cout<<"please enter his/her Name : "<<endl;
                        cin>>b;
                        cout<<"please enter his/her birth_year : "<<endl;
                        cin>>c;
                        cout<<"please enter his/her birth_month : "<<endl;
                        cin>>d;
                        cout<<"please enter his/her telephone number : "<<endl;
                        cin>>e;
                        student student_changed(a,b,c,d,e);
                        long cursor=file.tellg();
                        file.seekp(cursor-sizeof(student));
                        file.write(reinterpret_cast<char *> (&student_changed),sizeof(student));
                        cout<<endl;
                        cout<<"changed successfully!"<<endl;
                        file.clear();
                        break;
                    }
                    file.read(reinterpret_cast <char *> (&student_read),sizeof(student));
                }
                if (flag==0)
                    cout<<"Sorry, the student is not recorded, we can't find him/her. "<<endl;
                file.close();
                cout<<endl;break;
            }
        }
    }
    return 0;
}
