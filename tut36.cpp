#include<iostream>
using namespace std;

class BankDeposit{

    int principle;
    int year;
    float interestRate;
    float returnValue;

 public:
    BankDeposit(){}
    BankDeposit(int p, int y, float r); // float h mtlv rate ki value .44 bhi ho sakti h
     BankDeposit(int p,int y, int r);   // intrest rate = 4 percetage
     void show();
};

BankDeposit :: BankDeposit(int p,int y, float r){
    principle  = p;
    year = y;
    interestRate = r;
    returnValue = principle;

    for(int i=0; i<y ; i++){
        returnValue = returnValue*(1+r);     
    }
}
BankDeposit :: BankDeposit(int p,int y, int r){
    principle  = p;
    year = y;
    interestRate = float(r)/100;
    returnValue = principle;

    for(int i=0; i<y ; i++){
        returnValue = returnValue*(1+interestRate);
    }
}
   void BankDeposit :: show(){
    cout<<endl<<"principle amout was "<<principle<<endl
            <<"return value after "<<year<<" year is "<<returnValue<<endl;

 }

int main(){
    
    BankDeposit bd1,bd2,bd3;

    int p,y;
    float r;
    int R;

    cout<<"enter the value of p y and r "<<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposit(p,y,r);
    bd1.show();

    cout<<"enter the value of p y and R "<<endl;
    cin>>p>>y>>R;
    bd2 = BankDeposit(p,y,R);
    bd2.show();

   
    return 0;
}