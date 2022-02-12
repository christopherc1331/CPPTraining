#include <iostream>

using namespace std;


int main()
{

    // declaring variables

    char myName[] {"Frank"};

    myName[5] = 'y'; // will return unexpected result since you're reassigning the null stop value to a 'y' char

    cout << myName << endl;

    char myNewName[8] {"Frank"};

    myNewName[5] = 'y';

    cout << myNewName << endl; // works

    char myNullName[8];

//    myNullName = "Frank"; // cannot reassign this way

    strcopy


    return 0;
}
