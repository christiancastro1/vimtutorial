/* TODO: write a loop that prints the sum of the first n odd cubes. */

#include <iostream>
using namespace std;

int main ()
{

  int count = 0; // keep track of the number of odd cubes im adding
  int product; // the cubes
  int cube = 1; // we will start with the 1
  int sum= 0; // sum of the cubes


  cout <<" The sum of how many first odd cubes do you want?";
  int number;
  cin >> number;  //first n odd cubes

  while (count != number){
    product = 0;
    product = cube*cube*cube;
    sum += product;
    cube +=2;
    count++;
  }
  cout<< "The sum of the first " <<number<<" odd cubes is "<<sum<<endl;


  return