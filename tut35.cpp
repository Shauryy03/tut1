// quiz by code with harry in video 30 of c++ tutorials playlist
//create a class points that take x codinate and y codinate and print them after that
//create a function that take two  points codinates and print distance between them


#include<iostream>
#include<cmath>
using namespace std;

class points{
    int x, y;
     
     public:
       friend points distance( points a, points b);
     // constructor to set values
        points( int a, int b){
            x=a;
            y=b;
        }
     // function to display codinates
       void display_number(){
        cout<<"the codinates of ponit is ("<<x<<","<<y<<")"<<endl;
       }
};

     // function to find distance between two points
       points distance(points a, points b){
        int d1 = (a.x-b.x)*(a.x-b.x);
        int d2 = (a.y-b.y)*(a.y-b.y);
        int d3 = d1+d2;
        int d = sqrt(d3);

        cout<<"distance between codinates is "<<d<<endl;
       }

int main(){

    points p1(0,4), p2(0,6);
    p1.display_number();
    p2.display_number();

    points dis = distance(p1,p2);
    
    return 0;
}