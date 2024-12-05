/**
 * @file sorting.cpp
 * @author Cameron Bauman
 * @brief this .cpp file has has some bits of code for searching
 * @version 0.1
 * @date 2024-11-16
 * 
 * @copyright Copyright (c) 2024
 * 
 */


/**
 * @brief searches for user inputed value starting from the first value
 * 
 * @param list array
 * @param size size of array
 * @param value user inputed value
 * @return int 
 */
int linearSearch(const int array[], int size, int value)
{
    int i = 0;
    int position = -1;
    bool found = false;

    while (i < size && !found)
    {
        if (array[i] == value)
        {

            found = true;
            position = i;
        
        }

        ++i;
    }

    return position;
}

/**
 * @brief searches the array starting from midpoint to find user inputed value
 *        binary search is one of the more efficient ways to approach searching
 * 
 * @param array 
 * @param size array size
 * @param value user inputed value
 * @return int 
 */
int binarySearch(const int array[], int size, int value)
{
    int first = 0, // First array element
    last = size - 1, // Last array element
    middle, // Midpoint of search
    position = -1; // Position of search value
    bool found = false; // Flag

    while (!found && first <= last)
    {
        middle = (first + last) / 2;

        if (array[middle] == value) // If value is found at mid
        {
            found = true;
            position = middle;
        }

        else if (array[middle] > value) // If value is in lower half
        {
            last = middle - 1;
        }

        else
        {
            first = middle + 1; // If value is in upper half
        }

    }

    return position;
}