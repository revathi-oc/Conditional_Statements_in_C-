//REVATHI OC
//23070123105
#include<iostream>
#include<string>
using namespace std;
int main()
{
   cout<<"4.Password verification"<<endl;
   int i=1;
   string password ="siu",newpassword;
   do
   {
    cout<<"Enter password: ";
    cin>>newpassword;
     if(newpassword==password)
     {
      cout<<"Success";
      break;
     }
     else
     {
      cout<<"Try again!"<<endl;
     }
     i++;
   } while (i);
   
}