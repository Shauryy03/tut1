#include<iostream>
using namespace std;


class Base1{
    public:
      void greed(){
        cout<<"how are you"<<endl;
      }
};

class Base2{
    public:
      void greed(){
        cout<<"kaise ho"<<endl;
      }
};

class derived : public Base1, public Base2{
   int a;
    public:
     void greed(){
        Base1 :: greed();
     }
};


int main(){
    Base1 base1obj;
    Base2 base2obj;
    base1obj.greed();
    base2obj.greed();

    derived d1;
    d1.greed();
    
    return 0;
}