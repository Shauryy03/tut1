#include<iostream>
using namespace std;

int sum (int a, int b){
    int c = a+b;
    return c;
}
 // call by reference using pointer(stores adderess of value)
void swap(int* a, int* b){
  int temp=*a; // address of a (int* a), address of b(int* b)
  *a=*b;
  *b=temp;
}

int main(){
 int x=4, y=5;
 cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;
 swap(x,y);
 cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;    
    return 0;
}