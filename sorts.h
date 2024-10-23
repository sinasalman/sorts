#include <iostream>
using namespace std;
#include <vector>
class sorts
{

public:
    void Swap(int *a, int *b)
    {
        int temp;
        temp = *a;
        *a = *b;
        *b = temp;
    }
    // selection sort choose the minimum in each step and change the minimum and pur in the correct index
    void Selection_Sort(int array[], int size)
    {
        for (int step = 0; step < size; step++)
        {
            int min_index = step;
            for (int i = step + 1; i < size; i++)
            {
                if (array[i] < array[min_index])
                {
                    min_index = i;
                }
            }
            cout << "Now element in index " << step << " changed with element in index " << min_index << '\n';
            Swap(&array[min_index], &array[step]);
        }
    }
    void Bubble_sort(int array[], int size)
    {
        for (int step = 0; step < size - 1; step++)
        {
            for (int i = 0; i < size - step - 1; i++)
            {
                if(array[i] > array[i+1])
                    {
                        cout<<"the element in index : "<< i << " is  greater than the element in index : " << i+1 << '\n';
                        Swap(&array[i],&array[i+1]);
                    }
            }
        }
        print_array(array,size);
    }
    void Insertion_sort(int array[],int size){
        int y , j ;
        for(int i = 2 ; i<size;i++){
            y = array[i];
            j = i-1;
            while (j > 0 && y < array[j]){
                array[j+1]  =  array[j];
                
                print_array(array,size);

                j -= 1;
            }
            
            array[j+1] = y;
        }
         print_array(array,size);
    }
    void print_array(int array[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << '\t';
        }
        cout << '\n';
    }
};
