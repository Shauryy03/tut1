#include<iostream>
using namespace std;

  class Student{
    protected:
     int roll_no;
     public:
      void set_roll_no(int r);
      void get_roll_no(void);
  };
      void Student :: set_roll_no (int r){
        roll_no = r;
      }
      void Student :: get_roll_no (void){
         cout<<" the roll number is "<<roll_no<<endl;
      }

      class Exam : public Student{
        protected:
          float maths_marks;
          float physics_marks;
          float chemistry_marks;
          float hindi_marks;
          float english_marks;
        public:
         void set_marks(int m,int p, int c, int h, int e);
         void get_marks(void);
      };
      void Exam :: set_marks(int m,int p, int c, int h, int e){
          maths_marks = m;
          physics_marks = p;
          chemistry_marks = c;
          hindi_marks = h;
          english_marks = e;
      }
       void Exam :: get_marks(void){
        cout<<" the marks obtained in math is "<<maths_marks<<endl;
        cout<<" the marks obtained in physics is "<<physics_marks<<endl;
        cout<<" the marks obtained in chemistry is "<<chemistry_marks<<endl;
        cout<<" the marks obtained in hindi is "<<hindi_marks<<endl;
        cout<<" the marks obtained in english is "<<english_marks<<endl;
       }

       class result : public Exam{
        float percentage;
         public:
          void display(void){
            get_roll_no();
            get_marks();
            cout<<" your percentage is "<<(maths_marks + physics_marks + chemistry_marks + hindi_marks + english_marks)/5<<"%"<<endl;
          }

       };

int main(){
    result shaury;
    shaury.set_roll_no(16521);
    shaury.set_marks(89,96,77,78,80);
    shaury.display();
    
    return 0;
}