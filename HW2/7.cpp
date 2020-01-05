#include <iostream>

using namespace std;

int main()
{
    int n,i,day1=0,c;
    int week[7]={0};
    cout<<"Please enter n you want:"<<endl;
    cin>>n;
    for (i=0;i<=n-1;++i)
    {
        if (((i-1)%4==0)&&((i-1)%100!=0))
        {
            day1=day1+2;
            week[((13-1)%7+day1)%7]++;
            week[((44-1)%7+day1)%7]++;
            week[((72-1)%7+day1)%7]++;
            week[((103-1)%7+day1)%7]++;
            week[((133-1)%7+day1)%7]++;
            week[((164-1)%7+day1)%7]++;
            week[((194-1)%7+day1)%7]++;
            week[((225-1)%7+day1)%7]++;
            week[((256-1)%7+day1)%7]++;
            week[((286-1)%7+day1)%7]++;
            week[((317-1)%7+day1)%7]++;
            week[((347-1)%7+day1)%7]++;

        }
        else
        {
            if ((i%4==0)&&(i%100!=0))
            {
                day1=day1+1;
                week[((13-1)%7+day1)%7]++;
                week[((44-1)%7+day1)%7]++;
                week[((73-1)%7+day1)%7]++;
                week[((104-1)%7+day1)%7]++;
                week[((134-1)%7+day1)%7]++;
                week[((165-1)%7+day1)%7]++;
                week[((195-1)%7+day1)%7]++;
                week[((226-1)%7+day1)%7]++;
                week[((257-1)%7+day1)%7]++;
                week[((287-1)%7+day1)%7]++;
                week[((318-1)%7+day1)%7]++;
                week[((348-1)%7+day1)%7]++;
            }
            else
            {
                day1=day1+1;
                week[((13-1)%7+day1)%7]++;
                week[((44-1)%7+day1)%7]++;
                week[((72-1)%7+day1)%7]++;
                week[((103-1)%7+day1)%7]++;
                week[((133-1)%7+day1)%7]++;
                week[((164-1)%7+day1)%7]++;
                week[((194-1)%7+day1)%7]++;
                week[((225-1)%7+day1)%7]++;
                week[((256-1)%7+day1)%7]++;
                week[((286-1)%7+day1)%7]++;
                week[((317-1)%7+day1)%7]++;
                week[((347-1)%7+day1)%7]++;
            }
        }
    }
    for (c=1;c<=6;++c)
        cout<<week[c]<<endl;
    cout<<week[0];
    return 0;
}
