#include<iostream>
using namespace std;

class Shop{
    int Id;
    float Prize;
    public:
      void set_data(int x,float y){
        Id = x;
        Prize = y;
      }
      void get_data(){
        cout<<"item id is :"<<Id<<endl;
        cout<<"the prize of item id "<<Id<<" is :"<<Prize<<endl;
      } 
};

int main(){

    int size = 3;
    // general = item 1
    // hardware = item 2
    // veggies = item 3
    Shop *ptr = new  Shop [size];
    Shop *ptr_temp = ptr;
    int p;
    float q;
    for (int i = 0; i < size ; i++)
    {
        cout<<"enter id and prize of item "<<i+1<<" : ";
        cin>>p>>q;
        (*ptr).set_data(p,q);
        // ptr->setdata(p,q)
        ptr++;
    };
     for ( int i = 0; i < size; i++)
     {
        cout<<"item number: "<<i+1<<endl;
        ptr_temp->get_data();

    }    
    return 0;
}