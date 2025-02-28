#include<iostream>
using namespace std;

class employee{
    int id;
    int salary;
 public:
  void setID(void){
    cout<<"enter id of salary"<<endl;
    cin>>id;
  }
   void getID(void){
    cout<<"the id of the employee is "<<id<<endl;
   }
};

int main(){
 //   employee saurabh, harry, rohan;
 //   saurabh.setID();
 //   saurabh.getID();

 employee lnct[5];
  
  for(int i=0; i<5;i++){
    lnct[i].setID();
    lnct[i].getID();
  }

    
    return 0;
}