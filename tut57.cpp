#include<iostream>
#include<fstream>

using namespace std;

int main(){
    
    ofstream out;
    out.open("samplefile57.txt");
    out<<"this is also me"<<endl;
    out<<"this is shaury"<<endl;
    out<<"this is sahil"<<endl;
    out.close();

    ifstream in;
    string st1,st2,st3;
    in.open("samplefile57.txt");
 //   in>>st1>>st2>>st3;
 //   cout<<st1<<" "<<st2<<" "<<st3;
 
     while (in.eof()==0){
        getline(in,st1);
        cout<<st1<<endl;
     }
    

    in.close();


    return 0;
}