#include<iostream>
using namespace std;

class Number{
    int a;
     public:
      Number(){      //default constructor
        a=0;
      }
      Number(int num){
        a= num;
      }
//   when no copy constructor will found, compiler supplies its own copy constructor 
//   compiler assign 1 copy constructor to compiler defaultily
      Number(Number &obj){                // copy contructor
        cout<<"copy constructor called "<<endl;
        a = obj.a;
      }
      void display(){
        cout<<"the number for this object is "<<a<<endl;
      }
};

int main(){

    Number x, y, z(45) , z2;
    x.display();
    y.display();
    z.display();

    Number z1(x);        // copy constructor invoked
    z1.display();

    // z2 = z;  copy constructor will not be invoked

     // number z3 = z;  copy constructor  be invoked
    
    return 0;
}