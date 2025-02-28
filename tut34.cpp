#include<iostream>
using namespace std;

class complex{
  int a, b;
    
    public:

      complex(int x, int y){     // decleration of parametized constructor   
        a=x;
        b=y;
      }
     
     void print_number(){
        cout<<"Your complex number is : "<<a<<" + "<<b<<"i"<<endl;
     }

};

int main(){
    // this is implicit call for passing the value to the cunstructor
    complex c1(4,5) ;

    // this is explicit call for passing the value to the cunstructor
     complex c2 = complex(5,7);


      c1.print_number();
      c2.print_number();
    return 0;
}