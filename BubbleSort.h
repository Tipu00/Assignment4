#ifndef BUBBLESORT_H_INCLUDE
#define BUBBLESORT_H_INCLUDE

class BubbleSort
{
   public:
     BubbleSort();
    ~BubbleSort();
    void BubbleSort(int *array, int n);
    void BubbleSortVector(std::vector<int> & data);
};
#endif