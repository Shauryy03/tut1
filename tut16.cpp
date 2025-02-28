#include <iostream>
using namespace std;
int main()
{

    int i;
    // arrays =    datatype of array x[size of srry]

    int marks[4] = {165, 123, 177, 189};
    i = 0;

    //           marks[4]= {12,13,14,15};    // we can declear arrys like this also
    //           marks[0]=1;marks[1]=23; and so on...

    cout << "marks is " << marks[0] << endl;
    cout << endl;

    // print the marks of arrays by using do while loop

    do
    {
        cout << "marks of " << i << " is: " << marks[i] << endl;
        i++;
    } while (i < 4);

    cout << endl;

    marks[2] = 245;

    // print the marks of arrays by using while loop

    while (i <= 3)
    {
        cout << "marks of " << i << " is: " << marks[i] << endl;
        i++;
    }

    marks[0] = 112;

    // print the marks of arrays by using for loop

    cout << endl;

    for (i; i < 4; i++)
    {
        cout << "marks of " << i << " is: " << marks[i] << endl;
    }

    return 0;
}