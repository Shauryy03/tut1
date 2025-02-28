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
     void set_cal(float y, float x){
        a=y;
        b=x;
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
     int a;
    public:
     void set_sci_cal(float y){
        a=y;
     }
     void show_sci_cal(void){
        cout<<"the square is "<<a*a<<endl;
        cout<<"the cube is "<<a*a*a<<endl;
        cout<<"the squar root  is "<<sqrt(a)<<endl;
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
   c1.set_cal(100.0,25.0);
   c1.set_sci_cal(64);

   c1.show();

    return 0;
}