#ifndef BUBBLESORT_H_INCLUDE
#define BUBBLESORT_H_INCLUDE
#include<vector>

class BubbleSort
{
   public:
     BubbleSort();
    ~BubbleSort();
    void BubbleSorter(int *array, int n);
    void BubbleSorterVector(std::vector<int> & data);
};
#endif