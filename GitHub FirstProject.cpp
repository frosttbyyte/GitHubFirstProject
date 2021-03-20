// GitHub FirstProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int op;
    int num1;
    int num2;
    int add;
    int sub;
    int mult;
    int div;

    cout << "Would you like to 1) add, 2) subtract, 3) multiply or 4) divide? (Enter the corresponding number): ";
    cin >> op;

    if (op == 1) {
        cout << "Enter two numbers to add together: ";
        cin >> num1 >> num2;
        add = num1 + num2;
        cout << "The sum of the two numbers is " << add << endl;
    }
    else if (op == 2) {
        cout << "Enter two numbers to subtract: ";
        cin >> num1 >> num2;
        sub = num1 - num2;
        cout << "The difference of the two numbers is " << sub << endl;
    }
    else if (op == 3) {
        cout << "Enter two numbers to multiply: ";
        cin >> num1 >> num2;
        mult = num1 * num2;
        cout << "The two numbers multiplied together are " << mult << endl;
    }
    else if (op == 4) {
        cout << "Enter two numbers to divide: ";
        cin >> num1 >> num2;
        div = num1 / num2;
        cout << "The two numbers divided equal " << div << endl;
    }
    else {
        cout << "You did not enter a valid input!" << endl;
    }

    system("pause");
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
