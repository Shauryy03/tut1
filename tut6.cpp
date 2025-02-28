  
  //system header file
  #include<iostream>  
 using namespace std;
  
  int main (){
    int a, b;
    a=4;
    b=5;
    // airthmatic operators
     cout<<"following are airthmatic operation in c++"<<endl;
        cout<< "the value of a+b "<<a+b<<endl;
        cout<< "the value of a-b "<<a-b<<endl;
        cout<< "the value of a*b "<<a*b<<endl;
         cout<< "the value of a/b "<<a/b<<endl;
        cout<< "the value of a++ "<<a++<<endl;
        cout<< "the value of a-- "<<a--<<endl;
        cout<< "the value of ++a "<<++a<<endl;
        cout<< "the value of --a "<<--a<<endl;

         
         cout<<endl;


           //comparison operator in c++
         cout<<"following are the comparison operators in c++"<<endl;
          cout<< "the value of a==b "<<(a==b)<<endl;
          cout<< "the value of a!=b "<<(a!=b)<<endl;
          cout<< "the value of a<=b "<<(a<=b)<<endl;
          cout<< "the value of a>=b "<<(a>=b)<<endl;
          cout<< "the value of a<b "<<(a<b)<<endl;
          cout<< "the value of a>b "<<(a>b)<<endl;
          cout<<endl;



        //logical operator in c++
        cout<<"following are the logical operators"<<endl;
        cout<<"the value of &&-and logical operator "<<((a==b)&&(a<b))<<endl;
        cout<<"the value of ||-or logicial operator "<<((a==b)||(a>b))<<endl;
        cout <<"the value of !- not logicial operator "<<(!(a==b))<<endl;



    return 0;

  }
 