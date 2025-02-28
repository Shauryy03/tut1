#include<iostream>
using namespace std;

class Base1{
    protected:
       int base1var;
    public:
       void set_base1(int a){
        base1var = a;
       }
};

class Base2{
    protected:
       int base2var;
    public:
       void set_base2(int a){
        base2var = a;
       }
};

class Derived : public Base1, public Base2{
    public:
      void show(void){
        cout<<"the value of base 1 is "<<base1var<<endl;
        cout<<"the value of base 2 is "<<base2var<<endl;
        cout<<"the sum of base 1 and base 2 is "<<base1var + base2var<<endl;
      }
};


int main(){
    
    Derived shaury;
    shaury.set_base1(22);
    shaury.set_base2(88);
    shaury.show();



    return 0;
}