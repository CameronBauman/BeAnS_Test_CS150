/**
 * @file sorting.cpp
 * @author Cameron Bauman
 * @brief this .cpp file has bits of code for sorting
 * @version 0.1
 * @date 2024-11-16
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/**
 * @brief bubble sort compared each element with its neighbor and swaps them if they are not in order
 * 
 * @param array 
 * @param size 
 */

void bubbleSort(int array[], int size)
{
    bool swap = true;
    int lasti = size - 1;

    while (swap)
    {
        swap = false;

        for (int i = 0; i < lasti; ++i)
        {
            if (array[i] > array[i + 1])
            {

                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swap = true;

            }
        }

        --lasti;
    }
}

/**
 * @brief selection sort moves one element at a time to its correct position each pass
 * 
 * @param array 
 * @param size 
 */

void selectionSort(int array[], int size)
{
    int mini, minNum;

    for (int search = 0; search < (size - 1); ++search)
    {
        mini = search;
        minNum = array[search];

        for (int i = search + 1; i < size; i++)
        {
            if (array[i] < minNum)
            {

            minNum = array[i];
            mini = i;

            }
        }

        array[mini] = array[search];
        array[search] = minNum;
    }
}

/**
 * @brief the first element is decided to be sorted, then it checks the element next to it to determine if it is sorted or not, 
 *        then moves on to the next element
 * 
 * @param array 
 * @param size 
 */

void insertionSort(int array[], int size)
{
    for (int search = 1; search < size; ++search)
    {
        int key = array[search];
        int i = search - 1;

        while (i >= 0 && array[i] > key)
        {
            array[i+1] = array[i];
            --i;
        }

        array[i+1] = key;
    }
}