#include<iostream>
using namespace std;

class BaseClass{
    public:
     int var_base;
     void display(){
        cout<<"displaying base class variable var_base "<<var_base<<endl;
     }
};

class DerivedClass : public BaseClass{
    public:
     int var_derived;
     void display(){
     cout<<"displaying base class variable var_base "<<var_base<<endl;
     cout<<"displaying derived class variable var_derived "<<var_derived<<endl; 
}
};

int main(){
    BaseClass * base_class_pointers;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointers = & obj_derived;
     
    base_class_pointers->var_base = 34;
    base_class_pointers->display();

    // base_class_pointers->var_derived = 123; will show the error

    DerivedClass * derived_class_pointers;
    derived_class_pointers = & obj_derived;
    derived_class_pointers->var_derived = 1119;
    derived_class_pointers->display();

    
    return 0;
}