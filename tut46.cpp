#include<iostream>
using namespace std;

// example of virtual base class
/*
     student----->test
     student----->sports

     test------>result
     sports------>result

*/

class Student{
    protected:
      int roll_no;
    public:
      void set_number(int x){
        roll_no = x;
      }
      void print_roll(void){
        cout<<"Your roll number is : "<<roll_no<<endl;
      }
};

class Test : virtual public Student{
    protected:
       float maths, physics, chemistry;
    public:
       void set_marks(float a, float b, float c){
           maths =a;
           physics= b;
           chemistry = c;
       }
       void print_marks(void){
          cout<<"MARKS OBTAINED"<<endl
           <<" physics : "<<physics<<endl
           <<" chemistry : "<<chemistry<<endl
           <<" maths : "<<maths<<endl;
       }
};

class Sports : virtual public Student{
    protected:
        float score;
    public:
        void set_score(float s){
            score = s;
        }
        void print_score(void){
         cout<<"your PT score is : "<<score<<endl;
        }
};

class Result : public Test, public Sports{
    protected:
      float total;
    public:
       void display(void){
         total = chemistry + physics + maths + score;
         print_roll();
         print_marks();
         print_score();
         cout<<"your total marks is : "<<total<<endl;
       }
};


int main(){

    Result shaury;
     shaury.set_number(114);
     shaury.set_marks(88.9,93.0,87.5);
     shaury.set_score(8);
     shaury.display();
    
    return 0;
}