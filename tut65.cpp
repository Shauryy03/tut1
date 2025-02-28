#include<iostream>
#include<list>
using namespace std;

void display(list<int> &l){
     list<int> :: iterator it;
     for (it = l.begin() ; it != l.end(); it++)
     {
        cout<<*it<<" ";
     }
   cout<<endl;  
}

int main(){

    list<int> list1; // lit of zero length
//   list<int> list2(7); // empty list of size 7 
    list1.push_back(5);
    list1.push_back(6);
    list1.push_back(9);
    list1.push_back(1);
    list1.push_back(12);

   //   list<int> :: iterator iter;
  //    iter = list1.begin();
  //  cout<<*iter<<" ";
  //  iter++;
  //  cout<<*iter<<" ";
  //  iter++;
  //  cout<<*iter<<" ";
  //  iter++;
  //  cout<<*iter<<" ";
  display(list1);
  // removing elements from list
  list1.pop_back();  // remove the last element of list1
  list1.pop_back();   // it will remove  last 2nd element of list
  list1.pop_front();  // removes the first element
  list1.remove(9);    // it will remove 9 from list
  display(list1);

   list<int> list2(3);
   list<int> :: iterator iter;
    iter = list2.begin();
    *iter=45;
    iter++;
    *iter=6;
    iter++;
    *iter=9; 
    display(list2);
    list2.sort();  // assending order me sort hojayegi list
    display(list2);

    cout<<"list 1 after merging ";
    list1.merge(list2);
    display(list1);

  //  reversing the list
   list1.reverse();
   display(list1);

    return 0;
}