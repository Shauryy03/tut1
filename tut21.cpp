#include<iostream>
using namespace std;

// recursion

int factorial(int n){               //factorial by function  { but yha pr condition lagani padegi taki function 1 pr ruk jaye}
   if(n<=1){
    return 1;
      }
 int f= n*factorial(n-1);               // n!=n*n(n-1)!
 
// working n*factorial(n-1)!
//     5*fact(4);
//     5*4*fact(3);.... so on until 1

   return f;
}
int main(){

    int a;
    cout<<"enter the number : ";
    cin>>a;
     cout<<a<<"! = "<<factorial(a)<<endl; 
    return 0;
}