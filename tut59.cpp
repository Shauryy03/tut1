#include<iostream>
using namespace std;
// templates with multiple parameters
template<class T1, class T2>
class myclass{
    public:
      T1 data1;
      T2 data2;
      myclass(T1 a, T2 b){
        data1=a;
        data2=b;
      }
      void display(){
        cout<<data1<<endl<<data2<<endl;
      }
};


int main(){

    myclass <int, char>obj(10,'c');
    obj.display();
    
    return 0;
}