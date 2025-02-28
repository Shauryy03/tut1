#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    
 map<string, int> marksMap;
 marksMap["shaury"]=89;
 marksMap["sahil"]=90;
 marksMap["harry"]=99;

 marksMap.insert({{"ram", 9},{"shyam", 80}});

 map<string, int> :: iterator iter;
 for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
 {
    cout<<(*iter).first<<" "<<(*iter).second<<"\n";
 }
 
cout<<"the size is "<<marksMap.size();
    return 0;
}