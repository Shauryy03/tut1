#include<iostream>
using namespace std;


//functios in c++

    int sum(int a,int b){     // this is the funcition of sum
        int c=a+b;
        return c;
    }

    float divide(int a,int y){    // this is the funcition of dividde
        int c=a/y;
        return c;
    }

     int main(){

        int num1,num2;
        cout<<"enter first number: "<<endl;
        cin>>num1;
        cout<<"enter second number: "<<endl;
        cin>>num2;
        cout<<"sum is : "<<sum(num1,num2)<<endl;
        cout<<"divide is : "<<divide(num1,num2)<<endl;

    return 0;
}