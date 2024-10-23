#include <iostream>
#include "sorts.h"

#include <vector>
using namespace std;

int main()
{
    sorts sort;
    int size;
    cout << "Hello to Sort app !! \n please Enter your array for sort : ";
    vector<int> array;
    int value;
    while (cin >> value)
    {
        array.push_back(value);
    }
    size = array.size();
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = array[i];
    }

    sort.print_array(arr, size);
    //cout << "1 - selection Sort : \n";
    //sort.Selection_Sort(arr, size);
    //sort.print_array(arr, size);
    // cout << "2 - Bubble Sort : \n";
    
    // sort.Bubble_sort(arr, size);
    cout<<"Insertion sort : \n";
    sort.Insertion_sort(arr,size);
    
    return 0;
}