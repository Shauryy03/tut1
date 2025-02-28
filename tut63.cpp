#include<iostream>
using namespace std;

void fun(int a){
    cout<<"i m first function "<<a<<endl;
}

template <class T>
void fun(T a){
    cout<<"i m templatized function "<<a<<endl;
}

int main(){

    fun(4.8);
    
    return 0;
}