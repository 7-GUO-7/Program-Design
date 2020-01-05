#include <iostream>

using namespace std;

int main()
{
long score_A,score_B;
cout<<"please enter the score of A:"<<endl;
cin>>score_A;
cout<<"please enter the score of B:"<<endl;
cin>>score_B;
if (score_A>11||score_A<0||score_B>11||score_B<0)
    cout<<"invalid score"<<endl;
else
{
    if (score_A>score_B==1)
cout<<"A wins"<<endl;
else
cout<<"B wins"<<endl;
}

return 0;
}
