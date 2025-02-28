#include<iostream>
using namespace std;

class complex{
    int real, imaginary;
    public:
       void getdata(void){
        cout<<"the real part is "<<real<<endl;
        cout<<"the imaginary part is "<<imaginary<<endl;
       }
       void setdata(int x, int y){
           real = x;
           imaginary = y;
       } 
};

int main(){
 //   complex c1;
 //   complex *ptr = &c1;        // pointer ptr points to objet c1
 //   (*ptr).setdata(23,56);
 //   (*ptr).getdata();  

    // we can make aobje through new operator
    complex *ptr = new complex;
    (*ptr).setdata(23,56);
  // use of arrow operator  isko  (*ptr).getdata();   hum ase bhi likh skte h ptr->getdata();
 //   (*ptr).getdata();
      ptr->getdata();     // i arrow ka matlv h ki is pointer ko dereferral kro or uska getdata function run kro  

    // complex c1;
   // c1.setdata(23,56);
   // c1.getdata();



    return 0;
}