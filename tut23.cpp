#include<iostream>
using namespace std;

// class
class employee{
    private :
     int a,b,c;
     public :
     int e,d;
     void setdata(int a1,int b1,int c1);
     void getdata(){
       cout<<"the value of a: "<<a<<endl;     
        cout<<"the value of b: "<<b<<endl;
         cout<<"the value of c: "<<c<<endl;
          cout<<"the value of d: "<<d<<endl;
           cout<<"the value of e: "<<e<<endl;
     }
};

void employee :: setdata(int a1, int b1, int c1){
  a=a1;
  b=b1;
  c=c1;
}

int main(){
    // employee class ka object
    employee shaury;
    shaury.e=124;
    shaury.d=193;
    shaury.setdata(133,336,789);  
    shaury.getdata();

    return 0;
}