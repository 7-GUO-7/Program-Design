#include "student_T.h"
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int choice;
    bool exit=0;
    student_T *lab[200];
    student_T a0={"Alice","5200309745",95,98,75};
    student_T a1={"Peter","5190408620",98,76,34};
    int num=2;
    lab[0]=&a0;
    lab[1]=&a1;
    student_T *p;
    char name_[11],number_[11];
    int chinese_,math_,english_;
    int i,j,use_person,flag;
    int all1,all2;

    while (true)
    {
    cout<<"Welcome to use the management system of students!"<<endl;
    cout<<"1 add student"<<endl;
    cout<<"2 re-edit student's information"<<endl;
    cout<<"3 show all the information"<<endl;
    cout<<"4 search the information by No."<<endl;
    cout<<"5 search the information by Name"<<endl;
    cout<<"6 ranking by NO. from smallest to the biggest"<<endl;
    cout<<"7 ranking by total scores from largest to the least"<<endl;
    cout<<"0 exit"<<endl;
    cout<<endl;
    cin>>choice;
    switch (choice)
    {
        case 0:exit=1;cout<<endl<<"thanks for using!"<<endl; break;
        case 1:
        {
            p=new student_T;
            cout<<"please enter the 5 information(Name/No/Chinese/Maths/English):"<<endl;
            cin>>name_>>number_>>chinese_>>math_>>english_;
            strcpy(p->name,name_);
            strcpy(p->number,number_);
            p->chinese=chinese_;
            p->math=math_;
            p->english=english_;
            lab[num]=p;
            cout<<endl;
            cout<<"Information:"<<endl;
            cout<<lab[num]->name<<' '<<lab[num]->number<<' '<<lab[num]->chinese<<' '<<lab[num]->math<<' '<<lab[num]->english<<endl;
            num++;
            cout<<endl;break;
        }
        case 2:
        {
             cout<<"please enter the No. of the student you want to change:"<<endl;
             cin>>number_;
             cout<<endl;
             flag=0;
             for (i=0;i<num;++i)
             {
                 if (!strcmp(lab[i]->number,number_))
                 {
                     flag=1;use_person=i;break;
                 }
             }
             if (!flag)
                {cout<<"No this student!"<<endl;
                cout<<endl;}
             else
                {
                    cout<<"The student is:"<<endl;
                    cout<<lab[use_person]->name<<endl;
                    cout<<endl;
                    cout<<"please re-enter the 5 information(Name/No/Chinese/Maths/English):"<<endl;
                    cin>>name_>>number_>>chinese_>>math_>>english_;
                    strcpy(lab[use_person]->name,name_);
                    strcpy(lab[use_person]->number,number_);
                    lab[use_person]->chinese=chinese_;
                    lab[use_person]->math=math_;
                    lab[use_person]->english=english_;
                    cout<<endl;
                    cout<<"New information:"<<endl;
                    cout<<lab[use_person]->name<<' '<<lab[use_person]->number<<' '<<lab[use_person]->chinese<<' '<<lab[use_person]->math<<' '<<lab[use_person]->english<<endl;
                    cout<<endl;
                }
            break;
        }
        case 3:
        {
            cout<<"Name:"<<' '<<"No.:"<<' '<<"Chinese:"<<' '<<"Math:"<<' '<<"English:"<<endl;
            for (i=0;i<num;++i)
            {

                cout<<lab[i]->name<<' '<<lab[i]->number<<' '<<lab[i]->chinese<<' '<<lab[i]->math<<' '<<lab[i]->english<<endl;
            }
            cout<<endl;
            break;
        }
        case 4:
        {
            cout<<"please enter the No. of the student you want to search:"<<endl;
            cin>>number_;
            cout<<endl;
            flag=0;
             for (i=0;i<num;++i)
             {
                 if (!strcmp(lab[i]->number,number_))
                 {
                     flag=1;use_person=i;break;
                 }
             }
             if (!flag)
                {cout<<"No this student!"<<endl;
                cout<<endl;}
             else
                {
                    cout<<"This student's information is:"<<endl;
                    cout<<lab[use_person]->name<<' '<<lab[use_person]->number<<' '<<lab[use_person]->chinese<<' '<<lab[use_person]->math<<' '<<lab[use_person]->english<<endl;
                    cout<<endl;
                }
            break;
        }
        case 5:
        {
            cout<<"please enter the Name of the student you want to search:"<<endl;
            cin>>name_;
            cout<<endl;
            flag=0;
             for (i=0;i<num;++i)
             {
                 if (!strcmp(lab[i]->name,name_))
                 {
                     flag=1;use_person=i;break;
                 }
             }
             if (!flag)
                {cout<<"No this student!"<<endl;
                cout<<endl;}
             else
                {
                    cout<<"This student's information is:"<<endl;
                    cout<<lab[use_person]->name<<' '<<lab[use_person]->number<<' '<<lab[use_person]->chinese<<' '<<lab[use_person]->math<<' '<<lab[use_person]->english<<endl;
                    cout<<endl;
                }

            break;
        }
        case 6:
        {
            for (i=0;i<num;++i)
            {
                for (j=i+1;j<num;++j)
                {
                    if (strcmp(lab[i]->number,lab[j]->number)>0)
                    {
                        p=lab[i];
                        lab[i]=lab[j];
                        lab[j]=p;
                    }
                }
            }
            break;
        }
        case 7:
        {
            for (i=0;i<num;++i)
            {
                all1=lab[i]->chinese+lab[i]->math+lab[i]->english;
                for (j=i+1;j<num;++j)
                {
                    all2=lab[j]->chinese+lab[j]->math+lab[j]->english;
                    if (all1<all2)
                    {
                        p=lab[i];
                        lab[i]=lab[j];
                        lab[j]=p;
                    }
                }
            }
            break;
        }
    }
    if (exit)
        break;
    }

    return 0;
}
