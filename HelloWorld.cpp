#include <iostream>

// sayHello.cpp
// Code warm up week 01
// dH 8/8/22

// Instructions: Understand every single key stroke of this program.
// Modify this program to get the user's answer to your greeting question and
// reply to the user with a nice message
// Advanced: create a decision control structure that processes user input and outputs a value depending on
// the input from the user.


using namespace std;

int main()
{
    cout << "Hello!" << endl;

    string userInput;

    // Ask user for input, tell user to press enter
    cout << "Southideth Manivong: ";

    // Get user input from the keyboard
    cin >> userInput;

    // print six lines using a for loop!
    for (int i=0; i<=6; i++)
    {
        cout<<i<<" " endl;
    }

    cout << " Hello  " << userInput << " how are you today>?";
    cin >> " Hello! " >> userInput >> " I am doing well today, how are you?";



    return 0;
}
