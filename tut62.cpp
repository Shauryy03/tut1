#include<iostream>
using namespace std;

template <class T>
class harry{
    public:
      T data;
      harry(T x){
        data = x;
      }
      void display();
};

template <class T>
void harry<T> ::display() {
    cout<<data<<endl;
}



int main(){

//    harry <float> obj(7.88);
//    harry <int> obj(7.88);
    harry <char> obj('s');
    obj.display(); 
    
    return 0;
}