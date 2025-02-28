#include<iostream>
using namespace std;
 int main(){

       // WAP to print n terms of natural number and their sum

    
int n, x, sum; 

cout<<"enter the number: "; 
cin>>n;



sum=0;

for(x=1; x<=n ;x++){
   cout<<x<<endl;
   sum=sum+x;
   ;
}
     cout<<"sum of first n natural number is: "<<sum<<endl;
      


    return 0;
 }