#include<iostream>
using namespace std;

class y;

class x{
    int data;

    public :
     void setValue(int value){
     data=value;
}
    friend void add(x o1, y o2);
};

class y{
    int num;

    public : 
     void setValue(int value){
     num=value;
}
    friend void add(x o1, y o2);
};

void add( x o1, y  o2){
    cout<<"summing data of x and y objects gives me "<<o1.data+o2.num;

}

int main(){

    x x1;
    x1.setValue(6);

    y y1;
    y1.setValue(8);

    add(x1,y1);

     
    return 0;
}