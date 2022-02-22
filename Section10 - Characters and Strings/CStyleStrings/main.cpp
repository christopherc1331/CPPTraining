#include <iostream>
#include <string.h>
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

    strcpy(myNullName, "Frank");

    cout << myNullName << endl; // works

    char firstName[20] {};
    char lastName[20] {};
    char fullName[50] {};
    char temp[50] {};

    cout << "Please enter your first name:";
    cin >> firstName;

    cout << "Please enter your last name:";
    cin >> lastName;
    cout << "------------------------------" << endl;

    cout << "Hello " << firstName << ", your first name has " << strlen(firstName) << " characters, " << endl;
    cout << "and your last name, " << lastName << " has " << strlen(lastName) << " characters" << endl;

    strcpy(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);

    cout << "Your full name is: " << fullName << endl;



    return 0;
}
