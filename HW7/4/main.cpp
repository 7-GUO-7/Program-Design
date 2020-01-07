#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream infile;

    //ofstream outfile;
    //outfile.open("test");
    //outfile.close();
    // the above code is creating a file.
    char tmp;
    int paragraph=0;
    int words=0;
    int character=0;
    infile.open("test.txt");
    //infile.open("test");
    // these two codes are the same.
    if (!infile)
    {
        cerr<<"Sorry, we can't open this file. "; return 1;
    }
    paragraph++;
    words++;
    while ((tmp=infile.get())!=EOF)
    {
        character++;
        if (tmp=='.'||tmp==',')
            character--;
        if (tmp=='\n')
            {words++;
            paragraph++;
            character--;}
        if (tmp==' ')
            {words++;
            character--;}

    }
    cout<<"The number of characters is: "<<endl;
    cout<<character<<endl;
    cout<<"The number of words is: "<<endl;
    cout<<words<<endl;
    cout<<"The number of paragraphs is: "<<endl;
    cout<<paragraph<<endl;
    infile.close();
    return 0;
}
