/*
exercise: 
   create 2 classes 
   1. first is simple calculator 
   2. second is scientific calculator
   3. then create third class called hybrid calculator which is derived from both first and second class
   
*/

#include<iostream>
#include<cmath>
using namespace std;

class Calculator{
    protected:
     float a,b;
    public:
     void set_cal(){
        cout<<"enter the value of a :"<<endl;
        cin>>a;
        cout<<"enter the value of b :"<<endl;
        cin>>b;
     }
     void show_cal(void){
        cout<<"the sum is "<<a+b<<endl;
        cout<<"the subtraction is "<<a-b<<endl;
        cout<<"the multiplication is "<<a*b<<endl;
        cout<<"the division is "<<a/b<<endl;
     }
};

class Scientific_Calculator{
    protected:
     int c,d;
    public:
     void set_sci_cal(){
        cout<<"enter the value of c :"<<endl;
        cin>>c;
        cout<<"enter the value of d :"<<endl;
        cin>>d;
     }
     void show_sci_cal(void){
        cout<<"the square is "<<c*c<<endl;
        cout<<"the cube is "<<c*c*c<<endl;
        cout<<"the squar root  is "<<sqrt(c)<<endl;
        cout<<"the square is "<<d*d<<endl;
        cout<<"the cube is "<<d*d*d<<endl;
        cout<<"the squar root  is "<<sqrt(d)<<endl;
     }
};

 class Hybrid_Calculator : public Calculator, public Scientific_Calculator{
    public:
      void show(){
         show_cal();
         show_sci_cal();
      }
      
 };

int main(){
    
   Hybrid_Calculator c1;
   c1.set_cal();
   c1.set_sci_cal();

   c1.show();

    return 0;
}