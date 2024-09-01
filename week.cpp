//REVATHI OC
//23070123105
#include<iostream>
using namespace std;
int main()
{
    cout<<"5.Switch case week of the days"<<endl;
    int ch;
    cout<<"Enter your choice of week: "<<endl<<" 1-7 : ";
    cin>>ch;
    switch(ch)
    {
        case 1:
        cout<<" Monday";
        break;
        case 2:
        cout<<" Tuesday";
        break;
        case 3:
        cout<<" Wednesday";
        break;
        case 4:
        cout<<" Thursday";
        break;
        case 5:
        cout<<" Friday";
        break;
        case 6:
        cout<<" Saturday";
        break;
        case 7:
        cout<<" Sunday";
        break;

    }
    return 0;
}