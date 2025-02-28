#include<iostream>
using namespace std;
//templates with default parameters
template<class T1=int, class T2=float, class T3=char>
class shaury{
    public:
     T1 data1;
     T2 data2;
     T3 data3;
     shaury(T1 a, T2 b , T3 c){
        data1=a;
        data2=b;
        data3=c;
     }
     void display (){
        cout<<"the value of data 1 is : "<<data1<<endl;
        cout<<"the value of data 2 is : "<<data2<<endl;
        cout<<"the value of data 3 is : "<<data3<<endl;
     }
};
int main(){

    shaury <> obj(22,56.9,'c');
    obj.display();

    cout<<endl;

    shaury<float, char, char> obj2(22.1,'s','b');
    obj2.display();
    
    return 0;
}