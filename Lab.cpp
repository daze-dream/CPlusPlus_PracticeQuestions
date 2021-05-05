// Lab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    for (int i = 0; i <= 100; i++)
    {
        string output = "";
        cout << i; cout << ": ";
        if (i % 3 == 0) { output += "fizz"; }
        if (i % 5 == 0) { output += "buzz"; }
        cout << output << endl;
    }
    system("pause");
    return 0;
}
