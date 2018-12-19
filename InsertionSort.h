#ifndef INSERTIONSORT_H_INCLUDED
#define INSERTIONSORT_H_INCLUDED
#include<vector>
class InsertionSort
{
  public:
    InsertionSort();
    ~InsertionSort();
    void  InsertionSorter(int arra[],int arra_size);
    void  InsertionSorterVector(std::vector<int>& data);
};
#endif