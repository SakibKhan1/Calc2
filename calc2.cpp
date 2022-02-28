/*
Author: Sakib Khan
Course: CSCI 135
Instructor: Tong Yi
Assignment: Project 1C
Reads txt file and inputs answer for every line
given that a semicolon is placed at the end of each line.
*/

#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int next;
    char op;
    //use char to take in operator
    cin >> sum;
    while (cin >> op >> next)
    {
        if (op == '+')
            sum = sum + next;
        if (op == '-')
            sum = sum - next;
        if (op == ';')
        //char applies to semi-colon as well
        {
            cout << sum << endl;
            sum =  next;
        }
    }
    cout << sum << endl;
    return 0;
}
