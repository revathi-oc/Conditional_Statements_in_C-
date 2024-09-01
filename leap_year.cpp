//REVATHI OC
//23070123105 
#include<iostream>
using namespace std;
int main()
{
    cout<<"3.Leap year"<<endl;
    int year;
    cout<<"Enter a year: ";
    cin>>year;
    if((year%4==0 & year%100!=0)||(year%400==0))
    {
        cout<<year<<" is a leap year ";
    }
    else 
    {
        cout<<year<<" is not a leap year";
    }
    return 0;
}