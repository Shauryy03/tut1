#include<iostream>
using namespace std;
int main(){
    // what is a pointer
    //       int* a= 4 ;(pointer)
    //        float*  b=&a;(address of a)
    
    int a=3; 

    int* b= &a;

    cout<<"address of a: "<<*b<<endl; 




  return 0;
}