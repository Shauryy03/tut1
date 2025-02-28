#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){

    int arr[] ={ 45,6,8,1,67,89,2};
    sort(arr,arr+7);
    sort(arr,arr+7,greater<int>()); // decending order me sort krega isko lagane ke baad   
    for (int i = 0; i < 8; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}