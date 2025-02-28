#include<iostream>
using namespace std;

//    function over loading
 
// cylinder box
int volume(double r, int h){
    return 3.14*r*r*h;
}

// cube box
int volume(int a){
    return a*a*a;
}


int main(){

    cout<<"volume of cube: "<<volume(6)<<endl;
    cout<<"volume of cylinder: "<<volume(6,10)<<endl;
    
    return 0;
}