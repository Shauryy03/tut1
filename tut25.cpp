#include <iostream>
using namespace std;

// object memory allocation using arrays in class

class shop
{
    int itemId[10];
    int itemPrize[10];
    int count;

public: 
    void initialCount(void) { count = 0; } // count 0 isliye kiya because it will do srt with 0 for every object
    void setPrize(void);
    void displayPrize(void);
};
void shop :: setPrize(void)
{
    cout << "enter the Id of the item " << count+1 << endl;
    cin >> itemId[count];
    cout << "enter the prize of the item " << endl;
    cin >> itemPrize[count];
    count ++;
}
void shop :: displayPrize(void)
{
    for (int i = 0; i < count; i++)
    {
        cout << "the prize of the item ID_" << itemId[i] << " is : " << itemPrize[i] << endl;
    }
}

int main()
{
    shop dukan_1;
    dukan_1.initialCount();
    dukan_1.setPrize();
    dukan_1.setPrize();
    dukan_1.setPrize();
    dukan_1.displayPrize();
    return 0;
}