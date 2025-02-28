#include<iostream>
// <iomanip> is header file who has afunctionality to use setw()[set width on output display]
#include<iomanip>

using namespace std;
 
 int main (){

int a=114, b=466, c=109116;

cout<<"the value of a without setw is :  "<<a<<endl;
cout<<"the value of b without setw is :  "<<b<<endl;
cout<<"the value of c without setw is :  "<<c<<endl;

cout<<endl;

// endl and setw are manipulator which helps in making the outut display good

cout<<"the value of a with setw is :  "<<setw(6)<<a<<endl;
cout<<"the value of b with setw is :  "<<setw(6)<<b<<endl;
cout<<"the value of c with setw is :  "<<setw(6)<<c<<endl;






    return 0;
 }