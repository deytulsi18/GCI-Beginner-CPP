/*
Print the following pattern on the screen
****
 ** 
  *  
 ** 
****

*/
#include<iostream>

using namespace std;

int main()
{
    int size; cin>>size;

    for(int i = 1; i <= size; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<" ";
        }
        for(int j = i; j <= size; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
       for(int i = 1; i <= size; i++)
    {   if(i == 1) continue;
        for(int j = i; j <= size; j++)
        {
            cout<<" ";
        }
        for(int j = 1; j <= i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}