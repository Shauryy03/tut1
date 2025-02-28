#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
  for (int i=0; i<v.size();i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
}

int main(){
    // first way to create vector
    vector<int> vec1;
    int element, size;
    cout<<"enter the size of vector: ";
    cin>>size;

    for (int i = 0; i < size; i++)
    {
        cout<<"enter the element to add this vector: ";
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);
    vec1.pop_back();
    display(vec1);

    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter,2,566);
    display(vec1);

    // second way to create vector
    vector<int> vec2(5 );
    vec2.push_back(4);
    display(vec2);

    return 0;
}
