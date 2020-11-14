/*
Write a program to convert Fahrenheit into Celsius.

*/
#include <iostream>

using namespace std;
int main()
{
    double TempF; cin>> TempF;
    double TempC = ((TempF - 32)*5)/9;

    cout<<"Fahrenheit : "<<TempF<<endl;
    cout<<"Celsius : "<<TempC<<endl;
    return 0;
}