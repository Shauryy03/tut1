#include<iostream>
using namespace std;

class complex{
  int a, b;
    
    public:

      complex(void){     // decleration of constructor
        a=12;
        b=9;
      }
     
     void print_number(){
        cout<<"Your complex number is : "<<a<<" + "<<b<<"i"<<endl;
     }

};

int main(){
    complex c1, c2;
      c1.print_number();
      c2.print_number();
    return 0;
}