#include<iostream>
using namespace std;

int count =0;

class num{
    public: 
     num(){
        count++;
        cout<<"this is time when constructor is called for object number "<<count<<endl;
     }
     ~num(){      // destructor
        cout<<"this is time when destrucor is called for object number "<<count<<endl;
        count--;
     }

};
int main(){
    cout<<"we are inside our main function "<<endl;
    cout<<"creating our 1st object"<<endl;
    num n1;
    {
        cout<<"entering this block"<<endl;
        cout<<"creating two more object"<<endl;
        num n2, n3;
        cout<<"entering this block"<<endl;
    }
    cout<<"back to main function"<<endl;
    
    return 0;
}
