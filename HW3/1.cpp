#include <iostream>

using namespace std;

int Binary_search(int arr[],int n,int min_,int max_)
// min_ and max_ are the minimum and maximum index of this array!
// for example, if the set is [1,2,3,6,8], than min_=0, max_=4 !
{
    int mid;
    mid=(min_+ max_)/2;
    if (min_<=max_)
    {
    if (arr[mid]==n)
        return mid;
    else
    {
        if (arr[mid]<n)
        {
            min_=mid+1;
            return Binary_search(arr,n,min_,max_);
        }
        else
        {
            max_=mid-1;
            return Binary_search(arr,n,min_,max_);
        }
    }
    }
    return 'no';
}
int main()
{
    int s[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<Binary_search(s,8,0,9)<<endl;

    // s is the array you input, "8" is the element you want, 0 is the smallest index and 9 is the biggest index.
    //the output is the index of the element.
    return 0;
}
