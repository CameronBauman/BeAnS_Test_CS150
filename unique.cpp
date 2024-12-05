//12.cpp (25 pts)
/**Write a function called unique,
that accepts an array of integers and the size of the array,
where all elements but one occur twice.
The function should return the value of the unique element.
**/
#include <iostream>
using namespace std;
//function prototypes
void displayArray(const int array[], int size);
int unique(int array[], int size);


const int SIZE = 13;
int main()
{
    int num = 0;
    //in this case 3 is unique
    int numbers[SIZE] ={1,7, 3, 0, 5, 6, 7, 9, 9, 1, 0, 6, 5};
    displayArray(numbers, SIZE);
    //call the unique function and display the output to the screen
    num = unique(numbers, SIZE);
    cout<<"The unique element is "<< num <<endl;

    return 0;
}
/**Write a function called unique,
that accepts an array of integers and the size of the array,
where all elements but one occur twice.
The function should return the value of the unique element.
**/



/********************displayArray*****************************
* This function displays the array of int (need for testing)
*************************************************************/
void displayArray(const int array[], int size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout <<endl;
}

int unique(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        bool e = true;
        for(int j = 0; j < size; j++)
        {
            if(i != j && array[i]==array[j])
            {
                e = false;
                break;
            }
        }
        if(e)
        {
            return array[i];
        }
    }
    return 0;
}