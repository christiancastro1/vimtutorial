#include <iostream>
using namespace std;

int main ()
{
  int i = 42; 
  int *p;
  int *&r = p;
  r = &i;
  cout << "this is p" << *p <<endl;
  cout << " this is r"<<*r <<endl;
 return 0;

}
