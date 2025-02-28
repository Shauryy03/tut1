#include<iostream>
using namespace std;
int main(){
  
  int n,fib1,fib2,nextfib;
  cout<<"enter the  number of term to print fibb  series : ";
  cin>>n;

  fib1=0;
  fib2=1;

  cout<<"the series is :-"<<endl;

  if( n>1){
  cout<<"0"<<endl;
  }

  if (n>2)
  {
    cout<<"1"<<endl;
  }
  

   for(int i=0; i<=n-3; i++){

    nextfib=fib1+fib2;
    fib1=fib2;
    fib2=nextfib;

    cout<<nextfib<<endl;
    

   };



    return 0;
}