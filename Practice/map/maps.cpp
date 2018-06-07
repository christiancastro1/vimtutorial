#include <iostream>
#include <string>
#include <map>   // is needed to use maps
using namespace std;



int main (){

  map<string, int>Name = { {"Christian",3},{"Castro",2}};


  #if 1

  string firstname;
  while (cin >> firstname){
    Name[firstname]++;
  }
  typedef map<string,int>::iterator si;

  for (si I = Name.begin(); I != Name.end(); I++) {
    cout << I->first<< " " << (*I).second <<endl;

  }
 #endif




















  return 0;
}