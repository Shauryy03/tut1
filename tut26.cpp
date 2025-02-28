#include<iostream>
using namespace std;

 class employee{
   int id;
   static int count;     // class ke andr batana padega static count ko

  public :
    void setdata(void){
    cout<<"enter the ID "<<endl;
    cin>>id;
    count++;
   }
   void getdata(void){
    cout<<"the ID of employee is "<<id<<" and this is employee number "<<count<<endl;
   }
   static void getcount(void){               // 
    cout<<"the value of count is "<<count<<endl;
   }
};

int employee :: count;    //default value is zero

int main(){
    employee shaury, shubham, dhananjay;
    shaury.setdata();
    shaury.getdata();
    employee::getcount();

    shubham.setdata();
    shubham.getdata();
    employee::getcount();

    dhananjay.setdata();
    dhananjay.getdata();
    employee::getcount();
    
    return 0;
}