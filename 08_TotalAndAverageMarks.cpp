/*
If the marks of Robert in three subjects are 78,45 and 62 respectively (each out of 100 ), 
write a program to calculate his total marks and percentage marks.

*/
#include <iostream>

using namespace std;
int main()
{
    int marks1 = 78, marks2 = 45, marks3 = 62;
    int total = marks1 + marks2 + marks3;
    double percentage = total/3; 

    cout<<"Total Marks: "<<total<<endl;
    cout<<"Percentage: "<<percentage<<"%"<<endl;
    return 0;
}