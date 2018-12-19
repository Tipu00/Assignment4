#include "InsertionSort.h"
#include <iostream>
using namespace std;
InsertionSort::InsertionSort()
{
}
InsertionSort::~InsertionSort()
{
}
void InsertionSort::InsertionSorter(int arr[], int arr_size)
{
    cout<<"InsertionSort Using Array::"<<endl;
    if(arr_size > 1)
    {
         int size = arr_size;
         for(int index = 1; index < size; ++index)
       {
           int num = index - 1;
           int key = arr[index];
           while(num >= 0 && arr[num] > key)
            {
              arr[num+1] = arr[num];
              --num;
            }
        arr[num+1] = key;
        for(int index=0;index<arr_size;index++)
           {
             cout<<arr[index]<<" ";
           }
        cout<<""<<endl;
      }
    }
}