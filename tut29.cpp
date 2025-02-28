#include<iostream>
using namespace std;

class complex{
    int a;
    int b;

  public:
    void setdata(int x1, int x2){
       a=x1;
       b=x2;
    }
   friend complex sumofcomplex(complex o1,complex o2);    // decelaration of friend function
   void printnumber(){
    cout<<"your complex number is "<<a<<" + "<<b<<"i"<<endl;
   }
 //  complex sumofcomplex(complex y1,complex y2){
 //   a = y1.a + y2.a;
 //  b = y1.b + y2.b;
 // }

};
 complex sumofcomplex(complex o1,complex o2){
     complex o3;
     o3.setdata((o1.a+ o2.a),(o1.b+o2.b));
     return o3;
 }

int main(){
    
    complex c1,c2 , c3;

    c1.setdata(3,4); 
    c1.printnumber();

    c2.setdata(6,7);
    c2.printnumber();

    c3 = sumofcomplex(c1,c2);
    c3.printnumber();
       
    return 0;
}