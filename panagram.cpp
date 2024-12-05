//13.cpp (25 pts)
#include <iostream>
using namespace std;

const int SIZE = 4;
bool ispanagram(string str);

int main()
{
    string str1 = "A quick brown fox jumps over the lazy dog";//true
    string str2 = "Jumbling vext frowzy hacks PDQ";//true
    string str3 = "It is a beautiful day at the Coeur dAlene"; //false
    //call the function
    cout << ispanagram(str3) <<endl;


    return 0;
}

/**
* A pangram is a string that contains every letter of the alphabet.
* Write a function called isPangram, that accepts a string.
* The function should return true if the string contain a pangram in the English alphabet and false otherwise
**/

bool ispanagram(string str)
{
    // int count = 0;
    // for(int i = 0; i< j; i++)
    // {
    //     for(char a = 'A'; i < j; a++)
    //     {
    //         if(a==str[i])
    //         {
    //             count++;
    //         }  
    //     }
    // }

    // if (count >=27)
    // {
    //     return true;
    // }

    // return false;
    bool letters[26] = {false};
    int index;

    for (char ch : str) {
        if (isalpha(ch)) {
            index = tolower(ch) - 'a';
            letters[index] = true;
        }
    }

    for (bool letter : letters) {
        if (!letter) {
            return false;
        }
    }

    return true;
}