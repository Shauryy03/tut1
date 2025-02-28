#include <iostream>
using namespace std;

// structures in c++

struct employee
{
  int e_id;
  char e_block;
  double e_income;
};

// union in c++

union money
{
  int rice;
  float car;
  double bike;
};

int main()
{

  struct employee shaury;

  shaury.e_id = 123456;
  shaury.e_block = 'c';
  shaury.e_income = 100000;

  cout << " id of employee: " << shaury.e_id << endl;

  cout << " block of employee: " << shaury.e_block << endl;

  cout << " income of employee: " << shaury.e_income << endl;

  cout << endl;

  union money m1;

  m1.rice = 40;
  m1.car = 200.1;
  m1.bike = 10.111;

  cout << "prize of car is " << m1.car << endl;

  cout << "prize of bike is " << m1.bike << endl;

  // in union me output me hame ek he value shi milegi baki garbage because at a time we can use only 1 union

  return 0;
}