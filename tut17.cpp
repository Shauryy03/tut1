  #include<iostream>
  using namespace std;
  int main(){

    int  marks[10]= {18,17,19,10,16,11,11,16,13,17};
     int* p = marks;

     for(int i=0; i<=10; i++){
      cout<<"the value of array at index value  "<<i<<" is : "<<*(p+i)<<endl;
      if(i==8){
        break;
      }
    
      }
     

    return 0;
  }