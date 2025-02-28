#include<iostream>
#include<fstream>

using namespace std;

int main(){
    
ofstream write("samplefile56.txt") ;
  cout<<"enter the name ";
  string st;
  cin>>st;
  write<<"my name is "+ st;

  write.close();   //jis file me kaam kr rhe usme ab write krna close kr diye

  ifstream read("samplefile55.txt");
  string st2;
 // read>>st2;   // read only first word
   getline(read,st2);   // it will read whole line 
  cout<<st2;

    return 0;
}