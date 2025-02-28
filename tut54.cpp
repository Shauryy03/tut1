#include<iostream>
#include<cstring>
using namespace std;

class CWH{
    protected:
       string title;
       float rating;
    public:
        CWH(string s, float r){
           title = s;
           rating = r;
        }
        virtual void display(){};
};

class CWH_video : public CWH{
    
    int video_length;
      public:
       CWH_video(string s, float r,int vl) : CWH(s,r){
        video_length = vl;
       } 
        void display(){
        cout<<"this is an amazing video with title "<<title<<endl;
        cout<<"rating : "<<rating<<" out of 5 star"<<endl;
        cout<<"the length of video is  "<<video_length<<endl;
       }

};

class CWH_word : public CWH{
    
    float word_length;
      public:
       CWH_word(string s, float r,float w) : CWH(s,r){
        word_length = w;
       } 
       void display(){
        cout<<"this is an amazing text tutorial with title "<<title<<endl;
        cout<<"rating of text tutorial : "<<rating<<" out of 5 star"<<endl;
        cout<<"the number of word in the text tutorial  is  "<<word_length<<" word"<<endl;
       }

};

int main(){

    string title;
    float rating, vlen;
    int wlen;

// for code with harry video 
    title ="Django tutorial";
    vlen = 4.56;
    rating = 4.89;

    CWH_video djvideo(title,rating,vlen);
   // djvideo.display();

// for code with harry text
    title ="Django tutorial text";
    wlen = 556;
    rating = 2.9;

    CWH_word djtext(title,rating,wlen);
   // djtext.display();


    CWH * tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}