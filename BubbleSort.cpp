#include "BubbleSort.h"
#include <iostream>
using namespace std;

BubbleSort::BubbleSort()
  {
  }
BubbleSort::~BubbleSort()
  { 
  }
Void BubbleSort::BubbleSort(int *array , int n);
{
    cout<<"BubbleSort Using Array :"<<endl;
    int num=0;
    int temp;
    bool swapped = true;

    while(swapped)
    {
        swapped = false;
        num++;
        for(int index = 0; index<n; ++index)
        {
            if(array[index]>array[index+1])
            {
                temp = array[index];
                array[index]=array [index+1];
                array[index+1]=temp;
                for(int index=0;index<8;index++)
                {
                    cout<<array[index]<<"";
                }
                cout<<""<<endl;
                swapped = true;
            }
        }
    }
}