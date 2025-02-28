#include<iostream>
#include<fstream>
using namespace std;

int main(){

//   string st="harry bhai";
//  opening file using constructor and writing it
//   ofstream out("samplefile55.txt");    // write operation
//    out<<st;

    
     string st2;
//  opening file using constructor and reading it
     ifstream in("samplefile55.txt");  // read operation
//   in>>st2;
     getline(in,st2);
     cout<<st2<<endl;

    return 0;
}