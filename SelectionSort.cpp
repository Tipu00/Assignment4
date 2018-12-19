#include "SelectionSort.h"
#include <iostream>
using namespace std;
SelectionSort::SelectionSort()
{
}
SelectionSort::~SelectionSort()
{
}
inline void Swap(int &a, int &b)
{
    int k = a;
    a = b;
    b = k;
}
void SelectionSort::SelectioSorter(int arr[], int arr_size)
{
    cout <<"SelectionSort Using Array:"<<endl;
    for(int i = 0; i < arr_size - 1; ++i)
    {
        int min = i;
        for(int j = i+1; j < arr_size; ++j){
            if(arr[j] < arr[min])
                min = j;
        }
        Swap(arr[min], arr[i]);
       for(int k = 0; k < arr_size; ++k)
    {
        cout << arr[k]<<" ";
    }
    cout <<endl;
    }
}
	
void SelectionSort::SelectioSorterVector(vector <int> &data)
{
    cout<<"Selection Sort Using Vector:"<<endl;
     int index,num, first_element, size = data.size();

     for ( index =0; index<size+1; index++ ){
         first_element = index;
         for ( num = index+1; num<size; num++ ){

             if ( data[num] < data[first_element] )
             first_element = num;
         }
     swap(data[first_element], data[index]);
     for (std::vector<int>::iterator val = data.begin();val != data.end(); ++val)
    std::cout << *val <<" " ;
    cout<<""<<endl;
     }
    ;

}

