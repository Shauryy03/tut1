#include<iostream>
using namespace std;

//base class
class employee{
    public:
      int id;
      float salary;  
      employee(){}
      employee(int emp_id)
      {
        id = emp_id;
        salary = 10.0;
      }
};

/* 
 derived class syntax
 class derived_class_name : visibility_mode base_class_mode
 {
    members/method/etc...
 }
*/
class programmer : public employee{
    public:
     int langaugecode ;
     programmer(int pro_id){
       id = pro_id ;
       langaugecode = 3;
     } 
     void getdata(){
        cout<<id<<endl;
     }

};



int main(){
    employee shubh(101), shaury(102);
    
    cout<<"employee ID: "<<shubh.id<<" salary: "<<shubh.salary<<endl;
    cout<<"employee ID: "<<shaury.id<<" salary: "<<shaury.salary<<endl;
 

    programmer skillf(102);
    cout<<"employee ID: "<<skillf.id<<" langauge known: "<<skillf.langaugecode<<endl;
    skillf.getdata();
    return 0;
}