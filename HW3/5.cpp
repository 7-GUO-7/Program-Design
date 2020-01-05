#include <iostream>

using namespace std;
void merge(int *data,int start,int end,int *result);
void merge_sort(int *data, int start, int end, int *result)
  {
      if(1 == end - start)
      {
          if(data[start] > data[end])
          {
              int temp  = data[start];
              data[start] = data[end];
              data[end] = temp;
         }
         return;
     }
     else if(0 == end - start)
         return;
     else
     {
         merge_sort(data,start,(end-start+1)/2+start,result);
         merge_sort(data,(end-start+1)/2+start+1,end,result);
         merge(data,start,end,result);
         for(int i = start;i <= end;++i)
            data[i] = result[i];
     }
 }

 void merge(int *data,int start,int end,int *result)
 {
    int left_length = (end - start + 1) / 2 + 1;
    int left_index = start;
    int right_index = start + left_length;
    int result_index = start;
    while(left_index < start + left_length && right_index < end+1)
    {

        if(data[left_index] <= data[right_index])
             result[result_index++] = data[left_index++];
         else
             result[result_index++] = data[right_index++];
    }
     while(left_index < start + left_length)
         result[result_index++] = data[left_index++];
     while(right_index < end+1)
        result[result_index++] = data[right_index++];
 }

int main()
{
    int data[] = {9,6,7,22,20,33,16,20};
    int length = 8;
    //two inputs are the data and its length!
    int result[length];
    merge_sort(data,0,length-1,result);
    for(int i = 0;i < length;++i)
    cout << data[i] << "  ";
    cout << endl;
    return 0;
 }
