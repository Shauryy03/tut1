#include<iostream>
using namespace std;
/*

float funAverage(int x, int y){
    float avg = (x+y)/2.0;
    return avg;

*/
template <class T1, class T2>
float funAverage(T1 x, T2 y){
    float avg = (x+y)/2.0;
    return avg;
}

int main(){
    
    float a;
    a = funAverage<int, float>(5,9.86);
    cout<<"the average of these number is "<<a<<endl;

    return 0;
}