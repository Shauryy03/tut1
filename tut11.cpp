#include<iostream>

using namespace std;

int main(){


    //control structure 

int age;

cout<<"enter your age : ";
cin>>age;

// selection contol structure ----- switch case statement

switch (age)
{
case 18:
    cout<<"you are adult"<<endl;
    break;
case 17:
    cout<<"you are not an adult"<<endl;
    break;
case 20:
    cout<<"you can give vote"<<endl;
    break;


default:
    cout<<"sorry your age is not between 18 to 20"<<endl;
    break;
}


return 0;



}