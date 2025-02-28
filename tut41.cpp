#include<iostream>
using namespace std;

    class Base {
        int data1;   // private member is not inherited
        public:
         int data2;
         void setdata();
         int getdata1();
         int getdata2();

    };
        void Base :: setdata(void){
         data1 = 10;
         data2 = 20;

    }
        int Base :: getdata1(void){
        return data1;
    }
        int Base :: getdata2(void){
        return data2;
    }

    class Derived : public Base{
        int data3;
        public:
         void display();
         void process();
    };
        void Derived :: process(void){
            data3 = data2*getdata1();
        }
        void Derived :: display(void){
            
            cout<<"the value of data1 is "<<getdata1()<<endl;
            cout<<"the value of data2 is "<<data2<<endl;
            cout<<"the value of data3 is "<<data3<<endl;
        }


 int main(){ 
    Derived object1;
    object1.setdata();
    object1.process();
    object1.display();
    
    return 0;
}