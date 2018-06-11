#include <iostream>
#include <vector>
using std::vector;
#include <cstdio>
#include <stdlib.h> // for exit();
#include <getopt.h> // to parse long arguments.
#include <unistd.h> // sleep
using namespace std ;

int main ()
{
  vector<vector<int> > numberlist;
  int number;

  for (int i = 0; i < 6; i++)
  {

    cout << "ENTER A NUMBER"<< endl;
    cin  >> number;

   // numberlist.push_back(number);

  }
    for (int i = 0; i < 6; i++)
  {
      //cout << numberlist[i];
  }


  return 0;
}


