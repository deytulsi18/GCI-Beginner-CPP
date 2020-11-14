/*
Take integer inputs from user until he/she presses q ( Ask to press q to quit after every integer input ). 
Print average and product of all numbers.

*/
#include <iostream>

using namespace std;
int main()
{
    double avg, count = 0, pdt = 1;

    while(true)
    {
    string num; cin>>num;
    if(num == "q") break;
    count++;
    avg += stoi(num);
    pdt *= stoi(num);
    }

    cout<<"Average : "<<(avg/count)<<endl;
    cout<<"Product : "<<pdt<<endl;
    return 0;
}