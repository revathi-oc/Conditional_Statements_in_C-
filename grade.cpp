//REVATHI OC
//23070123105 
#include<iostream>
using namespace std;
int main()
{
    cout<<"7.Grade evaluation"<<endl;
    int m1,m2,m3,m4,m5;
    float avg;
    cout<<"Enter marks of 5 subjects :";
    cin>>m1>>m2>>m3>>m4>>m5;
    avg=((m1+m2+m3+m4+m5)/500.0)*100;
    if(avg>90 & avg<100 )
    {
     cout<<"Grade A";
    }
    else if (avg>=71 & avg<=90)
    {
        cout<<"Grade B"; 
    }
    else if(avg>=50 & avg<=70)
    {
        cout<<"Grade C";
    }
    else if (avg>=40 & avg<=49)
    {
        cout<<"Grade D";
    }
    else if (avg<40)
    {
      cout<<"Fail";
    }
    return 0;
}
    