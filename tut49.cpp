#include<iostream>
using namespace std;

class Test{
    int a;
    int b;
  public:
     Test(int i , int j) : a(i), b(j)
   // Test(int i , int j) : a(i), b(j*2)
   // Test(int i , int j) : a(i), b(i+j)
   // Test(int i , int j) : a(i), b(j+a)
   // Test(int i , int j) : b(i), a(i+b)   -- that will not run it will show us garbage value because class me humne a ko
   //                                          phele declear kiye h or jo phle declear hota h vo phle initilize hota h
    {
    cout<<"constructor is called"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    }   
};

int main(){
    Test T1(4,6);
    
    return 0;
}
