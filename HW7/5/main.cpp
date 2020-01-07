#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    ifstream infile;
    ofstream outfile;
    int option=1;
    string name;
    //or write: char name[11];
    string name_table[20];
    //char *name_table[20];
    int chinese_table[20];
    int math_table[20];
    int english_table[20];
    int total_table[20];
    bool flag=1;
    int student=0;
    int num=0;

    infile.open("score.txt");
    if (!infile)
        {cerr<<"Sorry, we can't open this file. "<<endl;return 1;}
    while (true)
    {
        if (flag==0)
            break;
    switch (option)
    {
    case 1:
        if (infile>>name)
            {
                name_table[student]=name;//char[11] can be converted to a string, but a string can't be converted to a char[11] as below showed.
                //strcpy((name_table[student]),name);
                option++;break;
            }
        else
            flag=0;break;
    case 2:
        infile>>chinese_table[student];
        option++;break;
    case 3:
        infile>>math_table[student];
        option++;break;
    case 4:
        infile>>english_table[student];
        option=option-3;
        student++;
        num++;break;
    }
    }
    infile.close();
    int i,j;
    int tmp;
    string tmp_;
    for (i=0;i<num;++i)
        total_table[i]=chinese_table[i]+math_table[i]+english_table[i];
    for (i=0;i<num-1;++i)
    {
        for (j=i+1;j<num;++j)
        {
            if (total_table[i]<total_table[j])
                {
                tmp=total_table[i];
                total_table[i]=total_table[j];
                total_table[j]=tmp;
                tmp=chinese_table[i];
                chinese_table[i]=chinese_table[j];
                chinese_table[j]=tmp;
                tmp=math_table[i];
                math_table[i]=math_table[j];
                math_table[j]=tmp;
                tmp=english_table[i];
                english_table[i]=english_table[j];
                english_table[j]=tmp;
                tmp_=name_table[i];
                //tmp_ must be a string, can't be a char[11], because can't convert string to char[11], but can convert char[11] to string as above showed.
                //strcpy(tmp_,name_table[i]);
                name_table[i]=name_table[j];
                //strcpy(name_table[i],name_table[j]);
                name_table[j]=tmp_;
                //strcpy(name_table[j],tmp_);
                }
        }
    }

    outfile.open("final.txt");
    if (!outfile)
    {cerr<<"Sorry, we can't create this file. "<<endl;return 1;}
    for (i=0;i<num;++i)
    {
        outfile<<name_table[i]<<' '<<chinese_table[i]<<' '<<math_table[i]<<' '<<english_table[i]<<' '<<total_table[i]<<endl;
    }
    outfile.close();
    cout<<"The work has done successfully! "<<endl;
    return 0;
}
