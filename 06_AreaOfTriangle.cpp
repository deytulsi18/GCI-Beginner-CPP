/*
Take value of length and breath of a rectangle from user as float.
Find its area and print it on screen after type casting it to int.

*/
#include <iostream>

using namespace std;

int main()
{
    float length, breadth; 
    cin>>length>>breadth;

    int area = (int) (length*breadth);
    cout<<area<<endl;

    return 0;
}