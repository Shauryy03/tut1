#include<iostream>

using namespace std;

int main(){


    //control structure - selection control structure --- if else statement

int age;

cout<<"enter your age : ";
cin>>age;

if(age>18){
    cout<<"you are adult and can give vote."<<endl;
}
else if(age==18){
    cout<<"you can give vote."<<endl;
}
else{
     
    cout<<"you are kid and you don't have to right to give vote."<<endl;
}

return 0;



}