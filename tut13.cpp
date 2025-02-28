#include<iostream>

using namespace std;

int main(){

       // program to print the tabel of a number

int a ,i, tabel;
 
 cout<<"enter the number to print tabel: ";
 cin>>a;

 i=1;
 tabel=a*i;

do{
    cout<<tabel<<endl;
    i++;
}while(i<=10);





    return 0;
}