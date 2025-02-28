#include<iostream>
using namespace std;

//forward declearation
class complex;

class calculator{
    public:
     int add(int a,int b){
        return (a+b);
     }
     int sumrealcomplex(complex a1, complex a2);
 //    {
 //     return(a1.a + a2.a);        it is giving error because here we hhave above declear the class complex but we havent tell that
//     }                             ki usme a hai ya b hai islye run nhi hoga ,,,
                              //     so we will only declear the function here we will define it later
};

class complex{
    int a;
    int b;
friend int calculator :: sumrealcomplex(complex a1, complex a2);    // decleration of friend function of calculator class
  public:
    void setnumber(int x1, int x2){
       a=x1;
       b=x2;
    }
    void printnumber(){
        cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
    }
}; 

  int calculator :: sumrealcomplex(complex a1, complex a2){
        return(a1.a + a2.a);
     }



int main(){
     complex o1, o2;

     o1.setnumber(3,6);
     o1.printnumber();

     o2.setnumber(5,7);
     o2.printnumber();

    calculator cal;

    int res = cal.sumrealcomplex(o1,o2);
    cout<<"the sum of real part of o1 and o2 is "<<res<<endl;
    return 0;
}