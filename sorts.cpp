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
    cout<<"which one is your choos to sort \n";
    sort.printArray(arr,size);
    

    return 0;
}