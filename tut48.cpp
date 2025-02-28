#include<iostream>
using namespace std;

/*

Case1:
    claass A : public B
    // order of execution of constructor is -- B() and then A()
 };

Case2:
    claass A : public B, public C
    // order of execution of constructor is -- B() then C() and then A()
 };

Case3:
   claass A : public B, virtual public C
        // order of execution of constructor is -- C() then B() and then A()
 };

*/

class Base1{
    int data1;
   public:
     Base1(int i){
        data1 = i;
        cout<<"Base 1 constructor is called "<<endl;
     }
     void PrintData1(void){
        cout<<"The value of data 1 is "<<data1<<endl;
     }
};

class Base2{
    int data2;
   public:
     Base2(int i){
        data2 = i;
        cout<<"Base 2 constructor is called "<<endl;
     }
     void PrintData2(void){
        cout<<"The value of data 2 is "<<data2<<endl;
     }
    
};

class Derived: public Base1, public Base2{
  int derived1, derived2;
   public:
       Derived(int a, int b, int c, int d): Base1(a), Base2(b){
        derived1 = c;
        derived2 = d;
        cout<<"derived class constructor is called"<<endl;
       }
       void PrintData3(void){
        cout<<"The value of derived 1 is "<<derived1<<" and derived 2 is "<<derived2<<endl;
     }
};



int main(){
    Derived d1(12,56,98,9);
    d1.PrintData3();
    d1.PrintData1(); 
    d1.PrintData2();
    return 0;
}