#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(NULL));
    int i=1,number,n=1,guess;
    number=rand()%100+1;
    while (n<=7)
    {
        cout<<"please enter the number you guess:"<<endl;
        cin>>guess;
        if (guess>number)
        {
            cout<<"too big!"<<endl;
        }
        if (guess<number)
        {
            cout<<"too small!"<<endl;
        }
        if (guess==number)
        {
            cout<<"congratulations! correct!"<<endl;
            break;
        }
        i=i+1;
    }
    return 0;
}
